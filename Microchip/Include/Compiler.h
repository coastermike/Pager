/*********************************************************************
 *
 *                  Compiler and hardware specific definitions
 *
 *********************************************************************
 * FileName:        Compiler.h
 * Dependencies:    None
 * Processor:       PIC10, PIC12, PIC16, PIC18, PIC24, dsPIC, PIC32
 * Compiler:        Microchip C32 v2.02 or higher
 *					Microchip C30 v3.31 or higher
 *					Microchip C18 v3.40 or higher
 *					HI-TECH PICC-18 PRO 9.66 or higher
 * 					HI-TECH PICC PRO V9.81 or higher
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright (C) 2012 Microchip Technology Inc.  All rights 
 * reserved.
 *
 * Microchip licenses to you the right to use, modify, copy, and 
 * distribute: 
 * (i)  the Software when embedded on a Microchip microcontroller or 
 *      digital signal controller product ("Device") which is 
 *      integrated into Licensee's product; or
 * (ii) ONLY the Software driver source files ENC28J60.c and 
 *      ENC28J60.h ported to a non-Microchip device used in 
 *      conjunction with a Microchip ethernet controller for the 
 *      sole purpose of interfacing with the ethernet controller. 
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL 
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR 
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF 
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS 
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE 
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER 
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT 
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *
 * Date         Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 10/03/2006	Original, copied from old Compiler.h
 * 11/07/2007	Reorganized and simplified
 * 03/31/2010	Removed dependency on WORD and DWORD typedefs
 * 04/14/2010   Added defines to uniquely identify each compiler
 * 10/13/2010   Added support for PIC10, PIC12, and PIC16 with PICC compiler
 * 02/15/2012   Added re-define check for Nop, ClrWdt, Reset, Sleep
 ********************************************************************/
#ifndef __COMPILER_H
#define __COMPILER_H

// Include proper device header file
    #define COMPILER_MPLAB_C30
	#include <p24FJ256DA210.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Base RAM and ROM pointer types for given architecture
#if defined(__C30__)
	#define PTR_BASE		unsigned short
	#define ROM_PTR_BASE	unsigned short
#endif


// Definitions that apply to all except Microchip MPLAB C Compiler for PIC18 MCUs (C18)
#if !defined(COMPILER_MPLAB_C18)
	#define memcmppgm2ram(a,b,c)	memcmp(a,b,c)
	#define strcmppgm2ram(a,b)		strcmp(a,b)
	#define memcpypgm2ram(a,b,c)	memcpy(a,b,c)
	#define strcpypgm2ram(a,b)		strcpy(a,b)
	#define strncpypgm2ram(a,b,c)	strncpy(a,b,c)
	#define strstrrampgm(a,b)		strstr(a,b)
	#define	strlenpgm(a)			strlen(a)
	#define strchrpgm(a,b)			strchr(a,b)
	#define strcatpgm2ram(a,b)		strcat(a,b)
#endif

// Definitions that apply to all 16-bit and 32-bit products
// (PIC24F, PIC24H, dsPIC30F, dsPIC33F, and PIC32)

	#define	ROM						const

	// 16-bit specific defines (PIC24F, PIC24H, dsPIC30F, dsPIC33F)
	#if defined(__C30__)
		#define Reset()				asm("reset")
        #define FAR                 __attribute__((far))
	#endif

#endif
