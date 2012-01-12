#include <p24FJ64GA002.h>

void i2cInit()
{
	
}
	
void accelInit()
{
	RPINR0bits.INT1R = 0;
	RPINR1bits.INT2R = 1;
}
