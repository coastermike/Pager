#include <p24FJ64GA002.h>
#include "motor.h"
#include "piezo.h"

extern unsigned char piezoMS;
extern unsigned char motorMS;

void __attribute__((interrupt, no_auto_psv)) _T4Interrupt (void)
{
	_T4IF = 0;
	if(piezoMS>0)
	{
		piezoMS--;
	}
	else
	{
		disablePiezo();
	}	
	if(motorMS>0)
	{
		motorMS--;
	}
	else
	{
		setMotorOff();
	}	
}

void initMSTimer()
{
	//timer4 config
	T4CONbits.T32 = 0;
	T4CONbits.TCKPS = 0b10;	//1:64 prescalar
	T4CONbits.TCS = 0;
	T4CONbits.TGATE = 0;
	PR4 = 250;				//1ms timing
	T4CONbits.TON = 1;
}
