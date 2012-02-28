#include <p24FJ16GA002.h>

unsigned int stateI2C = 0;

//I2C interrupt
//Contains state machine to go through the process of sending or receiving data
void __attribute__((interrupt, no_auto_psv)) _MI2C1Interrupt (void)
{
	_MI2C1IF = 0;
	if(stateI2C == 0)
	{
		stateI2C = 1;
	//	I2C1TRN = DAC_W_ADDRESS;
	}
	else if(stateI2C == 1)
	{
		stateI2C = 2;
//		I2C1TRN = 0b00001111&(DACvalue>>6);
	}
	else if(stateI2C == 2)
	{
		stateI2C = 3;
//		I2C1TRN = (DACvalue << 2);
	}
	else if (stateI2C == 3)
	{
		stateI2C = 4;
		I2C1CONbits.PEN = 1;
	}
	else if (stateI2C == 4)
	{
		stateI2C = 0;
	}		
}

void i2cInit()
{
	I2C1BRG=37;
	I2C1CONbits.I2CEN = 1;	//enables I2C
	I2C1CONbits.A10M = 0;	//7-bit address
	_MI2C1IE = 1;			//I2C interrupt enable
	_MI2C1IP = 0b100;		//priority 4
}

void i2cSend()
{
	
}
