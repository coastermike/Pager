#ifndef POWER_H
#define POWER_H

void powerInit();
void enable20V();
void disable20V();

#define V20_EN PORTBbits.RB14
#define LIPO_STAT1 PORTBbits.RB12
#define LIPO_STAT2 PORTBbits.RB13

#endif
