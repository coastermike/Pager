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
#include "GDD_Screens.h"

// Configuration bits
_CONFIG1( WDTPS_PS32768 & FWPSA_PR128 & ALTVREF_ALTVREDIS & WINDIS_OFF & FWDTEN_OFF & ICS_PGx1 & GWRP_OFF & GCP_OFF & JTAGEN_OFF) 
_CONFIG2( POSCMOD_NONE & IOL1WAY_OFF & OSCIOFNC_ON & FCKSM_CSDCMD & FNOSC_FRCPLL & PLL96MHZ_ON & PLLDIV_DIV2 & IESO_OFF)
_CONFIG3( WPFP_WPFP255 & SOSCSEL_EC & WUTSEL_LEG & ALTPMP_ALTPMPEN & WPDIS_WPDIS & WPCFG_WPCFGDIS & WPEND_WPENDMEM)  

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

void CreateEditBox(void);                                        // creates edit box demo screen
WORD MsgEditBox(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg);   // processes messages for edit box demo screen
//void CreatePage(XCHAR *pText);

#define ID_WINDOW1          10
#define ID_BUTTON_BACK      18
#define ID_BUTTON_NEXT      19
#define NAV_BTN_WIDTH		25

#define ID_EDITBOX1         83

#define ID_CALL             91
#define ID_STOPCALL         92
#define ID_HOLD             93
#define ID_BACKSPACE        94
#define ID_POUND            95
#define ID_ASTERISK         96
#define ID_KEYPAD           100                         /* uses 100 to 110 for phone key pad demo */

GOL_SCHEME      *altScheme;                                 // alternative style scheme
GOL_SCHEME      *navScheme;                                 // style scheme for the navigation

extern const FONT_FLASH     GOLSmallFont;                   // small font
extern const IMAGE_FLASH   redphone;
extern const IMAGE_FLASH   greenphone;

BYTE _language = 0;

/*enum
{
	_CallingStr,
    _HoldingStr,
    _HoldStr,
    _LeftArrowStr
};

#define CallingStr          Strings[_language][_CallingStr          ]
#define HoldingStr          Strings[_language][_HoldingStr          ]
#define HoldStr             Strings[_language][_HoldStr             ]
#define LeftArrowStr        Strings[_language][_LeftArrowStr        ]
*/
const XCHAR CallingStr[] = {   0x0083, 0x0061, 0x006C, 0x006C, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E, 0x002E, 0x0000    };    //
const XCHAR HoldingStr[] = {   0x0048, 0x006F, 0x006C, 0x0064, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E, 0x002E, 0x0000    };    //
const XCHAR HoldStr[] = {   0x0048, 0x006F, 0x006C, 0x0064, 0x0000    };    //
const XCHAR LeftArrowStr[] = {   0x007E, 0x0020, 0x0000    };    // navigate left

const XCHAR* eStrings[] = 
{
	CallingStr,
    HoldingStr,
    HoldStr,
    LeftArrowStr
};

//const XCHAR** Strings[] = {eStrings};



/* */
int main(void)
{
    GOL_MSG msg;                    // GOL message structure to interact with GOL
    
    InitializeBoard();

    GDDDemoCreateFirstScreen();

    while(1)
    {
        if(GOLDraw())               // Draw GOL object
        {
            TouchGetMsg(&msg);      // Get message from touch screen
			
            #if (NUM_GDD_SCREENS > 1)
			// GDD Readme:
			// The following line of code allows a GDD user to touch the touchscreen
			// to cycle through different static screens for viewing. This is useful as a
			// quick way to view how each screen looks on the physical target hardware.
			// This line of code should eventually be commented out for actual development.
			// Also note that widget/object names can be found in GDD_Screens.h
			if(msg.uiEvent == EVENT_RELEASE) GDDDemoNextScreen();
			#endif
			
            GOLMsg(&msg);           // Process message
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
    WORD    objectID;

    objectID = GetObjID(pObj);

    GDDDemoGOLMsgCallback(objMsg, pObj, pMsg);
    
    // Add additional code here...

    return (1);
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
    GDDDemoGOLDrawCallback();

    // Add additional code here...

    return (1);
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
     ANSA = 0x0000;
     ANSB = 0x0020;		// RB5 as potentiometer input
     ANSC = 0x0010;		// RC4 as touch screen X+, RC14 as external source of secondary oscillator
     ANSD = 0x0000;
     ANSE = 0x0000;		// RE9 used as S2
     ANSF = 0x0000;
     ANSG = 0x0080;		// RG8 used as S1, RG7 as touch screen Y

    // Initialize graphics library and create default style scheme for GOL
    GOLInit();

    //The following are PIC device specific settings for the SPI channel
    //used. 
    
    //Set IOs directions for SST25 SPI
        SST25_CS_LAT = 1;
        SST25_CS_TRIS = 0;
    
        // Set the pins to be digital 
    	SST25_SDI_ANS = 0;
        SST25_SDO_ANS = 0;

        SST25_SCK_TRIS = 0;
        SST25_SDO_TRIS = 0;
        SST25_SDI_TRIS = 1;

    // set the peripheral pin select for the PSI channel used
        __builtin_write_OSCCONL(OSCCON & 0xbf); // unlock PPS
    	#if (SST25_SPI_CHANNEL == 1)
    	    RPOR1bits.RP2R = 8;                 // assign RP2 for SCK1
    	    RPOR0bits.RP1R = 7;                 // assign RP1 for SDO1
    	    RPINR20bits.SDI1R = 0;              // assign RP0 for SDI1
        #elif (SST25_SPI_CHANNEL == 2)
            RPOR1bits.RP2R = 11;                // assign RP2 for SCK2
    	    RPOR0bits.RP1R = 10;                // assign RP1 for SDO2
    	    RPINR22bits.SDI2R = 0;              // assign RP0 for SDI2
    	#endif

        __builtin_write_OSCCONL(OSCCON | 0x40); // lock   PPS

	// initialize the Flash Memory driver
    FlashInit(&SPI_Init_Data);
   
    // initialize the timer that manages the tick counter
    TickInit(); 
                      
    // initialize the components for Resistive Touch Screen
    TouchInit(NVMWrite, NVMRead, NVMSectorErase, TOUCH_INIT_VALUES);   
                
    HardwareButtonInit();           	// Initialize the hardware buttons
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

// Creates the edit box demo screen
void CreateEditBox(void)
{
    static XCHAR    pTempXchar[][2] =  {   
    	{'0',0},
        {'1',0},
        {'2',0},
        {'3',0},
        {'4',0},
        {'5',0},
        {'6',0},
        {'7',0},
        {'8',0},
        {'9',0},
        {'*',0},
        {'#',0}
    };

    GOLFree();          // free memory for the objects in the previous linked list and start new list
//    CreatePage((XCHAR *)EditBoxStr);

    #define EB_ORIGIN_X ((GetMaxX() - 212 + 1) / 2)
    #define EB_ORIGIN_Y ((40 + GetMaxY() - 195 + 1) / 2)
    #define KEYSTARTX   EB_ORIGIN_X
    #define KEYSTARTY   EB_ORIGIN_Y
    #define KEYSIZEX    53
    #define KEYSIZEY    39
    #define MAXCHARSIZE 17

    EbCreate
    (
        ID_EDITBOX1,    			// ID
        KEYSTARTX,
        KEYSTARTY + 1,
        KEYSTARTX + 4 * KEYSIZEX,
        KEYSTARTY + 1 * KEYSIZEY - GOL_EMBOSS_SIZE, // dimension
        EB_DRAW,         // will be dislayed after creation
        NULL,
        MAXCHARSIZE,
        altScheme
    );                              // default GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 0,              // ID
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 5 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[0],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 1,              // ID
        KEYSTARTX + 0 * KEYSIZEX,
        KEYSTARTY + 1 * KEYSIZEY,
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[1],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 2,              // ID
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 1 * KEYSIZEY,
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[2],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 3,              // ID
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 1 * KEYSIZEY,
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[3],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 4,              // ID
        KEYSTARTX + 0 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[4],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 5,              // ID
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[5],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 6,              // ID
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[6],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 7,              // ID
        KEYSTARTX + 0 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[7],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 8,              // ID
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[8],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_KEYPAD + 9,              // ID
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[9],              // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_ASTERISK,                // ID
        KEYSTARTX + 0 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,
        KEYSTARTX + 1 * KEYSIZEX,
        KEYSTARTY + 5 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[10],             // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_POUND,                   // ID
        KEYSTARTX + 2 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 5 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        pTempXchar[11],             // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_BACKSPACE,               // ID
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 1 * KEYSIZEY,
        KEYSTARTX + 4 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        (XCHAR *)LeftArrowStr,      // Left Arrow
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_CALL,                    // ID
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 2 * KEYSIZEY,
        KEYSTARTX + 4 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,//(void *) &greenphone,       // use green phone bitmap
        NULL,                       // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_STOPCALL,                // ID
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 3 * KEYSIZEY,
        KEYSTARTX + 4 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,//(void *) &redphone,         // use redphone bitmap
        NULL,                       // text
        altScheme
    );                              // alternative GOL scheme
    BtnCreate
    (
        ID_HOLD,                    // ID
        KEYSTARTX + 3 * KEYSIZEX,
        KEYSTARTY + 4 * KEYSIZEY,
        KEYSTARTX + 4 * KEYSIZEX,
        KEYSTARTY + 5 * KEYSIZEY,   // dimension
        0,
        BTN_DRAW,                   // will be dislayed after creation
        NULL,                       // no bitmap
        (XCHAR *)HoldStr,           // "Hld"
        altScheme
    );                              // alternative GOL scheme
}

// Processes messages for the edit box demo screen
WORD MsgEditBox(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg)
{
    EDITBOX     *pEb;
    SHORT       id;
    XCHAR       temp;
    static char status = 0; // status to check if calling, holding or not
    id = GetObjID(pObj);

    // ignore all touch screen messages to the edit box
    // since we do not want the caret to show up
    if ((id == ID_EDITBOX1) && (pMsg->type == TYPE_TOUCHSCREEN))
    {
        return 0;
    }

    // If number key is pressed
    if(objMsg == BTN_MSG_RELEASED)
    {
        if(id >= ID_KEYPAD)
            if(id < ID_KEYPAD + 10)
            {
                if(!status)
                {
                    pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                    EbAddChar(pEb, '0' + id - ID_KEYPAD);
                    SetState(pEb, EB_DRAW);
                }

                return (1);
            }

	    switch(id)
	    {
	        case ID_CALL:
                pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                EbSetText(pEb, (XCHAR *)CallingStr);
                SetState(pEb, EB_DRAW);
                status = 1;
                break;
	
	        case ID_STOPCALL:
                pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                temp = 0x0000;
                EbSetText(pEb, &temp);
                SetState(pEb, EB_DRAW);
                status = 0;
                break;
	
	        case ID_BACKSPACE:
                if(!status)
                {
                    pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                    EbDeleteChar(pEb);
                    SetState(pEb, EB_DRAW);
                }
                break;
	
	        case ID_HOLD:
                pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                if(status == 1)
                {
                    EbSetText(pEb, (XCHAR *)HoldingStr);
                    status = 2;
                }
                else if(status == 2)
                {
                    EbSetText(pEb, (XCHAR *)CallingStr);
                    status = 1;
                }
	
                SetState(pEb, EB_DRAW);
                break;
	
	        case ID_ASTERISK:
	            if(!status)
	            {
                    pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                    EbAddChar(pEb, (XCHAR) '*');
                    SetState(pEb, EB_DRAW);
	            }
                break;
	
	        case ID_POUND:
	            if(!status)
	            {
                    pEb = (EDITBOX *)GOLFindObject(ID_EDITBOX1);
                    EbAddChar(pEb, (XCHAR) '#');
                    SetState(pEb, EB_DRAW);
	            }
                break;
	
	        case ID_BUTTON_NEXT:
 //               screenState = CREATE_METER;     // goto meter screen
	            status = 0;
                break;
	
	        case ID_BUTTON_BACK:
 //               screenState = CREATE_LISTBOX;   // goto list box screen
	            status = 0;
                break;
	
	        default:
                break;
	    }
	} 
	return (1);                         		// process by default
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
