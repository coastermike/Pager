#include <p24FJ16GA002.h>
#include "motor.h"
#include "piezo.h"
#include "msTimer.h"

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

void __attribute__((__interrupt__, no_auto_psv)) _T1Interrupt(void)
{
	_T1IF = 0;
	LEDStatus = ~LEDStatus;
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
	_T4IE = 1;
	
	TRISAbits.TRISA4 = 0;	//Sets LEDStatus as output
	
	T1CONbits.TON = 1;
	T1CONbits.TCKPS = 0b11;
	T1CONbits.TCS = 0;
	T1CONbits.TGATE = 0;
	PR1 = 10000;//31250;
	_T1IE = 1;
	_T1IP = 2;
}
