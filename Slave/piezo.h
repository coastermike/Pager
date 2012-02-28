#ifndef PIEZO
#define PIEZO

void piezoInit();
void disablePiezo();
void actuatePiezo(unsigned int duration);
void disablePiezo();

#define PIEZO1 PORTBbits.RB10
#define PIEZO2 PORTBbits.RB11

#endif
