#include <p24FJ256DA210.h>

// Configuration bits
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx1 & GWRP_OFF & GCP_OFF & JTAGEN_OFF) 
_CONFIG2( POSCMOD_NONE & IOL1WAY_OFF & OSCIOFNC_ON & FCKSM_CSDCMD & FNOSC_FRCPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_EC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)  

int main()
{
	TRISGbits.TRISG3 = 1; //PG
	Nop();
	TRISGbits.TRISG2 = 0; //CE
	TRISAbits.TRISA0 = 0; //LED

	PORTGbits.RG2 = 1;
	
	
	while(1)
	{
		if(PORTGbits.RG3 == 0)
		{
			PORTAbits.RA0 = 1;
		}
		else if(PORTGbits.RG3 == 1)
		{
			PORTAbits.RA0 = 0;
		}		
	}	
}
