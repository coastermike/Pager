#include <p24FJ64GA002.h>
#include "accel.h"
#include "motor.h"
#include "power.h"
#include "backlight.h"
#include "piezo.h"

_CONFIG1(FWDTEN_OFF & ICS_PGx3 & BKBUG_OFF & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2(POSCMOD_NONE & I2C1SEL_PRI & OSCIOFNC_ON & FNOSC_FRCPLL)

int main (void)
{
	accelInit();
	motorInit();
	powerInit();
	backlightInit();
	piezoInit();
	
	while(1)
	{
		
	}	
}	
