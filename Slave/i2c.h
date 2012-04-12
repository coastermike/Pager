#ifndef I2C_H
#define I2C_H

void i2cInit();
void i2cWrite(unsigned int value);
unsigned int i2cLIPO(unsigned int reading);

#endif
