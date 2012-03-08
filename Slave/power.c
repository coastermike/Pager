#include <p24FJ16GA002.h>
#include "power.h"

#define LIPO_W_ADDRESS 0b11001000
#define LIPO_R_ADDRESS 0b11001001

void powerInit()
{
	TRISBbits.TRISB14 = 0;
	TRISBbits.TRISB13 = 1;
	TRISBbits.TRISB12 = 1;
	V20_EN = 1;
}

void enable20V()
{
	V20_EN = 0;
}

void disable20V()
{
	V20_EN = 1;
}
