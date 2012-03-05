#include <p24FJ16GA002.h>
#include "motor.h"
#include "piezo.h"
#include "msTimer.h"

extern unsigned int piezoMS;
extern unsigned int motorMS;

/*void __attribute__((interrupt, no_auto_psv)) _T2Interrupt (void)
{
	_T2IF = 0;
	if(piezoMS>0)
	{
		piezoMS--;
	}
	else
	{
		_T2IE = 0;
		T3CONbits.TON = 0;
		piezoMS = 0;
	}	
}
*/	
void __attribute__((interrupt, no_auto_psv)) _T4Interrupt (void)
{
	_T4IF = 0;
	if(piezoMS>0)
	{
		piezoMS--;
	}
	else
	{
		if(motorMS == 0)
		{
			_T4IE = 0;
		}
		_T3IE = 0;
		T3CONbits.TON = 0;
		piezoMS = 0;
	}	
	if(motorMS>0)
	{
		motorMS--;
	}
	else
	{
		if(piezoMS == 0)
		{
			_T4IE = 0;
		}
		motorEnable = 0;
		motorMS = 0;
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
	_T4IE = 0;
	
	//timer2 config
/*	T2CONbits.T32 = 0;
	T2CONbits.TCKPS = 0b10;	//1:64 prescalar
	T2CONbits.TCS = 0;
	T2CONbits.TGATE = 0;
	PR2 = 250;				//1ms timing
	T2CONbits.TON = 1;
	_T2IE = 0;*/
	
	TRISAbits.TRISA4 = 0;	//Sets LEDStatus as output
	
	T1CONbits.TON = 1;
	T1CONbits.TCKPS = 0b11;
	T1CONbits.TCS = 0;
	T1CONbits.TGATE = 0;
	PR1 = 10000;//31250;
	_T1IE = 1;
	_T1IP = 2;
}
