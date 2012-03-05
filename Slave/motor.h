#ifndef MOTOR_H
#define MOTOR_H

#define motorEnable PORTBbits.RB7

void motorInit();
void setMotorOn(unsigned int duration);
void setMotorOff();

#endif
