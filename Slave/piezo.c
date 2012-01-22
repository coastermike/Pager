#include <p24FJ64GA002.h>

void piezoInit()
{
	RPOR5bits.RP10R = 19;	//OC2 on RB10
	//timer setup
	T3CONbits.TCKPS = 0b00;	//1:1 prescalar
	T3CONbits.TCS = 0;
	T3CONbits.TGATE = 0;
	PR3 = 0x0FFF;			//for 3.9kHz PWM freq
	//PWM setup
	OC2RS = 0x800;			//duty cycle of 50%
	OC2R = 0x800;			//duty cycle of 50%
	OC2CONbits.OCTSEL = 1;	//timer3
	OC2CONbits.OCM = 0b110;	//PWM, no fault
	T3CONbits.TON = 1;
}

void actuatePiezo(unsigned int duration) //in ms
{
	
}
