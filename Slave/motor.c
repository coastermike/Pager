#include <p24FJ16GA002.h>

#define motorEnable PORTBbits.RB7

unsigned char motorMS = 0;

void motorInit()
{
	TRISBbits.TRISB7 = 0;
	motorEnable = 0;
}

void setMotorOn(unsigned int duration) //in ms
{
	motorEnable = 1;
	motorMS = duration;
}

void setMotorOff()
{
	motorEnable = 0;
}	
