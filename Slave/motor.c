#include <p24FJ16GA002.h>
#include "piezo.h"
#include "motor.h"

unsigned int motorMS = 0;
extern unsigned int piezoMS;

void motorInit()
{
	TRISBbits.TRISB7 = 0;
	motorEnable = 0;
}

void setMotorOn(unsigned int duration) //in ms
{
	motorEnable = 1;
	motorMS = duration;
	if(!_T4IE)
	{
		_T4IE = 1;
	}	
}

void setMotorOff()
{
	if((motorMS == 0) && (piezoMS == 0))
	{
		_T4IE = 0;
	}
	motorEnable = 0;
	motorMS = 0;
}	
