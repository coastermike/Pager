#include <p24FJ64GA002.h>

#define motorEnable PORTBbits.RB7

void motorInit()
{
	TRISBbits.TRISB7 = 0;
	motorEnable = 0;
}

void setMotorOn(unsigned int duration) //in ms
{
	motorEnable = 1;
}

