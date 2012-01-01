#include <p24FJ64GA002.h>

void backlightInit()
{
	TRISAbits.TRISA0 = 1;
	AD1PCFG = 0b1001111111111110;	//Sets band gap voltage reference off and AN0 as analog input
	AD1CON2bits.VCFG = 0;			//voltage reference as VDD and VSS
	AD1CON3bits.ADCS = 0b00000001;	//A/D Conversion Clock select = 
	AD1CON1bits.SSRC = 0b111;		//Conversion on internal counter
	AD1CON3bits.SAMC = 0b1111;		//Auto Sample Time = 
	AD1CON1bits.FORM = 0;			//Output form as 10bit Integer
	AD1CON2bits.SMPI3 = 0b0000;		//Interrupts at completion of each sequence
	AD1CON1bits.ADON = 1;
}
