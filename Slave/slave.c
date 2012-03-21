#include <p24FJ16GA002.h>
#include "accel.h"
#include "motor.h"
#include "power.h"
#include "backlight.h"
#include "piezo.h"
#include "comm.h"
#include "i2c.h"
#include "msTimer.h"

_CONFIG1(FWDTEN_OFF & ICS_PGx3 & BKBUG_OFF & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2(POSCMOD_NONE & I2C1SEL_PRI & OSCIOFNC_ON & FNOSC_FRCPLL)

int main (void)
{
	CLKDIVbits.RCDIV = 0;
    CLKDIVbits.DOZE = 0;
    OSCCONbits.COSC = 0b001;
	INTCON1bits.NSTDIS = 1;
	backlightInit();
	i2cInit();
	accelInit();
	motorInit();
	powerInit();
	piezoInit();
	commInit();
	initMSTimer();
	
	setMotorOn(1000);
	actuatePiezo(101);
	
	enable20V();
	
	while(1)
	{
		
	}	
}	
