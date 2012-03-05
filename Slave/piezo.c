#include <p24FJ16GA002.h>
#include "piezo.h"
#include "motor.h"

unsigned int piezoMS = 0;
extern unsigned int motorMS;

void __attribute__((interrupt, no_auto_psv)) _T3Interrupt (void)
{
	PIEZO1 = ~PIEZO1;
	_T3IF = 0;
}	

void piezoInit()
{
	TRISBbits.TRISB10 = 0;
	TRISBbits.TRISB11 = 0;
	//get rid of PWM and 50% duty cycle pulse
	PIEZO2 = 0;
	//timer setup
	T3CONbits.TCKPS = 0b00;	//1:1 prescalar
	T3CONbits.TCS = 0;
	T3CONbits.TGATE = 0;
	PR3 = 3000;			//for 3.9kHz PWM freq
	T3CONbits.TON = 0;
	_T3IE = 0;
	_T3IP = 3;
	
}

void actuatePiezo(unsigned int duration) //in ms
{
	_T3IE = 1;
	T3CONbits.TON = 1;
	piezoMS = duration;
	if(!_T4IE)
	{
		_T4IE = 1;
	}
}

void disablePiezo()
{
	if((motorMS == 0) && (piezoMS == 0))
	{
		_T4IE = 0;
	}
	T3CONbits.TON = 0;
	piezoMS = 0;
}	
