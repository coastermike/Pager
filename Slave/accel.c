#include <p24FJ64GA002.h>

#define ACCEL_W_ADDRESS 0b00111000
#define ACCEL_R_ADDRESS 0b00111001

void __attribute__((interrupt, no_auto_psv)) _INT1Interrupt (void)
{
	_INT1IF = 0;
}

void __attribute__((interrupt, no_auto_psv)) _INT2Interrupt (void)
{
	_INT2IF = 0;
}
	
void accelInit()
{
	RPINR0bits.INT1R = 0;	//Accel INT1 on RP0
	RPINR1bits.INT2R = 1;	//Accel INT2 on RP1
	INTCON2bits.INT1EP = 0;	//INT on positive edge
	INTCON2bits.INT2EP = 0;
	_INT1IE = 1;
	_INT2IE = 1;
	_INT1IP = 0b011;		//interrupt priority at 3
	_INT2IP = 0b011;
}
