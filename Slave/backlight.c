#include <p24FJ16GA002.h>

void backlightInit()
{
	RPOR7bits.RP15R = 18;			//OC1 on RP15
	TRISAbits.TRISA0 = 1;
	AD1PCFG = 0b1001111111111110;	//Sets band gap voltage reference off and AN0 as analog input
	AD1CON2bits.VCFG = 0;			//voltage reference as VDD and VSS
	AD1CON3bits.ADCS = 0b00000001;	//A/D Conversion Clock select = 
	AD1CON1bits.SSRC = 0b111;		//Conversion on internal counter
	AD1CON3bits.SAMC = 0b1111;		//Auto Sample Time = 
	AD1CON1bits.FORM = 0;			//Output form as 10bit Integer
	AD1CON2bits.SMPI3 = 0b0000;		//Interrupts at completion of each sequence
	
	//timer setup
	T2CONbits.T32 = 0; //16bit mode	
	T2CONbits.TCKPS = 0b00;	//1:1 prescalar
	T2CONbits.TCS = 0;
	T2CONbits.TGATE = 0;
	PR2 = 0xFFFF;			//for 244Hz PWM freq
	//PWM setup
	OC1RS = 0x7FFF;			//duty cycle of 50%
	OC1R = 0x7FFF;			//duty cycle of 50%
	OC1CONbits.OCTSEL = 0;	//timer2
	OC1CONbits.OCM = 0b110;	//PWM, no fault
	T2CONbits.TON = 1;
	
	AD1CON1bits.ADON = 1;
}
