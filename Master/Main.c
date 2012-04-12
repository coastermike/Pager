/*****************************************************************************
 * Microchip Graphics Library
 * Graphics Display Designer (GDD) Template
 *****************************************************************************
 * FileName:        Main.c
 * Processor:       PIC24F
 * Compiler:       	MPLAB C30
 * Company:         Microchip Technology Incorporated
 *
 * Software License Agreement
 *
 * Copyright © 2010 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 * Date         Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *
 *****************************************************************************/
#include "Main.h"

// Configuration bits
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx1 & GWRP_OFF & GCP_OFF & JTAGEN_OFF) 
_CONFIG2( POSCMOD_NONE & IOL1WAY_OFF & OSCIOFNC_ON & FCKSM_CSDCMD & FNOSC_FRCPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_EC & WUTSEL_LEG & ALTPMP_ALPMPDIS & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)  

//_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx2 & GWRP_OFF & GCP_OFF & JTAGEN_OFF) 
//_CONFIG2( POSCMOD_HS & IOL1WAY_OFF & OSCIOFNC_ON & FCKSM_CSDCMD & FNOSC_PRIPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
//_CONFIG3( WPFP_WPFP255 & SOSCSEL_EC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)

/////////////////////////////////////////////////////////////////////////////
// SPI Device Initialization Function 
/////////////////////////////////////////////////////////////////////////////
// initialize GFX3 SST25 flash SPI
#define FlashInit(pInitData) SST25Init((DRV_SPI_INIT_DATA*)pInitData)

/////////////////////////////////////////////////////////////////////////////
// SPI Channel settings
/////////////////////////////////////////////////////////////////////////////
#if defined (SPI_CHANNEL_1_ENABLE) || defined (SPI_CHANNEL_2_ENABLE) || defined (SPI_CHANNEL_3_ENABLE) || defined (SPI_CHANNEL_4_ENABLE)  
        const DRV_SPI_INIT_DATA SPI_Init_Data = {SST25_SPI_CHANNEL, 3, 6, 0, 1, 1, 0};   
#endif

/////////////////////////////////////////////////////////////////////////////
// TouchScreen Init Values
/////////////////////////////////////////////////////////////////////////////
#define TOUCH_INIT_VALUES   (NULL)

/////////////////////////////////////////////////////////////////////////////
//                            LOCAL PROTOTYPES
/////////////////////////////////////////////////////////////////////////////
void TickInit(void);                 // starts tick counter
void InitializeBoard(void);

BYTE _language = 0;

SCREEN_STATES   screenState = CREATE_NUMGUESTS; 

//RADIO VARIABLES
BYTE myChannel = 24;
BYTE BASE[8] = {EUI_0,EUI_1,EUI_2,EUI_3, EUI_4, EUI_5,EUI_6,0x11};

unsigned char Incoming=0;

int main(void)
{
	BYTE i; 
    GOL_MSG msg;                    // GOL message structure to interact with GOL
    
    InitializeBoard();
    
	TRISGbits.TRISG3 = 1;
	TRISGbits.TRISG2 = 0;
	Nop();
	PORTGbits.RG2 = 1;
	Nop();
	
	//RADIO SETUP
	// Function MiApp_ProtocolInit initialize the protocol stack.//
 	MiApp_ProtocolInit(FALSE);
	
	//setting the frequency at whick this wx will transmit over comes back as false if the set channel fails 
	if( MiApp_SetChannel(myChannel) == FALSE )
	{
            return 0;
    }

	//Enables all connection types
 	MiApp_ConnectionMode(ENABLE_ALL_CONN);

	//try to establish connection with peer device: p1=0xff=establish connection with any device, p2=direct connection
	//returns 0xFF if it false 
	i = MiApp_EstablishConnection(0xFF, CONN_MODE_DIRECT);

	if( i == 0xFF )
   	{
		//starting a connecton: direct connect, duration of scan, channel to start connection on	
		MiApp_StartConnection(START_CONN_DIRECT, 10, 24);
	}
	//END RADIO SETUP
	
    LED = 1;
//	i2cRec(2);
	
    while(1)
    {	//i2cSend(3,2);
        if(GOLDraw())               // Draw GOL object
        {
            TouchGetMsg(&msg);      // Get message from touch screen
            GOLMsg(&msg);           // Process message
        }
        
        /* MiApp_MessageAvailable returns a bool*/
		if( MiApp_MessageAvailable() )
        {
			Incoming=*rxMessage.Payload;
			/* Function MiApp_DiscardMessage is used to release the current received packet.*/
           	MiApp_DiscardMessage();
		}
	}//end while
}

/////////////////////////////////////////////////////////////////////////////
// Function: WORD GOLMsgCallback(WORD objMsg, OBJ_HEADER* pObj, GOL_MSG* pMsg)
// Input: objMsg - translated message for the object,
//        pObj - pointer to the object,
//        pMsg - pointer to the non-translated, raw GOL message
// Output: if the function returns non-zero the message will be processed by default
// Overview: it's a user defined function. GOLMsg() function calls it each

//           time the valid message for the object received
/////////////////////////////////////////////////////////////////////////////
WORD GOLMsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg)
{
 /*   WORD    objectID;

    objectID = GetObjID(pObj);

    GDDDemoGOLMsgCallback(objMsg, pObj, pMsg);
    
    // Add additional code here...
 */
 
  //  return (1);
   
    return(VGDD_MenuScreens_MsgCallback(objMsg, pObj, pMsg));
}

/////////////////////////////////////////////////////////////////////////////
// Function: WORD GOLDrawCallback()
// Output: if the function returns non-zero the draw control will be passed to GOL
// Overview: it's a user defined function. GOLDraw() function calls it each
//           time when GOL objects drawing is completed. User drawing should be done here.
//           GOL will not change color, line type and clipping region settings while

//           this function returns zero.
/////////////////////////////////////////////////////////////////////////////
WORD GOLDrawCallback(void)
{
//    GDDDemoGOLDrawCallback();

    // Add additional code here...
//Createhelloscreen();
  //  return (1);
 	return(VGDD_MenuScreens_DrawCallback());
}


/////////////////////////////////////////////////////////////////////////////
// Function: Timer3 ISR
// Input: none
// Output: none
// Overview: increments tick counter. Tick is approx. 1 ms.
/////////////////////////////////////////////////////////////////////////////
#define __T3_ISR    __attribute__((interrupt, shadow, auto_psv))

/* */
void __T3_ISR _T3Interrupt(void)
{
    TMR3 = 0;
    // Clear flag
    #ifdef __PIC32MX__
    mT3ClearIntFlag();
    #else
    IFS0bits.T3IF = 0;
    #endif

    TouchDetectPosition();
}

/////////////////////////////////////////////////////////////////////////////
// Function: void TickInit(void)
// Input: none
// Output: none
// Overview: Initilizes the tick timer.
/////////////////////////////////////////////////////////////////////////////

/*********************************************************************
 * Section: Tick Delay
 *********************************************************************/
#define SAMPLE_PERIOD       500 // us
#define TICK_PERIOD			(GetPeripheralClock() * SAMPLE_PERIOD) / 4000000

/* */
void TickInit(void)
{

    // Initialize Timer3
    TMR3 = 0;
    PR3 = TICK_PERIOD;
    IFS0bits.T3IF = 0;  //Clear flag
    IEC0bits.T3IE = 1;  //Enable interrupt
    T3CONbits.TON = 1;  //Run timer
    
}

/////////////////////////////////////////////////////////////////////////////
// Function: InitializeBoard()
// Input: none
// Output: none
// Overview: Initializes the hardware components including the PIC device
//           used.
/////////////////////////////////////////////////////////////////////////////
void InitializeBoard(void)
{    
     CLKDIVbits.RCDIV = 0;
     CLKDIVbits.DOZE = 0;
     CLKDIVbits.PLLEN = 1;
     CLKDIVbits.CPDIV = 0;
     OSCCONbits.COSC = 0b001;
     
     ANSA = 0x0000;
     ANSB = 0x0000;
     ANSC = 0x0010;		// RC4 as touch screen X+
     ANSD = 0x0000;
     ANSE = 0x0200;		// RE9 used as Y+
     ANSF = 0x0000;
     ANSG = 0x0000;
	
	LED_TRIS = 0;
	
    // Initialize graphics library and create default style scheme for GOL
    GOLInit();
	_DPTEST = 0b00;
	
	i2cInit();
	SPI1CON1 = 0b0000000100111110;
    SPI1STAT = 0x8000;
    
    RFIF = 0;
    if( RF_INT_PIN == 0 )
    {
        RFIF = 1;
    }

    //The following are PIC device specific settings for the SPI channel
    //used. 
    //Set IOs directions for SST25 SPI
        SST25_CS_LAT = 1;
        Nop();
        SST25_CS_TRIS = 0;

        SST25_SCK_TRIS = 0;
        Nop();
        SST25_SDO_TRIS = 0;
        Nop();
        SST25_SDI_TRIS = 1;

		//radio pins
		_RP11R = 8; // assign RP11 for SCK1
     	_RP2R = 7; // assign RP2 for SDO1
     	_SDI1R = 36; // assign RP36 for SDI1
     	_INT1R = 37;
    // set the peripheral pin select for the PSI channel used
        __builtin_write_OSCCONL(OSCCON & 0xbf); // unlock PPS
    	#if (SST25_SPI_CHANNEL == 1)
    	    RPOR3bits.RP6R = 8;                 // assign RP6 for SCK1
    	    RPOR9bits.RP18R = 7;                 // assign RP18 for SDO1
    	    RPINR20bits.SDI1R = 32;              // assign RP18 for SDI1
        #elif (SST25_SPI_CHANNEL == 2)
            _RP6R = 11;                // assign RP11 for SCK2
    	    _RP18R = 10;                // assign RP2 for SDO2
    	    _SDI2R = 32;              // assign RP36 for SDI2
    	#endif
		

     	
        __builtin_write_OSCCONL(OSCCON | 0x40); // lock   PPS
	
	//radio
	PHY_CS_TRIS = 0;
    Nop();
    PHY_CS = 1;
    Nop();
    PHY_RESETn_TRIS = 0;
    PHY_RESETn = 1;
    RF_INT_TRIS = 1;
    SDI_TRIS = 1;
    SDO_TRIS = 0;
    SCK_TRIS = 0;
    SPI_SDO = 0;        
    SPI_SCK = 0; 
    PHY_WAKE_TRIS = 0;
    PHY_WAKE = 1;
    
	LED = 1;
	TRISAbits.TRISA1 = 0;
	Nop();
	PORTAbits.RA1 = 1;
	
	// initialize the Flash Memory driver
    FlashInit(&SPI_Init_Data);
    LED = 0;
    // initialize the timer that manages the tick counter
    TickInit(); 
                     
    // initialize the components for Resistive Touch Screen
    TouchInit(NVMWrite, NVMRead, NVMSectorErase, TOUCH_INIT_VALUES);
    LED = 0;
}    
		
/*********************************************************************
* Function: WORD ExternalMemoryCallback(EXTDATA* memory, LONG offset, WORD nCount, void* buffer)
*
* PreCondition: none
*
* Input:  memory - pointer to the bitmap or font external memory structures
*                  (FONT_EXTERNAL or BITMAP_EXTERNAL)
*         offset - data offset
*         nCount - number of bytes to be transferred to the buffer
*         buffer - pointer to the buffer
*
* Output: number of bytes were transferred.
*
* Side Effects: none
*
* Overview: this function must be implemented in application. Graphics Library calls it
*           each time the data from external memory is required. The application must copy 
*           required data to the buffer provided.
*
* Note: none
*
********************************************************************/

// If there are several memories in the system they can be selected by IDs.
// In this demo ID for memory chip installed on Graphics PICTail board is assumed to be 0.
#define SST39_MEMORY    0

/* */

WORD ExternalMemoryCallback(IMAGE_EXTERNAL *memory, LONG offset, WORD nCount, void *buffer)
{
    if(memory->ID == SST39_MEMORY)
    {

        // Read data requested into buffer provided
        #ifdef GFX_PICTAIL_V2
        SST39PMPInit();
        SST39ReadArray(memory->address + offset, // address to read from
        (BYTE *)buffer, nCount);
        LCDPMPInit();
        #else
        SST25ReadArray(memory->address + offset, // address to read from
        (BYTE *)buffer, nCount);
        #endif
    }

    return (nCount);
}

void Transmit(INPUT BYTE Transmited_Data)
{
	// First call MiApp_FlushTx to reset the Transmit buffer.
	MiApp_FlushTx();
           
    MiApp_WriteData(Transmited_Data);
    MiApp_UnicastAddress(BASE, TRUE, FALSE);
}

/*void CreatePage(XCHAR *pText)
{
    OBJ_HEADER  *obj;
    #if !(defined(__dsPIC33FJ128GP804__) || defined(__PIC24HJ128GP504__)||defined(GFX_PICTAIL_LCC))
    SHORT       i;
	#endif
	
    WndCreate
    (
        ID_WINDOW1,                 // ID
        0,
        0,
        GetMaxX(),
        GetMaxY(),                  // dimension
        WND_DRAW,                   // will be dislayed after creation
        (void *) &greenphone,         // icon
        pText,                      // set text
        navScheme
    );                              // default GOL scheme
    BtnCreate
    (
        ID_BUTTON_BACK,             // button ID
        0,
        40,                         // left, top corner	
        NAV_BTN_WIDTH,
        GetMaxY(),
        0,                          // right, bottom corner (with radius = 0)
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap	
        (XCHAR *)LeftArrowStr,      // LEFT arrow as text
        navScheme
    );                              // use navigation scheme
    obj = (OBJ_HEADER *)BtnCreate
        (
            ID_BUTTON_NEXT,         // button ID
            GetMaxX() - NAV_BTN_WIDTH,
            40,
            GetMaxX(),
            GetMaxY(),
            0,                      // dimension (with radius = 0)
            BTN_DRAW,               // will be dislayed and disabled after creation
            NULL,                   // no bitmap
            (XCHAR *)RightArrowStr, // RIGHT arrow as text
            navScheme
        );                          // use navigation scheme

#if defined (USE_FOCUS)                    
    GOLSetFocus(obj);   // set focus for the button
#endif    
}*/
