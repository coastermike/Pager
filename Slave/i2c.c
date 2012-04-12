#include <p24FJ16GA002.h>
#include "power.h"
#include "piezo.h"
#include "motor.h"
#include "i2c.h"

#define LIPOGAUGE_WRITE 0b11001000
#define LIPOGAUGE_READ 0b11001001
#define LIPO_VOLTAGE 0x08
#define LIPO_STATUS 0x00
#define LIPO_CONTROL 0x01

unsigned int stateI2C = 0, stateSlave = 0;
unsigned int datatype = 0, data = 0, sendMaster = 0, slaveTemp = 0;
unsigned int dataRequested = 0, mode = 0, fromLiPo = 0;

//I2C interrupt
//Contains state machine to go through the process of sending or receiving data
void __attribute__((interrupt, no_auto_psv)) _MI2C2Interrupt (void)
{
	_MI2C2IF = 0;
	if(stateI2C == 11)
	{
		stateI2C = 1;
		I2C2TRN = LIPOGAUGE_WRITE;
	}
	else if(stateI2C == 1)
	{
		if(mode == 1)
		{
			stateI2C = 2;
			if(dataRequested == 1)
			{
				I2C2TRN = LIPO_STATUS;
			}
			else if(dataRequested == 2)
			{
				I2C2TRN = LIPO_VOLTAGE;
			}
		}
		else if(mode == 2)
		{
			stateI2C = 10;
			I2C2TRN = LIPO_CONTROL;
		}		
	}
	else if(stateI2C == 2)
	{
		stateI2C = 3;
		I2C2CONbits.RSEN = 1;
	}
	else if(stateI2C == 3)
	{
		stateI2C = 4;
		I2C2TRN = LIPOGAUGE_READ;
	}
	else if(stateI2C == 4)
	{
		stateI2C = 5;
		I2C2CONbits.RCEN = 1;
	}
	else if(stateI2C == 5)
	{
		if(dataRequested == 1)
		{
			stateI2C = 8;
			fromLiPo = I2C2RCV;
			I2C2CONbits.PEN = 1;
		}
		else if(dataRequested == 2)
		{
			stateI2C = 7;
			fromLiPo = 0;
			fromLiPo = I2C2RCV;
			fromLiPo = fromLiPo<<8;
			I2C2CONbits.RCEN = 1;
		}
	}	
	else if(stateI2C == 7)
	{
		stateI2C = 9;
		fromLiPo |= I2C2RCV;
		I2C2CONbits.PEN = 1;
	}	
	else if (stateI2C == 8)
	{
		stateI2C = 9;
		I2C2CONbits.PEN = 1;
	}
	else if (stateI2C == 9)
	{
		stateI2C = 0;
	}
	else if(stateI2C == 10)
	{
		stateI2C = 8;
		I2C2TRN = dataRequested;
	}	
}

void __attribute__((interrupt, no_auto_psv)) _SI2C1Interrupt (void)
{
	_SI2C1IF = 0;
	Nop();
	//received address and writing slave
	if(I2C1STATbits.I2COV)
	{
		Nop();
	}	
	if(!I2C1STATbits.D_A && !I2C1STATbits.R_W)
	{
		stateSlave = 1;
		slaveTemp = I2C1RCV;
	}
	else if((stateSlave == 1) && I2C1STATbits.D_A && !I2C1STATbits.R_W)
	{
		datatype = I2C1RCV;
		stateSlave = 2;
	}
	else if((stateSlave == 2) && (I2C1STATbits.D_A && !I2C1STATbits.R_W))
	{
		data = I2C1RCV;
		switch(datatype)
		{
			case 1:	//backlight
				if(data == 0)
				{
					disable20V();
				}	
				else
				{
					enable20V();
				}
				break;
			case 2: //piezo with time
				actuatePiezo(data);
				break;
			case 3: //motor with time
				setMotorOn(data);
				break;
			case 4: //pulse piezo
				
				break;
			case 5: //pulse motor
				
				break;
		}
		//need to send data
		if(!I2C1STATbits.D_A && I2C1STATbits.R_W)
		{
			stateSlave = 3;
			slaveTemp = I2C1RCV;
		}	
		if(I2C1STATbits.D_A && I2C1STATbits.R_W && (stateSlave == 3))
		{
			//send LiPo V
			if(datatype == 1)
			{
				
			}
			//send LiPo Stat1,2
			else if(datatype == 2)
			{
				sendMaster = LIPO_STAT1 + (LIPO_STAT2 << 1);
			}
			I2C1TRN = sendMaster;
			stateSlave = 0;
		}		
		stateSlave = 0;
	}	
}
	
void i2cInit()
{
	//slave for comm with master
	I2C1BRG=37;
	I2C1CONbits.I2CEN = 1;	//enables I2C
	I2C1CONbits.A10M = 0;	//7-bit address
	I2C1ADD = 0b0101010;
//	I2C1CONbits.GCEN = 1;
	_SI2C1IE = 1;			//I2C interrupt enable
	_SI2C1IP = 4;		//priority 4
	
	//master for accel and bat voltage
	I2C2BRG=157;
	I2C2CONbits.I2CEN = 1;	//enables I2C
	I2C2CONbits.A10M = 0;	//7-bit address
	_MI2C2IE = 1;			//I2C interrupt enable
	_MI2C2IP = 4;		//priority 4
	i2cWrite(0b10111000);
}

void i2cWrite(unsigned int value)
{
	if((stateI2C == 0) && !I2C2STATbits.S)
	{
		stateI2C = 11;
		mode = 2;
		dataRequested = value;
		I2C2CONbits.SEN = 1;
	}	
}

//1-status. 2-voltage
unsigned int i2cLIPO(unsigned int reading)
{
	if((stateI2C == 0) && !I2C2STATbits.S)
	{
		stateI2C = 11;
		mode = 1;
		if(reading == 1)
		{
			dataRequested = reading;
		}
		else if(reading == 2)
		{
			dataRequested = reading;
		}		
		I2C2CONbits.SEN = 1;
		while(stateI2C != 0);
		return fromLiPo;
	}
	return 0;
	
}
