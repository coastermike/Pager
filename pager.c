#include <p24FJ256DA210.h>

_CONFIG1(FWDTEN_OFF & GWRP_OFF & GCP_OFF & JTAGEN_OFF)
_CONFIG2(POSCMOD_NONE & OSCIOFNC_OFF & FNOSC_FRC & PLL96MHZ_ON & PLLDIV_DIV2)
_CONFIG3(ALTPMP_ALPMPDIS)

#define LED1 PORTAbits.RA0
#define LED2 PORTAbits.RA1
#define LED3 PORTAbits.RA5

int main(void)
{
	//CLKDIVbits.PLLEN = 1;
	CLKDIVbits.G1CLKSEL = 1;
	CLKDIV2bits.GCLKDIV = 0b0101001;//divide by 41 to get 9MHz
	ANSA = 0;
	ANSB = 0;
	ANSC = 0;
	ANSD = 0;
	ANSE = 0;
	ANSF = 0;
	ANSG = 0;
	G1CON2bits.DPMODE = 0b001;	//Sets as TFT type
	G1DBEN=0xFFFF;				//All 16 data lines are enabled
	G1CON1bits.PUBPP = 0b010;	//4 bits-per-pixel
	G1CON2bits.DPBPP = 0b010;	//4 bits-per-pixel
	G1DPW = 480;				//Active frame width
	G1DPH = 272;				//Active frame height
	G1DPWT = 525;
	G1DPHT = 286;
	G1CON3bits.DPCLKPOL = 0;	//Display samples data on falling edge
	G1CON3bits.DPENOE = 1;		//Enables GEN
	G1CON3bits.DPENPOL = 1;		//GEN is active high
	G1CON3bits.DPVSOE = 1;		//Enables VSYNC
	G1CON3bits.DPHSOE = 1;		//Enables HSYNC
	G1CON3bits.DPVSPOL = 0;		//VSYNC is active-low
	G1CON3bits.DPHSPOL = 0;		//HSYNC is active-low
	G1ACTDAbits.ACTLINE = 14;	//Vert front porch + Vert sync pulse + Vert back porch
	G1ACTDAbits.ACTPIX = 45;	//Hor front porch + Hor sync pulse + Hor back porch
	G1VSYNCbits.VSST = 2;		//Vert front porch
	G1HSYNCbits.HSST = 2;		//Hor front porch
	G1VSYNCbits.VSLEN = 10;		//Vert sync pulse
	G1HSYNCbits.HSLEN = 41;		//Hor sync pulse
	G1DBLCONbits.VENST = 14;
	G1DBLCONbits.HENST = 45;
	G1CON3bits.DPPINOE = 1;		//Enable pin output pads
	G1CON3bits.DPPOWER = 1;		//Sets display power signal to 1;
	G1CON3bits.DPPWROE = 1;		//Use GPWR as display power signal
	G1CON1bits.G1EN = 1;		//Turn on display module
	
	TRISAbits.TRISA0 = 0;
	TRISAbits.TRISA1 = 0;
	TRISAbits.TRISA5 = 0;
	LED1 = 0;
	LED2 = 0;
	LED3 = 0;
	
	T1CONbits.TON = 1;
	T1CONbits.TCKPS = 0b11;
	T1CONbits.TCS = 0;
	T1CONbits.TGATE = 0;
	PR1 = 3906;
	
	INTCON1bits.NSTDIS = 1;
	
	_T1IP = 4;
	_T1IF = 0;
	_T1IE = 1;	
	
	G1CON2bits.DPTEST=0b10;
	
	while(1)
	{
	}	
}

void __attribute__((__interrupt__, no_auto_psv)) _T1Interrupt(void)
{
	LED1=~LED1;
	_T1IF = 0;
}
