#include <p24fj256da210.h>

_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx1 & GWRP_OFF & GCP_OFF & JTAGEN_OFF) 
_CONFIG2( POSCMOD_NONE & IOL1WAY_OFF & OSCIOFNC_ON & FCKSM_CSDCMD & FNOSC_FRCPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_EC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM) 

#define LEDStatus PORTAbits.RA0
#define V20_EN PORTEbits.RE9
#define backlight PORTBbits.RB5

void __attribute__((__interrupt__, no_auto_psv)) _T1Interrupt(void)
{
	_T1IF = 0;
	LEDStatus = ~LEDStatus;
}

int main()
{
	TRISAbits.TRISA0 = 0;
	TRISEbits.TRISE9 = 0;
	TRISBbits.TRISB5 = 0;
	
	T1CONbits.TON = 1;
	T1CONbits.TCKPS = 0b11;
	T1CONbits.TCS = 0;
	T1CONbits.TGATE = 0;
	PR1 = 31250;
	_T1IE = 1;
	_T1IP = 3;
	
	V20_EN = 0;
	backlight = 1;
	
	while(1)
	{
		
	}	
}
