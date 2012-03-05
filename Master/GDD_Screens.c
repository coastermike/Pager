/*****************************************************************************
* Microchip Graphics Library
* Graphics Display Designer (GDD) Template
*****************************************************************************
* Dependencies:    See INCLUDES section below
* Processor:       PIC24F, PIC24H, dsPIC, PIC32
* Compiler:       	MPLAB C30 V3.22, MPLAB C32 V1.05b
* Linker:          MPLAB LINK30, MPLAB LINK32
* Company:         Microchip Technology Incorporated
*
* Software License Agreement
*
* Copyright (c) 2010 Microchip Technology Inc.  All rights reserved.
* Microchip licenses to you the right to use, modify, copy and distribute
* Software only when embedded on a Microchip microcontroller or digital
* signal controller, which is integrated into your product or third party
* product (pursuant to the sublicense terms in the accompanying license
* agreement).  
*
* You should refer to the license agreement accompanying this Software
* for additional information regarding your rights and obligations.
*
* SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY
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
* Author               Date        Comment
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
*****************************************************************************/
#include "Graphics\Graphics.h"
#include "GDD_Screens.h"

// Strings
const XCHAR buttonscreen_OBJ_BUTTON_3_3text[] = "Button";
GOL_SCHEME* defscheme;
void (*CreateFunctionArray[NUM_GDD_SCREENS])();
void (*CreatePrimitivesFunctionArray[NUM_GDD_SCREENS])();
WORD currentGDDDemoScreenIndex;
static BYTE update = 0;
static BYTE updateGPL = 0;
//  Creates the First Screen
void GDDDemoCreateFirstScreen(void)
{
	currentGDDDemoScreenIndex = 0;
	update = 1;
	(*CreateFunctionArray[currentGDDDemoScreenIndex])();
}
//  Creates the Next Screen
void GDDDemoNextScreen(void)
{
	currentGDDDemoScreenIndex++;
	if(currentGDDDemoScreenIndex >= NUM_GDD_SCREENS)
	{
		currentGDDDemoScreenIndex = 0;
	}
	update = 1;
}
//  GOL Message Callback
void GDDDemoGOLMsgCallback(WORD objMsg, OBJ_HEADER* pObj, GOL_MSG* pMsg)
{
	//Future event handling support by GDD
}
//  GOL Draw Callback
void GDDDemoGOLDrawCallback(void)
{
	if(updateGPL)
	{
		(*CreatePrimitivesFunctionArray[currentGDDDemoScreenIndex])();
		updateGPL = 0;
	}
if(update)
	{
		(*CreateFunctionArray[currentGDDDemoScreenIndex])();
		if(CreatePrimitivesFunctionArray[currentGDDDemoScreenIndex] != NULL)
		{
			updateGPL = 1;
		}
		update = 0;
	}
}
//  Create Error Flash (Blue Screen)
void CreateError(char* string)
{
	// Blue Screen Error
	SetColor(119);
	ClearDevice();
	SetColor(-1);
// Flash Error Message
	if(string == NULL)
		{OutTextXY(0, 0, "Runtime Error.");}
	else{OutTextXY(0,0, string);}
}

void Createbuttonscreen(void)
{
	GOLFree();
	SetColor(2016);
	ClearDevice();
	if(defscheme != NULL) free(defscheme);
	defscheme = GOLCreateScheme();
	defscheme->Color0 = 19583;
	defscheme->Color1 = 64969;
	defscheme->ColorDisabled = 55070;
	defscheme->CommonBkColor = 55166;
	defscheme->EmbossDkColor = 6172;
	defscheme->EmbossLtColor = 44765;
	defscheme->TextColor0 = 64969;
	defscheme->TextColor1 = 31;
	defscheme->pFont = (void*)&gentium_16_200_0_0_0_0;
	BUTTON *pbuttonscreen_OBJ_BUTTON_3_3;
	pbuttonscreen_OBJ_BUTTON_3_3 = BtnCreate(buttonscreen_OBJ_BUTTON_3_3,192,10,264,61,0,16384,NULL,(XCHAR*)buttonscreen_OBJ_BUTTON_3_3text,defscheme);
	if(pbuttonscreen_OBJ_BUTTON_3_3==NULL){CreateError(0);while(1);} //Fatal Error, Check for memory leak or heap size
	PICTURE *pbuttonscreen_OBJ_PICTURE_2_3;
	pbuttonscreen_OBJ_PICTURE_2_3 = PictCreate(buttonscreen_OBJ_PICTURE_2_3,120,80,301,237,16388,1,(void*)&img_default,defscheme);
	if(pbuttonscreen_OBJ_PICTURE_2_3==NULL){CreateError(0);while(1);} //Fatal Error, Check for memory leak or heap size
}

void (*CreateFunctionArray[NUM_GDD_SCREENS])(void)=
{
&Createbuttonscreen
};

void (*CreatePrimitivesFunctionArray[NUM_GDD_SCREENS])(void)=
{
NULL
};
