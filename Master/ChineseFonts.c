/*****************************************************************************
 * FileName:        ChineseFonts.c
 * Processor:       PIC24F, PIC24H, dsPIC
 * Compiler:        MPLAB C30 (see release notes for tested revision)
 * Linker:          MPLAB LINK30
 * Company:         Microchip Technology, Inc.
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
 *
 *****************************************************************************/

/************************************************************************************
* Created from AR PL New Sung font (fireflysung.ttf).
* AR PL New Sung font is 
*	Copyright (c) 1994-1999, Arphic Technology Co., Ltd.
*   Copyright (C) 1999-2004, Firefly and Arphic Technology Co., Ltd.
* All Rights Reserved.
* NOTICE: This Truetype font contains embedded bitmap fonts made
*	by firefly and is released as a whole
*	under the ARPHIC PUBLIC LICENSE. 
*	There are also seperate bitmap fonts made by Firefly and 
*	released under the GENERAL PUBLIC LICENSE (GPL):
*	http://www.study-area.org/apt/firefly-font/bitmaps/
*
*Copyright:
*    (Copied from 'license/english/ARPHICPL.TXT'.
*     See 'license/big5/ARPHICPL.TXT' or 'license/gb/ARPHICPL.TXT'
*     for the Chinese version.)
*************************************************************************************/

/*
==========================================================================

ARPHIC PUBLIC LICENSE

Copyright (C) 1999 Arphic Technology Co., Ltd.
11Fl. No.168, Yung Chi Rd., Taipei, 110 Taiwan
All rights reserved except as specified below.

Everyone is permitted to copy and distribute verbatim copies of this
license document, but changing it is forbidden.

Preamble

   The licenses for most software are designed to take away your freedom
to share and change it. By contrast, the ARPHIC PUBLIC LICENSE
specifically permits and encourages you to use this software, provided
that you give the recipients all the rights that we gave you and make
sure they can get the modifications of this software.

Legal Terms

0. Definitions:
   Throughout this License, "Font" means the TrueType fonts "AR PL
Mingti2L Big5", "AR PL KaitiM Big5" (BIG-5 character set) and "AR PL
SungtiL GB", "AR PL KaitiM GB" (GB character set) which are originally
distributed by Arphic, and the derivatives of those fonts created
through any modification including modifying glyph, reordering glyph,
converting format, changing font name, or adding/deleting some
characters in/from glyph table.

   "PL" means "Public License".

   "Copyright Holder" means whoever is named in the copyright or
copyrights for the Font.

   "You" means the licensee, or person copying, redistributing or
modifying the Font.

   "Freely Available" means that you have the freedom to copy or modify
the Font as well as redistribute copies of the Font under the same
conditions you received, not price. If you wish, you can charge for this
service.

1. Copying & Distribution
   You may copy and distribute verbatim copies of this Font in any
medium, without restriction, provided that you retain this license file
(ARPHICPL.TXT) unaltered in all copies.

2. Modification
   You may otherwise modify your copy of this Font in any way, including
modifying glyph, reordering glyph, converting format, changing font
name, or adding/deleting some characters in/from glyph table, and copy
and distribute such modifications under the terms of Section 1 above,
provided that the following conditions are met:

   a) You must insert a prominent notice in each modified file stating
how and when you changed that file.

   b) You must make such modifications Freely Available as a whole to
all third parties under the terms of this License, such as by offering
access to copy the modifications from a designated place, or
distributing the modifications on a medium customarily used for software
interchange.

   c) If the modified fonts normally reads commands interactively when
run, you must cause it, when started running for such interactive use in
the most ordinary way, to print or display an announcement including an
appropriate copyright notice and a notice that there is no warranty (or
else, saying that you provide a warranty) and that users may
redistribute the Font under these conditions, and telling the user how
to view a copy of this License.

   These requirements apply to the modified work as a whole. If
identifiable sections of that work are not derived from the Font, and
can be reasonably considered independent and separate works in
themselves, then this License and its terms, do not apply to those
sections when you distribute them as separate works. Therefore, mere
aggregation of another work not based on the Font with the Font on a
volume of a storage or distribution medium does not bring the other work
under the scope of this License.

3. Condition Subsequent
   You may not copy, modify, sublicense, or distribute the Font except
as expressly provided under this License. Any attempt otherwise to copy,
modify, sublicense or distribute the Font will automatically
retroactively void your rights under this License. However, parties who
have received copies or rights from you under this License will keep
their licenses valid so long as such parties remain in full compliance.

4. Acceptance
   You are not required to accept this License, since you have not
signed it. However, nothing else grants you permission to copy, modify,
sublicense or distribute the Font. These actions are prohibited by law
if you do not accept this License. Therefore, by copying, modifying,
sublicensing or distributing the Font, you indicate your acceptance of
this License and all its terms and conditions.

5. Automatic Receipt
   Each time you redistribute the Font, the recipient automatically
receives a license from the original licensor to copy, distribute or
modify the Font subject to these terms and conditions. You may not
impose any further restrictions on the recipients' exercise of the
rights granted herein. You are not responsible for enforcing compliance
by third parties to this License. 

6. Contradiction
   If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License. If you cannot distribute
so as to satisfy simultaneously your obligations under this License and
any other pertinent obligations, then as a consequence you may not
distribute the Font at all. For example, if a patent license would not
permit royalty-free redistribution of the Font by all those who receive
copies directly or indirectly through you, then the only way you could
satisfy both it and this License would be to refrain entirely from
distribution of the Font.

   If any portion of this section is held invalid or unenforceable under
any particular circumstance, the balance of the section is intended to
apply and the section as a whole is intended to apply in other
circumstances. 

7. NO WARRANTY
   BECAUSE THE FONT IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY FOR
THE FONT, TO THE EXTENT PERMITTED BY APPLICABLE LAW. EXCEPT WHEN
OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS OR OTHER PARTIES
PROVIDE THE FONT "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. THE ENTIRE RISK AS
TO THE QUALITY AND PERFORMANCE OF THE FONT IS WITH YOU. SHOULD THE FONT
PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR
OR CORRECTION.

8. DAMAGES WAIVER
   UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING, IN NO
EVENT WILL ANY COPYRIGHTT HOLDERS, OR OTHER PARTIES WHO MAY COPY, MODIFY
OR REDISTRIBUTE THE FONT AS PERMITTED ABOVE, BE LIABLE TO YOU FOR ANY
DIRECT, INDIRECT, CONSEQUENTIAL, INCIDENTAL, SPECIAL OR EXEMPLARY
DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE FONT (INCLUDING
BUT NOT LIMITED TO PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
USE, DATA OR PROFITS; OR BUSINESS INTERRUPTION), EVEN IF SUCH HOLDERS OR
OTHER PARTIES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

======================================================================
*/


 /*****************************************************************************
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.7.1
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <Graphics/Graphics.h>

/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 *
 * Fonts
 * -----
 * GOLFontDefault - Heigth: 17 pixels, range: ' ' to '?'
 * GOLSmallFont - Heigth: 15 pixels, range: ' ' to '?'
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  GOLFontDefault
 *****************************************************************************/

const XCHAR cTouchScreenStr[] = {   0x00DE, 0x00DA, 0x00B8, 0x00A6, 0x00A9, 0x0080, 0x0088, 0x00B3, 0x0089, 0x00D5, 0x00D2, 0x00D3, 0x0000    };    // Touch screen to continue

const XCHAR cButtonStr[] = {   0x00B6, 0x00E8, 0x0000    };    // Buttons			

const XCHAR cCheckBoxStr[] = {   0x00A1, 0x00E4, 0x00C2, 0x0000    };    // Checkbox		

const XCHAR cRadioButtonStr[] = {   0x00DD, 0x0000    };    //Language	

const XCHAR cGroupBoxStr[] = {   0x00D0, 0x009B, 0x00C2, 0x0000    };    //GroupBox

const XCHAR cStaticTextStr[] = {   0x00EA, 0x00B2, 0x00B9, 0x00C0, 0x0000    };    //StaticText

const XCHAR cSliderStr[] = {   0x00C6, 0x0094, 0x00C1, 0x0000    };    //Slider			

const XCHAR cProgressBarStr[] = {   0x00E2, 0x00AD, 0x00C1, 0x0000    };    //Progress bar

const XCHAR cListBoxStr[] = {   0x0091, 0x00D9, 0x00C2, 0x0000    };    //List box		

const XCHAR cEditBoxStr[] = {   0x00D4, 0x00E0, 0x00C2, 0x0000    };    //Edit box		

const XCHAR cMeterStr[] = {   0x0087, 0x00D9, 0x0000    };    //Meter			

const XCHAR cDialStr[] = {   0x0087, 0x00D9, 0x00CD, 0x0000    };    //Dial			

const XCHAR cPictureStr[] = {   0x009F, 0x00C7, 0x0000    };    //Picture			

const XCHAR cCustomStr[] = {   0x00D7, 0x00A3, 0x0085, 0x00B7, 0x0092, 0x0000    };    //Custom Control	  

const XCHAR cSignatureStr[] = {   0x00CF, 0x009C, 0x0000    };    //Signature		

const XCHAR cPlottingStr[] = {   0x00D1, 0x009F, 0x0000    };    //Plotting		

const XCHAR cEcgStr[] = {   0x0045, 0x0043, 0x0047, 0x0000    };    //ECG 

const XCHAR cHomeStr[] = {   0x0084, 0x00EB, 0x0000    };    //Home			

const XCHAR cHomeLinesStr[] = {   0x0084, 0x00EB, 0x0031, 0x000A,
                                 0x0084, 0x00EB, 0x0032, 0x0000    };    //Home1/nHome2			

const XCHAR cLowStr[] = {   0x008A, 0x0000    };    //Low				

const XCHAR cHighStr[] = {   0x00EC, 0x0000    };    //High			

const XCHAR cOnStr[] = {   0x00AF, 0x0000    };    //On				

const XCHAR cOffStr[] = {   0x008E, 0x0000    };    //Off				

const XCHAR cEnableStr[] = {   0x008B, 0x00D6, 0x0000    };    //Enabled			

const XCHAR cDisabledStr[] = {   0x00CE, 0x00C3, 0x0000    };    //Disabled		

const XCHAR cTextLeftStr[] = {   0x00B9, 0x00C0, 0x00A8, 0x00E1, 0x0000    };    //Text Left						

const XCHAR cTextBottomStr[] = {   0x00B9, 0x00C0, 0x00AC, 0x00E7, 0x0000    };    //Text Bottom        				

const XCHAR cRb1Str[] = {   0x0052, 0x0062, 0x0031, 0x0000    };    //Rb1

const XCHAR cRb2Str[] = {   0x0052, 0x0062, 0x0032, 0x0000    };    //Rb2

const XCHAR cRb3Str[] = {   0x0052, 0x0062, 0x0033, 0x0000    };    //Rb3

const XCHAR cRb4Str[] = {   0x0045, 0x006E, 0x0067, 0x006C, 0x0069, 0x0073, 0x0068, 0x0000    };    //English

const XCHAR cRb5Str[] = {   0x0083, 0x00B9, 0x0000    };    //Chinese

const XCHAR cRb6Str[] = {   0x0052, 0x0062, 0x0036, 0x0000    };    //Rb6

const XCHAR cStaticTextLstStr[] = {   0x004D, 0x0069, 0x0063, 0x0072, 0x006F, 0x0063, 0x0068, 0x0069, 0x0070, 0x000A,
                                     0x009F, 0x00B0, 0x0095, 0x00AA, 0x00EA, 0x000A,
                                     0x00B2, 0x00B9, 0x00C0, 0x000A,
                                     0x009D, 0x00D0, 0x009B, 0x000A,
                                     0x00C2, 0x00C5, 0x00DC, 0x0000    };    //Microchip Graphics Library Static Text and Group Box Test.  

const XCHAR cLeftStr[] = {   0x00A8, 0x0000    };    //Left			

const XCHAR cCenterStr[] = {   0x0083, 0x0000    };    //Center			

const XCHAR cRightStr[] = {   0x0099, 0x0000    };    //Right			

const XCHAR cPIC24SpeedStr[] = {   0x0050, 0x0049, 0x0043, 0x00CC, 0x00BE, 0x00B1, 0x000A,
                                  0x00E6, 0x00AD, 0x00BC, 0x00A2, 0x00A5, 0x00EE, 0x0000    };    //How fast can PIC go?			 

const XCHAR cQuestionStr[] = {   0x003F, 0x0000    };    //? (Question mark)           

const XCHAR cSingleStr[] = {   0x0097, 0x0082, 0x0000    };    //Single			

const XCHAR cAlignCenterStr[] = {   0x0083, 0x00E9, 0x0000    };    //Center			

const XCHAR cListboxLstStr[] = {   0x00AB, 0x00C8, 0x000A,
                                  0x00A4, 0x00C9, 0x000A,
                                  0x00A4, 0x00AE, 0x00D7, 0x0094, 0x0095, 0x000A,
                                  0x00A7, 0x0081, 0x00B7, 0x0092, 0x000A,
                                  0x0096, 0x00CB, 0x00DB, 0x00A0, 0x000A,
                                  0x00C4, 0x00DF, 0x000A,
                                  0x0086, 0x0098, 0x00BD, 0x00A2, 0x007B, 0x0000    };    //Applications, Home Appliances, Home Automation, Industrial 		Controls, Medical Devices, Automotive and much more...

const XCHAR cCallingStr[] = {   0x00B4, 0x009A, 0x0083, 0x007B, 0x0000    };    //Calling...						

const XCHAR cHoldingStr[] = {   0x008C, 0x00B5, 0x00E5, 0x008D, 0x007B, 0x0000    };    //Holding...                      

const XCHAR cHoldStr[] = {   0x008C, 0x00B5, 0x0000    };    //Hold			

const XCHAR cAccelStr[] = {   0x0093, 0x00E6, 0x0000    };    //Accelerate (like increasing the speed)			

const XCHAR cDecelStr[] = {   0x008F, 0x00E6, 0x0000    };    //Decelerate (like decreasing the speed)			

const XCHAR cScaleStr[] = {   0x00D8, 0x009E, 0x0000    };    //Scale (like increase or decrease in size)		

const XCHAR cAnimateStr[] = {   0x0094, 0x00CA, 0x0000    };    //Animate (like a moving picture)

const XCHAR cLeftArrowStr[] = {   0x007E, 0x0020, 0x0000    };    // navigate left

const XCHAR cRightArrowStr[] = {   0x0020, 0x007F, 0x0000    };    // navigate right

const XCHAR cUpArrowStr[] = {   0x007C, 0x0000    };    // up arrow

const XCHAR cDownArrowStr[] = {   0x007D, 0x0000    };    // down arrow	

const XCHAR cExitStr[] = {   0x00E3, 0x0090, 0x0000    };    // exit			

const XCHAR cSetDateTimeStr[] = {   0x00DB, 0x00D5, 0x00BB, 0x00E9, 0x009D, 0x00BA, 0x00BF, 0x0000    };    //Set time and Date               

const XCHAR eTouchScreenStr[] = {   0x0054, 0x006F, 0x0075, 0x0063, 0x0068, 0x0020, 0x0073, 0x0063, 0x0072, 0x0065, 0x0065, 0x006E, 0x0020, 0x0074, 0x006F, 0x0020, 0x0063, 0x006F, 0x006E, 0x0074, 0x0069, 0x006E, 0x0075, 0x0065, 0x0000    };    //

const XCHAR eButtonStr[] = {   0x0042, 0x0075, 0x0074, 0x0074, 0x006F, 0x006E, 0x0073, 0x0000    };    //

const XCHAR eCheckBoxStr[] = {   0x0043, 0x0068, 0x0065, 0x0063, 0x006B, 0x0062, 0x006F, 0x0078, 0x0000    };    //

const XCHAR eRadioButtonStr[] = {   0x004C, 0x0061, 0x006E, 0x0067, 0x0075, 0x0061, 0x0067, 0x0065, 0x0000    };    //

const XCHAR eGroupBoxStr[] = {   0x0047, 0x0072, 0x006F, 0x0075, 0x0070, 0x0042, 0x006F, 0x0078, 0x0000    };    //

const XCHAR eStaticTextStr[] = {   0x0053, 0x0074, 0x0061, 0x0074, 0x0069, 0x0063, 0x0054, 0x0065, 0x0078, 0x0074, 0x0000    };    //

const XCHAR eSliderStr[] = {   0x0053, 0x006C, 0x0069, 0x0064, 0x0065, 0x0072, 0x0000    };    //

const XCHAR eProgressBarStr[] = {   0x0050, 0x0072, 0x006F, 0x0067, 0x0072, 0x0065, 0x0073, 0x0073, 0x0020, 0x0062, 0x0061, 0x0072, 0x0000    };    //

const XCHAR eListBoxStr[] = {   0x004C, 0x0069, 0x0073, 0x0074, 0x0020, 0x0062, 0x006F, 0x0078, 0x0000    };    //

const XCHAR eEditBoxStr[] = {   0x0045, 0x0064, 0x0069, 0x0074, 0x0020, 0x0062, 0x006F, 0x0078, 0x0000    };    //

const XCHAR eMeterStr[] = {   0x004D, 0x0065, 0x0074, 0x0065, 0x0072, 0x0000    };    //

const XCHAR eDialStr[] = {   0x0044, 0x0069, 0x0061, 0x006C, 0x0000    };    //

const XCHAR ePictureStr[] = {   0x0050, 0x0069, 0x0063, 0x0074, 0x0075, 0x0072, 0x0065, 0x0000    };    //

const XCHAR eCustomStr[] = {   0x0043, 0x0075, 0x0073, 0x0074, 0x006F, 0x006D, 0x0020, 0x0043, 0x006F, 0x006E, 0x0074, 0x0072, 0x006F, 0x006C, 0x0000    };    //

const XCHAR eSignatureStr[] = {   0x0053, 0x0069, 0x0067, 0x006E, 0x0061, 0x0074, 0x0075, 0x0072, 0x0065, 0x0000    };    //

const XCHAR ePlottingStr[] = {   0x0050, 0x006C, 0x006F, 0x0074, 0x0074, 0x0069, 0x006E, 0x0067, 0x0000    };    //

const XCHAR eEcgStr[] = {   0x0045, 0x0043, 0x0047, 0x0000    };    //

const XCHAR eHomeStr[] = {   0x0048, 0x006F, 0x006D, 0x0065, 0x0000    };    //

const XCHAR eHomeLinesStr[] = {   0x0048, 0x006F, 0x006D, 0x0065, 0x0031, 0x000A,
                                 0x0048, 0x006F, 0x006D, 0x0065, 0x0032, 0x0000    };    //

const XCHAR eLowStr[] = {   0x004C, 0x006F, 0x0077, 0x0000    };    //

const XCHAR eHighStr[] = {   0x0048, 0x0069, 0x0067, 0x0068, 0x0000    };    //

const XCHAR eOnStr[] = {   0x004F, 0x006E, 0x0000    };    //

const XCHAR eOffStr[] = {   0x004F, 0x0066, 0x0066, 0x0000    };    //

const XCHAR eEnableStr[] = {   0x0045, 0x006E, 0x0061, 0x0062, 0x006C, 0x0065, 0x0064, 0x0000    };    //

const XCHAR eDisabledStr[] = {   0x0044, 0x0069, 0x0073, 0x0061, 0x0062, 0x006C, 0x0065, 0x0064, 0x0000    };    //

const XCHAR eTextLeftStr[] = {   0x0054, 0x0065, 0x0078, 0x0074, 0x0020, 0x004C, 0x0065, 0x0066, 0x0074, 0x0000    };    //

const XCHAR eTextBottomStr[] = {   0x0054, 0x0065, 0x0078, 0x0074, 0x0020, 0x0042, 0x006F, 0x0074, 0x0074, 0x006F, 0x006D, 0x0000    };    //

const XCHAR eRb1Str[] = {   0x0052, 0x0062, 0x0031, 0x0000    };    //

const XCHAR eRb2Str[] = {   0x0052, 0x0062, 0x0032, 0x0000    };    //

const XCHAR eRb3Str[] = {   0x0052, 0x0062, 0x0033, 0x0000    };    //

const XCHAR eRb4Str[] = {   0x0045, 0x006E, 0x0067, 0x006C, 0x0069, 0x0073, 0x0068, 0x0000    };    //

const XCHAR eRb5Str[] = {   0x0083, 0x00B9, 0x0000    };    //

const XCHAR eRb6Str[] = {   0x0052, 0x0062, 0x0036, 0x0000    };    //

const XCHAR eStaticTextLstStr[] = {   0x004D, 0x0069, 0x0063, 0x0072, 0x006F, 0x0063, 0x0068, 0x0069, 0x0070, 0x000A,
                                     0x0047, 0x0072, 0x0061, 0x0070, 0x0068, 0x0069, 0x0063, 0x0073, 0x000A,
                                     0x004C, 0x0069, 0x0062, 0x0072, 0x0061, 0x0072, 0x0079, 0x000A,
                                     0x0053, 0x0074, 0x0061, 0x0074, 0x0069, 0x0063, 0x0020, 0x0054, 0x0065, 0x0078, 0x0074, 0x0020, 0x0026, 0x000A,
                                     0x0047, 0x0072, 0x006F, 0x0075, 0x0070, 0x0020, 0x0042, 0x006F, 0x0078, 0x0020, 0x0054, 0x0065, 0x0073, 0x0074, 0x0000    };    //

const XCHAR eLeftStr[] = {   0x004C, 0x0000    };    //

const XCHAR eCenterStr[] = {   0x0043, 0x0000    };    //   

const XCHAR eRightStr[] = {   0x0052, 0x0000    };    //

const XCHAR ePIC24SpeedStr[] = {   0x0048, 0x006F, 0x0077, 0x0020, 0x0066, 0x0061, 0x0073, 0x0074, 0x0020, 0x000A,
                                  0x0063, 0x0061, 0x006E, 0x0020, 0x0050, 0x0049, 0x0043, 0x0020, 0x0067, 0x006F, 0x003F, 0x0000    };    //

const XCHAR eQuestionStr[] = {   0x003F, 0x0000    };    //

const XCHAR eSingleStr[] = {   0x0053, 0x0069, 0x006E, 0x0067, 0x006C, 0x0065, 0x0000    };    //

const XCHAR eAlignCenterStr[] = {   0x0043, 0x0065, 0x006E, 0x0074, 0x0065, 0x0072, 0x0000    };    //

const XCHAR eListboxLstStr[] = {   0x0041, 0x0070, 0x0070, 0x006C, 0x0069, 0x0063, 0x0061, 0x0074, 0x0069, 0x006F, 0x006E, 0x0073, 0x000A,
                                  0x0048, 0x006F, 0x006D, 0x0065, 0x0020, 0x0041, 0x0070, 0x0070, 0x006C, 0x0069, 0x0061, 0x006E, 0x0063, 0x0065, 0x0073, 0x000A,
                                  0x0048, 0x006F, 0x006D, 0x0065, 0x0020, 0x0041, 0x0075, 0x0074, 0x006F, 0x006D, 0x0061, 0x0074, 0x0069, 0x006F, 0x006E, 0x000A,
                                  0x0049, 0x006E, 0x0064, 0x0075, 0x0073, 0x0074, 0x0072, 0x0069, 0x0061, 0x006C, 0x0020, 0x0043, 0x006F, 0x006E, 0x0074, 0x0072, 0x006F, 0x006C, 0x0073, 0x000A,
                                  0x004D, 0x0065, 0x0064, 0x0069, 0x0063, 0x0061, 0x006C, 0x0020, 0x0044, 0x0065, 0x0076, 0x0069, 0x0063, 0x0065, 0x0073, 0x000A,
                                  0x0041, 0x0075, 0x0074, 0x006F, 0x006D, 0x006F, 0x0074, 0x0069, 0x0076, 0x0065, 0x000A,
                                  0x0061, 0x006E, 0x0064, 0x0020, 0x006D, 0x0075, 0x0063, 0x0068, 0x0020, 0x006D, 0x006F, 0x0072, 0x0065, 0x002E, 0x002E, 0x002E, 0x0000    };    //

const XCHAR eCallingStr[] = {   0x0043, 0x0061, 0x006C, 0x006C, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E, 0x002E, 0x0000    };    //

const XCHAR eHoldingStr[] = {   0x0048, 0x006F, 0x006C, 0x0064, 0x0069, 0x006E, 0x0067, 0x002E, 0x002E, 0x002E, 0x0000    };    //

const XCHAR eHoldStr[] = {   0x0048, 0x006F, 0x006C, 0x0064, 0x0000    };    //

const XCHAR eAccelStr[] = {   0x0041, 0x0063, 0x0063, 0x0065, 0x006C, 0x0000    };    //

const XCHAR eDecelStr[] = {   0x0044, 0x0063, 0x006C, 0x0072, 0x0074, 0x0000    };    //

const XCHAR eScaleStr[] = {   0x0053, 0x0063, 0x0061, 0x006C, 0x0065, 0x0000    };    //

const XCHAR eAnimateStr[] = {   0x0041, 0x006E, 0x0069, 0x006D, 0x0061, 0x0074, 0x0065, 0x0000    };    //

const XCHAR eLeftArrowStr[] = {   0x007E, 0x0020, 0x0000    };    // navigate left

const XCHAR eRightArrowStr[] = {   0x0020, 0x007F, 0x0000    };    // navigate right

const XCHAR eUpArrowStr[] = {   0x007C, 0x0000    };    // up arrow

const XCHAR eDownArrowStr[] = {   0x007D, 0x0000    };    // down arrow	

const XCHAR eExitStr[] = {   0x0045, 0x0078, 0x0069, 0x0074, 0x0000    };    //

const XCHAR eSetDateTimeStr[] = {   0x0053, 0x0065, 0x0074, 0x0020, 0x0054, 0x0069, 0x006D, 0x0065, 0x0020, 0x0061, 0x006E, 0x0064, 0x0020, 0x0044, 0x0061, 0x0074, 0x0065, 0x0000    };    //

/*****************************************************************************
 * SECTION:  GOLSmallFont
 *****************************************************************************/

const XCHAR cOnBulbStr[] = {   0x0090, 0x0000    };    //On				

const XCHAR cOffBulbStr[] = {   0x0080, 0x0000    };    //Off				

const XCHAR cSelectionStr[] = {   0x00B6, 0x0093, 0x0000    };    //Selection		

const XCHAR cAlignmentStr[] = {   0x008D, 0x00BA, 0x0000    };    //Alignment		

const XCHAR cReturnStr[] = {   0x00B4, 0x0088, 0x0000    };    //return (like the return key of the keyboard)  

const XCHAR cMeter1Str[] = {   0x007D, 0x00AB, 0x0031, 0x0000    };    //Meter1			

const XCHAR cMeter2Str[] = {   0x007D, 0x00AB, 0x0032, 0x0000    };    //Meter2			

const XCHAR cValueLabelStr[] = {   0x00AE, 0x0097, 0x0000    };    // Value (like a number value, a reading from a meter or a gauge)   

const XCHAR cMoreStr[] = {   0x009A, 0x008B, 0x007B, 0x0000    };    //MORE......     (more menu or data list)					

const XCHAR cBackStr[] = {   0x00B4, 0x0088, 0x007B, 0x0000    };    //BACK......     (back to previous menu or data list)		

const XCHAR cGroup1Str[] = {   0x00A6, 0x0031, 0x0020, 0x0000    };    //Group 1							

const XCHAR cGroup2Str[] = {   0x00A6, 0x0032, 0x0000    };    //Group 2						    

const XCHAR cSetTimeDateStr[] = {   0x00AD, 0x00A9, 0x0099, 0x00B9, 0x0087, 0x0098, 0x009B, 0x0000    };    //Set time and Date               

const XCHAR cNormalLoadStr[] = {   0x009F, 0x008E, 0x00AF, 0x00B1, 0x0000    };    //Normal Load                     

const XCHAR cLightLoadStr[] = {   0x00B2, 0x00B0, 0x00AF, 0x00B1, 0x0000    };    //Light Load                      

const XCHAR cHeavyLoadStr[] = {   0x00B2, 0x00B7, 0x00AF, 0x00B1, 0x0000    };    //Heavy Load                      

const XCHAR cUseR6PotStr[] = {   0x007F, 0x00A2, 0x0052, 0x0036, 0x00A3, 0x007E, 0x00AC, 0x0000    };    //Using R6 Potentiometer (R6 is a resistor code) 

const XCHAR cScanModeStr[] = {   0x0092, 0x0096, 0x009E, 0x0091, 0x0000    };    //Scan Mode                       

const XCHAR cScrSelList1[] = {   0x0094, 0x00B8, 0x000A,
                                0x008A, 0x00B6, 0x009D, 0x000A,
                                0x0084, 0x00B6, 0x0094, 0x00B8, 0x000A,
                                0x00A6, 0x0085, 0x009D, 0x000A,
                                0x00A0, 0x0083, 0x009C, 0x000A,
                                0x00B5, 0x008F, 0x009C, 0x000A,
                                0x0081, 0x00AB, 0x009D, 0x000A,
                                0x00A8, 0x00B3, 0x009D, 0x000A,
                                0x009A, 0x008B, 0x007B, 0x0000    };    //ScreenItems1

const XCHAR cScrSelList2[] = {   0x00B4, 0x0088, 0x007B, 0x000A,
                                0x007D, 0x00AB, 0x000A,
                                0x007D, 0x00AB, 0x00A4, 0x000A,
                                0x0089, 0x00A1, 0x000A,
                                0x00AA, 0x008C, 0x007C, 0x0095, 0x0082, 0x000A,
                                0x00A5, 0x0086, 0x000A,
                                0x00A7, 0x0089, 0x000A,
                                0x0045, 0x0043, 0x0047, 0x0000    };    //Screen Items2 

const XCHAR cScrSelListLang[] = {   0x0045, 0x006E, 0x0067, 0x006C, 0x0069, 0x0073, 0x0068, 0x000A,
                                   0x0043, 0x0068, 0x0069, 0x006E, 0x0065, 0x0073, 0x0065, 0x0000    };    // "English"/"Chinese" List

const XCHAR cLanguage[] = {   0x004C, 0x0061, 0x006E, 0x0067, 0x0075, 0x0061, 0x0067, 0x0065, 0x0000    };    // "Language" string

const XCHAR eOnBulbStr[] = {   0x004F, 0x006E, 0x0000    };    // "On" string

const XCHAR eOffBulbStr[] = {   0x004F, 0x0066, 0x0066, 0x0000    };    // "Off" string

const XCHAR eSelectionStr[] = {   0x0053, 0x0065, 0x006C, 0x0065, 0x0063, 0x0074, 0x0069, 0x006F, 0x006E, 0x0000    };    // "Selection" string

const XCHAR eAlignmentStr[] = {   0x0041, 0x006C, 0x0069, 0x0067, 0x006E, 0x006D, 0x0065, 0x006E, 0x0074, 0x0000    };    // "Alignment" string 

const XCHAR eReturnStr[] = {   0x004F, 0x004B, 0x0000    };    // "OK string

const XCHAR eMeter1Str[] = {   0x004D, 0x0065, 0x0074, 0x0065, 0x0072, 0x0031, 0x0000    };    // "Meter1" string

const XCHAR eMeter2Str[] = {   0x004D, 0x0065, 0x0074, 0x0065, 0x0072, 0x0032, 0x0000    };    // "Meter2" string 

const XCHAR eValueLabelStr[] = {   0x0056, 0x0061, 0x006C, 0x0075, 0x0065, 0x0000    };    // "Value" string

const XCHAR eMoreStr[] = {   0x004D, 0x004F, 0x0052, 0x0045, 0x002E, 0x002E, 0x002E, 0x0000    };    // "MORE...." string

const XCHAR eBackStr[] = {   0x0042, 0x0041, 0x0043, 0x004B, 0x002E, 0x002E, 0x002E, 0x0000    };    // "BACK...." string

const XCHAR eGroup1Str[] = {   0x0047, 0x0072, 0x006F, 0x0075, 0x0070, 0x0020, 0x0031, 0x0000    };    // "Group 1" string

const XCHAR eGroup2Str[] = {   0x0047, 0x0072, 0x006F, 0x0075, 0x0070, 0x0020, 0x0032, 0x0000    };    // "Group 2" string

const XCHAR eSetTimeDateStr[] = {   0x0053, 0x0065, 0x0074, 0x0020, 0x0054, 0x0069, 0x006D, 0x0065, 0x0020, 0x0061, 0x006E, 0x0064, 0x0020, 0x0044, 0x0061, 0x0074, 0x0065, 0x0000    };    // "Set time and Date" string

const XCHAR eNormalLoadStr[] = {   0x004E, 0x006F, 0x0072, 0x006D, 0x0061, 0x006C, 0x0020, 0x004C, 0x006F, 0x0061, 0x0064, 0x0000    };    // "Normal Load" string

const XCHAR eLightLoadStr[] = {   0x004C, 0x0069, 0x0067, 0x0068, 0x0074, 0x0020, 0x004C, 0x006F, 0x0061, 0x0064, 0x0000    };    // "Light Load" string

const XCHAR eHeavyLoadStr[] = {   0x0048, 0x0065, 0x0061, 0x0076, 0x0079, 0x0020, 0x004C, 0x006F, 0x0061, 0x0064, 0x0000    };    // "Heavy Load" string

const XCHAR eUseR6PotStr[] = {   0x0055, 0x0073, 0x0069, 0x006E, 0x0067, 0x0020, 0x0050, 0x006F, 0x0074, 0x0065, 0x006E, 0x0074, 0x0069, 0x006F, 0x006D, 0x0065, 0x0074, 0x0065, 0x0072, 0x0000    };    // "Using Potentiometer string

const XCHAR eScanModeStr[] = {   0x0053, 0x0063, 0x0061, 0x006E, 0x0020, 0x004D, 0x006F, 0x0064, 0x0065, 0x0000    };    // "Scan Mode" string

const XCHAR eScrSelList1[] = {   0x0042, 0x0075, 0x0074, 0x0074, 0x006F, 0x006E, 0x000A,
                                0x0043, 0x0068, 0x0065, 0x0063, 0x006B, 0x0062, 0x006F, 0x0078, 0x000A,
                                0x0052, 0x0061, 0x0064, 0x0069, 0x006F, 0x0020, 0x0062, 0x0075, 0x0074, 0x0074, 0x006F, 0x006E, 0x0073, 0x000A,
                                0x0047, 0x0072, 0x006F, 0x0075, 0x0070, 0x0020, 0x0042, 0x006F, 0x0078, 0x000A,
                                0x0053, 0x006C, 0x0069, 0x0064, 0x0065, 0x0072, 0x000A,
                                0x0050, 0x0072, 0x006F, 0x0067, 0x0072, 0x0065, 0x0073, 0x0073, 0x0020, 0x0062, 0x0061, 0x0072, 0x000A,
                                0x004C, 0x0069, 0x0073, 0x0074, 0x0020, 0x0062, 0x006F, 0x0078, 0x000A,
                                0x0045, 0x0064, 0x0069, 0x0074, 0x0020, 0x0062, 0x006F, 0x0078, 0x000A,
                                0x004D, 0x004F, 0x0052, 0x0045, 0x002E, 0x002E, 0x002E, 0x0000    };    // List 1 strings

const XCHAR eScrSelList2[] = {   0x0042, 0x0041, 0x0043, 0x004B, 0x002E, 0x002E, 0x002E, 0x000A,
                                0x004D, 0x0065, 0x0074, 0x0065, 0x0072, 0x000A,
                                0x0044, 0x0069, 0x0061, 0x006C, 0x000A,
                                0x0050, 0x0069, 0x0063, 0x0074, 0x0075, 0x0072, 0x0065, 0x000A,
                                0x0043, 0x0075, 0x0073, 0x0074, 0x006F, 0x006D, 0x0020, 0x0063, 0x006F, 0x006E, 0x0074, 0x0072, 0x006F, 0x006C, 0x000A,
                                0x0053, 0x0069, 0x0067, 0x006E, 0x0061, 0x0074, 0x0075, 0x0072, 0x0065, 0x000A,
                                0x0050, 0x006C, 0x006F, 0x0074, 0x0074, 0x0069, 0x006E, 0x0067, 0x000A,
                                0x0045, 0x0043, 0x0047, 0x0000    };    // List 2 strings

const XCHAR eScrSelListLang[] = {   0x0045, 0x006E, 0x0067, 0x006C, 0x0069, 0x0073, 0x0068, 0x000A,
                                   0x0043, 0x0068, 0x0069, 0x006E, 0x0065, 0x0073, 0x0065, 0x0000    };    // "English"/"Chinese" List

const XCHAR eLanguage[] = {   0x004C, 0x0061, 0x006E, 0x0067, 0x0075, 0x0061, 0x0067, 0x0065, 0x0000    };    // "Language" string

/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * Font Structure
 * Label: GOLFontDefault
 * Description:  Heigth: 17 pixels, range: ' ' to '?'
 ***********************************/

extern const char __GOLFontDefault[] __attribute__((aligned(2)));

const FONT_FLASH GOLFontDefault =
{
    (FLASH | COMP_NONE),
    __GOLFontDefault
};

const char __GOLFontDefault[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Information
    0x00,           // ID
    0x20, 0x00,     // First Character
    0xEE, 0x00,     // Last Character
    0x11,           // Height
    0x00,           // Reserved
/****************************************
 * Font Glyph Table
 ****************************************/
    0x04, 0x44, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x55, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x66, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x77, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x88, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x99, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xAA, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xBB, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xCC, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xDD, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xEE, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xFF, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x10, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x21, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x32, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x43, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x54, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x65, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x76, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x87, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x98, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xA9, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xBA, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xCB, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xDC, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xED, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xFE, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x0F, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x20, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x31, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x42, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x53, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x64, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x75, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x86, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x97, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xA8, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xB9, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xCA, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xDB, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xEC, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xFD, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x0E, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x1F, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x30, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x41, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x52, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x63, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x74, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x85, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x96, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xA7, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xB8, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xC9, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xDA, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xEB, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xFC, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x0D, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x1E, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x2F, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x40, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x51, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x62, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x73, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x84, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x95, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xA6, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xB7, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xC8, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xD9, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xEA, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xFB, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x0C, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x1D, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x2E, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x3F, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0x50, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x61, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x72, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x83, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x94, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xA5, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xB6, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xC7, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xD8, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xE9, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0xFA, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x0B, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x1C, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x2D, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x3E, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x4F, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x71, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x93, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xB5, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xD7, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xF9, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x1B, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x3D, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x5F, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x81, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xA3, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xC5, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xE7, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x09, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x2B, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x4D, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x6F, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x91, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xB3, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xD5, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xF7, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x19, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x3B, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x5D, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x7F, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xA1, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xC3, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xE5, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x07, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x29, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x4B, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x6D, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x8F, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xB1, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xD3, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xF5, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x17, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x39, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x5B, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x7D, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x9F, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xC1, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xE3, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x05, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x27, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x49, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x6B, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x8D, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xAF, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xD1, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xF3, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x15, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x37, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x59, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x7B, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x9D, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xBF, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xE1, 0x10, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x03, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x25, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x47, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x69, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x8B, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xAD, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xCF, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xF1, 0x11, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x13, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x35, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x57, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x79, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x9B, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xBD, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xDF, 0x12, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x01, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x23, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x45, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x67, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x89, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xAB, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xCD, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xEF, 0x13, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x11, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x33, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x55, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x77, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x99, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xBB, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xDD, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xFF, 0x14, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x21, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x43, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x65, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x87, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xA9, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xCB, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xED, 0x15, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x0F, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x31, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x53, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x75, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x97, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xB9, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xDB, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xFD, 0x16, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x1F, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x41, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x63, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x85, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xA7, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xC9, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0xEB, 0x17, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x0D, 0x18, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x2F, 0x18, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x51, 0x18, 0x00,           // width, MSB Offset, LSB offset
    0x08, 0x73, 0x18, 0x00,           // width, MSB Offset, LSB offset
    0x0F, 0x84, 0x18, 0x00,           // width, MSB Offset, LSB offset
/***********************************
 * Font Characters
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x36,         //  ** **  
    0x24,         //   *  *  
    0x12,         //  *  *   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x48,         //    *  * 
    0x48,         //    *  * 
    0x48,         //    *  * 
    0xFE,         //  *******
    0x24,         //   *  *  
    0x24,         //   *  *  
    0x24,         //   *  *  
    0x24,         //   *  *  
    0x24,         //   *  *  
    0x7F,         // ******* 
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x3E,         //  *****  
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x09,         // *  *    
    0x0A,         //  * *    
    0x1C,         //   ***   
    0x28,         //    * *  
    0x48,         //    *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x3E,         //  *****  
    0x08,         //    *    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x46,         //  **   * 
    0x29,         // *  * *  
    0x29,         // *  * *  
    0x29,         // *  * *  
    0x19,         // *  **   
    0x16,         //  ** *   
    0x08,         //    *    
    0x34,         //   * **  
    0x4C,         //   **  * 
    0x4A,         //  * *  * 
    0x4A,         //  * *  * 
    0x4A,         //  * *  * 
    0x31,         // *   **  
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x0A,         //  * *    
    0x04,         //   *     
    0x74,         //   * *** 
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x29,         // *  * *  
    0x11,         // *   *   
    0x31,         // *   **  
    0x4E,         //  ***  * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x06,         //  **     
    0x04,         //   *     
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x10,         //     *   
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x49,         // *  *  * 
    0x2A,         //  * * *  
    0x1C,         //   ***   
    0x2A,         //  * * *  
    0x49,         // *  *  * 
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x7F,         // ******* 
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x04,         //   *     
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x40,         //       * 
    0x40,         //       * 
    0x20,         //      *  
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x18,         //    **   
    0x24,         //   *  *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x24,         //   *  *  
    0x18,         //    **   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x0C,         //   **    
    0x0A,         //  * *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x3E,         //  *****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x42,         //  *    * 
    0x41,         // *     * 
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x20,         //      *  
    0x1C,         //   ***   
    0x20,         //      *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x20,         //      *  
    0x30,         //     **  
    0x28,         //    * *  
    0x24,         //   *  *  
    0x24,         //   *  *  
    0x22,         //  *   *  
    0x21,         // *    *  
    0x7F,         // ******* 
    0x20,         //      *  
    0x20,         //      *  
    0x70,         //     *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x1D,         // * ***   
    0x23,         // **   *  
    0x40,         //       * 
    0x40,         //       * 
    0x41,         // *     * 
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x42,         //  *    * 
    0x01,         // *       
    0x01,         // *       
    0x1D,         // * ***   
    0x23,         // **   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x41,         // *     * 
    0x41,         // *     * 
    0x20,         //      *  
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x62,         //  *   ** 
    0x5C,         //   *** * 
    0x40,         //       * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x06,         //  **     
    0x04,         //   *     
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x40,         //       * 
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x01,         // *       
    0x02,         //  *      
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x20,         //      *  
    0x40,         //       * 
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x02,         //  *      
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x20,         //      *  
    0x40,         //       * 
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x40,         //       * 
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x41,         // *     * 
    0x59,         // *  ** * 
    0x65,         // * *  ** 
    0x45,         // * *   * 
    0x65,         // * *  ** 
    0x59,         // *  ** * 
    0x01,         // *       
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x14,         //   * *   
    0x14,         //   * *   
    0x14,         //   * *   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x3E,         //  *****  
    0x41,         // *     * 
    0x41,         // *     * 
    0x63,         // **   ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x5C,         //   *** * 
    0x62,         //  *   ** 
    0x42,         //  *    * 
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x41,         // *     * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x42,         //  *    * 
    0x02,         //  *      
    0x02,         //  *      
    0x12,         //  *  *   
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x02,         //  *      
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x02,         //  *      
    0x12,         //  *  *   
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x5C,         //   *** * 
    0x62,         //  *   ** 
    0x42,         //  *    * 
    0x01,         // *       
    0x01,         // *       
    0x71,         // *   *** 
    0x41,         // *     * 
    0x41,         // *     * 
    0x42,         //  *    * 
    0x66,         //  **  ** 
    0x58,         //    ** * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0xE7,         // ***  ***
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x7E,         //  ****** 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0xE7,         // ***  ***
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x78,         //    **** 
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x67,         // ***  ** 
    0x22,         //  *   *  
    0x12,         //  *  *   
    0x0A,         //  * *    
    0x06,         //  **     
    0x0A,         //  * *    
    0x0A,         //  * *    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x67,         // ***  ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x41,         // *     * 
    0x63,         // **   ** 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x63,         // **   ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x61,         // *    ** 
    0x43,         // **    * 
    0x43,         // **    * 
    0x45,         // * *   * 
    0x45,         // * *   * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x51,         // *   * * 
    0x51,         // *   * * 
    0x61,         // *    ** 
    0x43,         // **    * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x5D,         // * *** * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x10,         //     *   
    0x60,         //      ** 
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x42,         //  *    * 
    0xC7,         // ***   **
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x2C,         //   ** *  
    0x32,         //  *  **  
    0x21,         // *    *  
    0x01,         // *       
    0x01,         // *       
    0x1E,         //  ****   
    0x20,         //      *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x23,         // **   *  
    0x1D,         // * ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x3E,         //  *****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0xE7,         // ***  ***
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x41,         // *     * 
    0x41,         // *     * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x14,         //   * *   
    0x14,         //   * *   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x73,         // **  *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x21,         // *    *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x42,         //  *    * 
    0x41,         // *     * 
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x08,         //    *    
    0x10,         //     *   
    0x10,         //     *   
    0x20,         //      *  
    0x20,         //      *  
    0x40,         //       * 
    0x40,         //       * 
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x08,         //    *    
    0x14,         //   * *   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x08,         //    *    
    0x10,         //     *   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x42,         //  *    * 
    0x40,         //       * 
    0x7E,         //  ****** 
    0x41,         // *     * 
    0x61,         // *    ** 
    0xDE,         //  **** **
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x1E,         //  ****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x26,         //  **  *  
    0x1A,         //  * **   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x5C,         //   *** * 
    0x62,         //  *   ** 
    0x41,         // *     * 
    0x01,         // *       
    0x01,         // *       
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x3C,         //   ****  
    0x22,         //  *   *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x32,         //  *  **  
    0x6C,         //   ** ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x7F,         // ******* 
    0x01,         // *       
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x38,         //    ***  
    0x44,         //   *   * 
    0x04,         //   *     
    0x04,         //   *     
    0x3F,         // ******  
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0xDC,         //   *** **
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x02,         //  *      
    0x1E,         //  ****   
    0x21,         // *    *  
    0x41,         // *     * 
    0x3E,         //  *****  
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x3A,         //  * ***  
    0x46,         //  **   * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0xE7,         // ***  ***
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x06,         //  **     
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x62,         //  *   ** 
    0x22,         //  *   *  
    0x12,         //  *  *   
    0x0E,         //  ***    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x67,         // ***  ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x06,         //  **     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x35,         // * * **  
    0x4B,         // ** *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x26,         //  **  *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x41,         // *     * 
    0x41,         // *     * 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7C,         //   ***** 
    0x22,         //  *   *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x22,         //  *   *  
    0x3C,         //   ****  
    0x20,         //      *  
    0x20,         //      *  
    0x70,         //     *** 
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x36,         //  ** **  
    0x4C,         //   **  * 
    0x44,         //   *   * 
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x42,         //  *    * 
    0x02,         //  *      
    0x3C,         //   ****  
    0x40,         //       * 
    0x42,         //  *    * 
    0x3C,         //   ****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x3F,         // ******  
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x44,         //   *   * 
    0x44,         //   *   * 
    0x38,         //    ***  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x42,         //  *    * 
    0x62,         //  *   ** 
    0x5C,         //   *** * 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x41,         // *     * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x14,         //   * *   
    0x08,         //    *    
    0x14,         //   * *   
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x24,         //   *  *  
    0x14,         //   * *   
    0x18,         //    **   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x03,         // **      
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x21,         // *    *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x42,         //  *    * 
    0x7F,         // ******* 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x8C, 0x31,         //   **   **   **  
    0x8C, 0x31,         //   **   **   **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0xC0, 0x01,         //       ***       
    0xE0, 0x03,         //      *****      
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0xE0, 0x03,         //      *****      
    0xC0, 0x01,         //       ***       
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x22,         //          *   *  
    0x00, 0x22,         //          *   *  
    0x00, 0x11,         //         *   *   
    0x00, 0x11,         //         *   *   
    0x80, 0x08,         //        *   *    
    0x80, 0x08,         //        *   *    
    0x40, 0x04,         //       *   *     
    0x40, 0x04,         //       *   *     
    0x80, 0x08,         //        *   *    
    0x80, 0x08,         //        *   *    
    0x00, 0x11,         //         *   *   
    0x00, 0x11,         //         *   *   
    0x00, 0x22,         //          *   *  
    0x00, 0x22,         //          *   *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x22, 0x00,         //  *   *          
    0x22, 0x00,         //  *   *          
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x44, 0x00,         //   *   *         
    0x44, 0x00,         //   *   *         
    0x22, 0x00,         //  *   *          
    0x22, 0x00,         //  *   *          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x08,         //       *    *    
    0xC0, 0x1F,         //       *******   
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x10,         //       *     *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x22, 0x12,         //  *   *   *  *   
    0x24, 0x12,         //   *  *   *  *   
    0x24, 0x0A,         //   *  *   * *    
    0x28, 0x0A,         //    * *   * *    
    0x28, 0x06,         //    * *   **     
    0x28, 0x02,         //    * *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x12,         //      *   *  *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x40, 0x01,         //       * *       
    0x20, 0x02,         //      *   *      
    0x10, 0x04,         //     *     *     
    0x88, 0x08,         //    *   *   *    
    0x86, 0x30,         //  **    *    **  
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x84, 0x10,         //   *    *    *   
    0xFC, 0x3F,         //   ************  
    0x84, 0x10,         //   *    *    *   
    0x84, 0x10,         //   *    *    *   
    0x84, 0x10,         //   *    *    *   
    0xFC, 0x1F,         //   ***********   
    0x84, 0x10,         //   *    *    *   
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x80, 0x00,         //        *        
    0x80, 0x08,         //        *   *    
    0xFE, 0x1F,         //  ************   
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x04,         //        *  *     
    0xF8, 0x0F,         //    *********    
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFF, 0x3F,         // **************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x08,         //      *     *    
    0x48, 0x08,         //    *  *    *    
    0x88, 0x04,         //    *   *  *     
    0x88, 0x04,         //    *   *  *     
    0x08, 0x04,         //    *      *     
    0x10, 0x02,         //     *    *      
    0x10, 0x02,         //     *    *      
    0x20, 0x01,         //      *  *       
    0x40, 0x01,         //       * *       
    0x80, 0x00,         //        *        
    0xC0, 0x00,         //       **        
    0x20, 0x03,         //      *  **      
    0x18, 0x0C,         //    **     **    
    0x06, 0x30,         //  **         **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0x08, 0x08,         //    *       *    
    0x48, 0x08,         //    *  *    *    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x09,         //    *   **  *    
    0x08, 0x09,         //    *    *  *    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x88, 0x08,         //    *   *   *    
    0x48, 0x04,         //    *  *   *     
    0x38, 0x0C,         //    ***    **    
    0x0E, 0x12,         //  ***     *  *   
    0x88, 0x31,         //    *   **   **  
    0x60, 0x20,         //      **      *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x90, 0x00,         //     *  *        
    0x10, 0x01,         //     *   *       
    0x10, 0x0A,         //     *    * *    
    0x48, 0x0A,         //    *  *  * *    
    0x48, 0x08,         //    *  *    *    
    0x4C, 0x08,         //   **  *    *    
    0x8A, 0x08,         //  * *   *   *    
    0x89, 0x04,         // *  *   *  *     
    0x08, 0x05,         //    *    * *     
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x08, 0x05,         //    *    * *     
    0x88, 0x08,         //    *   *   *    
    0x68, 0x30,         //    * **     **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x08,         //     *      *    
    0x10, 0x1C,         //     *     ***   
    0xD0, 0x03,         //     * ****      
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x0C, 0x12,         //   **     *  *   
    0xEA, 0x3F,         //  * * *********  
    0x09, 0x02,         // *  *     *      
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0xC8, 0x1F,         //    *  *******   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x88, 0x00,         //    *   *        
    0x08, 0x01,         //    *    *       
    0x04, 0x01,         //   *     *       
    0x04, 0x08,         //   *        *    
    0xF4, 0x1F,         //   * *********   
    0x06, 0x00,         //  **             
    0x25, 0x08,         // * *  *     *    
    0x44, 0x08,         //   *   *    *    
    0x44, 0x04,         //   *   *   *     
    0x84, 0x04,         //   *    *  *     
    0x84, 0x04,         //   *    *  *     
    0x84, 0x02,         //   *    * *      
    0x04, 0x02,         //   *      *      
    0xF4, 0x3F,         //   * **********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x08,         //     *      *    
    0x50, 0x1C,         //     * *   ***   
    0xD0, 0x03,         //     * ****      
    0x48, 0x02,         //    *  *  *      
    0x48, 0x02,         //    *  *  *      
    0x4C, 0x12,         //   **  *  *  *   
    0xCA, 0x3F,         //  * *  ********  
    0x49, 0x04,         // *  *  *   *     
    0x48, 0x04,         //    *  *   *     
    0x48, 0x04,         //    *  *   *     
    0x48, 0x25,         //    *  * * *  *  
    0xC8, 0x28,         //    *  **   * *  
    0x68, 0x33,         //    * ** **  **  
    0x48, 0x22,         //    *  *  *   *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x02,         //     *    *      
    0x10, 0x12,         //     *    *  *   
    0xF0, 0x3F,         //     **********  
    0x08, 0x02,         //    *     *      
    0xC8, 0x1F,         //    *  *******   
    0x4C, 0x12,         //   **  *  *  *   
    0x4A, 0x12,         //  * *  *  *  *   
    0xC9, 0x1F,         // *  *  *******   
    0x48, 0x12,         //    *  *  *  *   
    0x88, 0x02,         //    *   * *      
    0x08, 0x01,         //    *    *       
    0x08, 0x03,         //    *    **      
    0xC8, 0x0C,         //    *  **  **    
    0x38, 0x30,         //    ***      **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC8, 0x1F,         //    *  *******   
    0x48, 0x10,         //    *  *     *   
    0x48, 0x10,         //    *  *     *   
    0x44, 0x10,         //   *   *     *   
    0xC4, 0x1F,         //   *   *******   
    0x44, 0x12,         //   *   *  *  *   
    0x06, 0x02,         //  **      *      
    0xF5, 0x3F,         // * * **********  
    0x04, 0x02,         //   *      *      
    0x84, 0x0A,         //   *    * * *    
    0x84, 0x0A,         //   *    * * *    
    0x44, 0x12,         //   *   *  *  *   
    0x24, 0x22,         //   *  *   *   *  
    0x14, 0x22,         //   * *    *   *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x01,         //    *    *       
    0x08, 0x02,         //    *     *      
    0x08, 0x12,         //    *     *  *   
    0xE4, 0x3F,         //   *  *********  
    0x04, 0x00,         //   *             
    0xC6, 0x1F,         //  **   *******   
    0x05, 0x00,         // * *             
    0xC4, 0x1F,         //   *   *******   
    0x04, 0x00,         //   *             
    0xC4, 0x1F,         //   *   *******   
    0x44, 0x10,         //   *   *     *   
    0x44, 0x10,         //   *   *     *   
    0xC4, 0x1F,         //   *   *******   
    0x44, 0x10,         //   *   *     *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x04,         //     *     *     
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x00, 0x09,         //         *  *    
    0xFC, 0x1F,         //   ***********   
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x40, 0x01,         //       * *       
    0x20, 0x02,         //      *   *      
    0x10, 0x04,         //     *     *     
    0x08, 0x08,         //    *       *    
    0x0C, 0x18,         //   **       **   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0x02, 0x18,         //  *         **   
    0x04, 0x28,         //   *        * *  
    0xE0, 0x3F,         //      *********  
    0x28, 0x08,         //    * *     *    
    0xA8, 0x0B,         //    * * *** *    
    0x28, 0x08,         //    * *     *    
    0xA4, 0x2B,         //   *  * *** * *  
    0xA7, 0x2A,         // ***  * * * * *  
    0xA4, 0x1A,         //   *  * * * **   
    0xA4, 0x0B,         //   *  * *** *    
    0xA4, 0x2A,         //   *  * * * * *  
    0x14, 0x34,         //   * *     * **  
    0x0C, 0x23,         //   **    **   *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0x42, 0x08,         //  *    *    *    
    0xFE, 0x0F,         //  ***********    
    0x40, 0x00,         //       *         
    0x41, 0x10,         // *     *     *   
    0x41, 0x10,         // *     *     *   
    0x41, 0x10,         // *     *     *   
    0x41, 0x10,         // *     *     *   
    0xFF, 0x1F,         // *************   
    0x01, 0x10,         // *           *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x20,         //        *     *  
    0xFE, 0x21,         //  ********    *  
    0x08, 0x24,         //    *      *  *  
    0x88, 0x24,         //    *   *  *  *  
    0xF8, 0x25,         //    ****** *  *  
    0x88, 0x24,         //    *   *  *  *  
    0x84, 0x24,         //   *    *  *  *  
    0x4A, 0x24,         //  * *  *   *  *  
    0x51, 0x24,         // *   * *   *  *  
    0x20, 0x24,         //      *    *  *  
    0x20, 0x20,         //      *       *  
    0x10, 0x24,         //     *     *  *  
    0x0C, 0x38,         //   **       ***  
    0x03, 0x10,         // **          *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x20,         //     *        *  
    0x12, 0x20,         //  *  *        *  
    0x12, 0x24,         //  *  *     *  *  
    0xFE, 0x24,         //  *******  *  *  
    0x11, 0x24,         // *   *     *  *  
    0xFF, 0x25,         // ********* *  *  
    0x10, 0x24,         //     *     *  *  
    0xFE, 0x24,         //  *******  *  *  
    0x92, 0x24,         //  *  *  *  *  *  
    0x92, 0x24,         //  *  *  *  *  *  
    0x92, 0x20,         //  *  *  *     *  
    0xF2, 0x24,         //  *  ****  *  *  
    0x52, 0x38,         //  *  * *    ***  
    0x10, 0x10,         //     *       *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x00,         //    *            
    0x08, 0x00,         //    *            
    0x48, 0x12,         //    *  *  *  *   
    0xFF, 0x3E,         // ******** *****  
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x44, 0x12,         //   *   *  *  *   
    0x4C, 0x1E,         //   **  *  ****   
    0x72, 0x12,         //  *  ***  *  *   
    0x21, 0x12,         // *    *   *  *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0x00, 0x02,         //          *      
    0x3E, 0x02,         //  *****   *      
    0x00, 0x22,         //          *   *  
    0x80, 0x3F,         //        *******  
    0x7F, 0x22,         // *******  *   *  
    0x08, 0x22,         //    *     *   *  
    0x08, 0x22,         //    *     *   *  
    0x24, 0x22,         //   *  *   *   *  
    0x22, 0x22,         //  *   *   *   *  
    0x5F, 0x21,         // ***** * *    *  
    0x82, 0x25,         //  *     ** *  *  
    0x80, 0x38,         //        *   ***  
    0x40, 0x10,         //       *     *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x88, 0x01,         //    *   **       
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x84, 0x0C,         //   *    *  **    
    0x84, 0x04,         //   *    *  *     
    0x84, 0x02,         //   *    * *      
    0x86, 0x01,         //  **    **       
    0x85, 0x00,         // * *    *        
    0xC4, 0x00,         //   *   **        
    0xA4, 0x00,         //   *  * *        
    0x94, 0x10,         //   * *  *    *   
    0x84, 0x10,         //   *    *    *   
    0x84, 0x30,         //   *    *    **  
    0x04, 0x1F,         //   *     *****   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0xFE, 0x1F,         //  ************   
    0x22, 0x00,         //  *   *          
    0x22, 0x00,         //  *   *          
    0xE2, 0x0F,         //  *   *******    
    0x12, 0x01,         //  *  *   *       
    0x02, 0x01,         //  *      *       
    0xFA, 0x1F,         //  * **********   
    0x82, 0x00,         //  *     *        
    0x82, 0x01,         //  *     **       
    0x42, 0x06,         //  *    *  **     
    0x32, 0x04,         //  *  **    *     
    0x02, 0x10,         //  *          *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x04,         //     *     *     
    0x20, 0x02,         //      *   *      
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0xFC, 0x07,         //   *********     
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x1F,         //      *  *****   
    0x20, 0x08,         //      *     *    
    0x20, 0x08,         //      *     *    
    0x50, 0x04,         //     * *   *     
    0x90, 0x04,         //     *  *  *     
    0x08, 0x03,         //    *    **      
    0x08, 0x03,         //    *    **      
    0xC4, 0x0C,         //   *   **  **    
    0x32, 0x30,         //  *  **      **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x40, 0x10,         //       *     *   
    0xFE, 0x3F,         //  *************  
    0x40, 0x00,         //       *         
    0x20, 0x00,         //      *          
    0x20, 0x08,         //      *     *    
    0xF0, 0x1F,         //     *********   
    0x28, 0x08,         //    * *     *    
    0x24, 0x08,         //   *  *     *    
    0x22, 0x08,         //  *   *     *    
    0x20, 0x08,         //      *     *    
    0xE0, 0x0F,         //      *******    
    0x20, 0x08,         //      *     *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x04,         //     *     *     
    0xF0, 0x0F,         //     ********    
    0x10, 0x04,         //     *     *     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x00, 0x10,         //             *   
    0xFE, 0x3F,         //  *************  
    0x20, 0x00,         //      *          
    0xF0, 0x0F,         //     ********    
    0x00, 0x08,         //            *    
    0x00, 0x08,         //            *    
    0x80, 0x08,         //        *   *    
    0x00, 0x07,         //         ***     
    0x00, 0x02,         //          *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0x20, 0x01,         //      *  *       
    0x10, 0x02,         //     *    *      
    0x0C, 0x0C,         //   **      **    
    0x03, 0x30,         // **          **  
    0xF8, 0x07,         //    ********     
    0x00, 0x00,         //                 
    0x00, 0x04,         //           *     
    0xF8, 0x0F,         //    *********    
    0x08, 0x04,         //    *      *     
    0x08, 0x04,         //    *      *     
    0x08, 0x04,         //    *      *     
    0xF8, 0x07,         //    ********     
    0x08, 0x04,         //    *      *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x60, 0x00,         //      **         
    0x20, 0x08,         //      *     *    
    0xE0, 0x1F,         //      ********   
    0x10, 0x08,         //     *      *    
    0x28, 0x04,         //    * *    *     
    0x44, 0x02,         //   *   *  *      
    0x02, 0x01,         //  *      *       
    0x80, 0x00,         //        *        
    0xE0, 0x1F,         //      ********   
    0x38, 0x10,         //    ***      *   
    0x26, 0x10,         //  **  *      *   
    0x20, 0x10,         //      *      *   
    0xE0, 0x1F,         //      ********   
    0x20, 0x10,         //      *      *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x70, 0x00,         //     ***         
    0x1E, 0x3E,         //  ****    *****  
    0x10, 0x22,         //     *    *   *  
    0x10, 0x22,         //     *    *   *  
    0xFF, 0x22,         // ******** *   *  
    0x10, 0x22,         //     *    *   *  
    0x34, 0x22,         //   * **   *   *  
    0x54, 0x22,         //   * * *  *   *  
    0x52, 0x22,         //  *  * *  *   *  
    0x92, 0x3E,         //  *  *  * *****  
    0x91, 0x22,         // *   *  * *   *  
    0x11, 0x22,         // *   *    *   *  
    0x10, 0x00,         //     *           
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x10,         //   *         *   
    0xFC, 0x3F,         //   ************  
    0x84, 0x10,         //   *    *    *   
    0x84, 0x10,         //   *    *    *   
    0xF4, 0x17,         //   * ******* *   
    0x84, 0x10,         //   *    *    *   
    0xE4, 0x17,         //   *  ****** *   
    0x84, 0x10,         //   *    *    *   
    0xF4, 0x17,         //   * ******* *   
    0x84, 0x14,         //   *    *  * *   
    0x84, 0x12,         //   *    * *  *   
    0x84, 0x10,         //   *    *    *   
    0xFC, 0x1F,         //   ***********   
    0x04, 0x10,         //   *         *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x10,         //   *         *   
    0xFC, 0x3F,         //   ************  
    0x44, 0x10,         //   *   *     *   
    0xC4, 0x17,         //   *   ***** *   
    0x24, 0x12,         //   *  *   *  *   
    0x5C, 0x12,         //   *** *  *  *   
    0x84, 0x11,         //   *    **   *   
    0x44, 0x12,         //   *   *  *  *   
    0xB4, 0x1C,         //   * ** *  ***   
    0x04, 0x11,         //   *     *   *   
    0xE4, 0x10,         //   *  ***    *   
    0x04, 0x11,         //   *     *   *   
    0xFC, 0x1F,         //   ***********   
    0x04, 0x10,         //   *         *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x20, 0x04,         //      *    *     
    0xF0, 0x0F,         //     ********    
    0x28, 0x02,         //    * *   *      
    0xC4, 0x01,         //   *   ***       
    0x40, 0x03,         //       * **      
    0x30, 0x3C,         //     **    ****  
    0xFE, 0x0F,         //  ***********    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x08,         //     *      *    
    0xF0, 0x1F,         //     *********   
    0x08, 0x00,         //    *            
    0xF4, 0x0F,         //   * ********    
    0x12, 0x08,         //  *  *      *    
    0xF0, 0x0F,         //     ********    
    0x10, 0x08,         //     *      *    
    0xF0, 0x0F,         //     ********    
    0x20, 0x04,         //      *    *     
    0xE0, 0x0F,         //      *******    
    0x30, 0x02,         //     **   *      
    0x48, 0x01,         //    *  * *       
    0xC0, 0x01,         //       ***       
    0x3C, 0x3E,         //   ****   *****  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x01,         //        **       
    0x80, 0x10,         //        *    *   
    0xC0, 0x3F,         //       ********  
    0x20, 0x08,         //      *     *    
    0x58, 0x04,         //    ** *   *     
    0x80, 0x03,         //        ***      
    0xC0, 0x00,         //       **        
    0xBE, 0x10,         //  ***** *    *   
    0xC0, 0x3F,         //       ********  
    0x20, 0x10,         //      *      *   
    0x58, 0x08,         //    ** *    *    
    0x80, 0x06,         //        * **     
    0x80, 0x01,         //        **       
    0x7E, 0x00,         //  ******         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0x82, 0x10,         //  *     *    *   
    0xFE, 0x3F,         //  *************  
    0x02, 0x10,         //  *          *   
    0x01, 0x08,         // *          *    
    0xFC, 0x1F,         //   ***********   
    0x80, 0x00,         //        *        
    0x88, 0x00,         //    *   *        
    0x88, 0x08,         //    *   *   *    
    0x88, 0x1F,         //    *   ******   
    0x98, 0x00,         //    **  *        
    0xA4, 0x00,         //   *  * *        
    0xC2, 0x30,         //  *    **    **  
    0x81, 0x0F,         // *      *****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0x82, 0x20,         //  *     *     *  
    0xFE, 0x3F,         //  *************  
    0x02, 0x20,         //  *           *  
    0xFD, 0x0F,         // * **********    
    0x20, 0x08,         //      *     *    
    0x50, 0x04,         //     * *   *     
    0xCE, 0x02,         //  ***  ** *      
    0x20, 0x03,         //      *  **      
    0x90, 0x05,         //     *  ** *     
    0x4E, 0x05,         //  ***  * * *     
    0x30, 0x19,         //     **  *  **   
    0x2E, 0x31,         //  *** *  *   **  
    0xC0, 0x20,         //       **     *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x90, 0x04,         //     *  *  *     
    0x90, 0x08,         //     *  *   *    
    0x88, 0x30,         //    *   *    **  
    0x88, 0x20,         //    *   *     *  
    0x84, 0x08,         //   *    *   *    
    0x82, 0x0C,         //  *     *  **    
    0x80, 0x02,         //        * *      
    0x00, 0x01,         //         *       
    0xC0, 0x00,         //       **        
    0x30, 0x00,         //     **          
    0x0E, 0x00,         //  ***            
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x10,         //             *   
    0xFC, 0x3F,         //   ************  
    0x04, 0x10,         //   *         *   
    0xFC, 0x1F,         //   ***********   
    0x44, 0x04,         //   *   *   *     
    0x84, 0x02,         //   *    * *      
    0xF4, 0x1F,         //   * *********   
    0x44, 0x04,         //   *   *   *     
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x3F,         //   ************  
    0x44, 0x04,         //   *   *   *     
    0x44, 0x04,         //   *   *   *     
    0x22, 0x04,         //  *   *    *     
    0x11, 0x04,         // *   *     *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0xFC, 0x1F,         //   ***********   
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x10,         //       *     *   
    0xFE, 0x3F,         //  *************  
    0x20, 0x00,         //      *          
    0x20, 0x00,         //      *          
    0x10, 0x08,         //     *      *    
    0xF0, 0x1F,         //     *********   
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x04, 0x01,         //   *     *       
    0x02, 0x01,         //  *      *       
    0x00, 0x11,         //         *   *   
    0xF8, 0x3F,         //    ***********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x02,         //     *    *      
    0xFF, 0x3F,         // **************  
    0x10, 0x02,         //     *    *      
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0xFF, 0x3F,         // **************  
    0x90, 0x04,         //     *  *  *     
    0x88, 0x08,         //    *   *   *    
    0xFC, 0x1F,         //   ***********   
    0x8B, 0x28,         // ** *   *   * *  
    0x88, 0x0E,         //    *   * ***    
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x00, 0x11,         //         *   *   
    0xFC, 0x3F,         //   ************  
    0x84, 0x00,         //   *    *        
    0x84, 0x08,         //   *    *   *    
    0xF4, 0x1F,         //   * *********   
    0x44, 0x02,         //   *   *  *      
    0x24, 0x02,         //   *  *   *      
    0xF4, 0x1F,         //   * *********   
    0x04, 0x02,         //   *      *      
    0xF4, 0x3F,         //   * **********  
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0x01, 0x02,         // *        *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x00, 0x11,         //         *   *   
    0xFC, 0x3F,         //   ************  
    0x04, 0x00,         //   *             
    0x04, 0x00,         //   *             
    0x84, 0x10,         //   *    *    *   
    0x84, 0x10,         //   *    *    *   
    0x14, 0x09,         //   * *   *  *    
    0x24, 0x09,         //   *  *  *  *    
    0x24, 0x05,         //   *  *  * *     
    0x44, 0x04,         //   *   *   *     
    0x42, 0x04,         //  *    *   *     
    0x02, 0x02,         //  *       *      
    0xF9, 0x3F,         // *  ***********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x01,         //        **       
    0x04, 0x11,         //   *     *   *   
    0xFC, 0x3F,         //   ************  
    0x04, 0x04,         //   *       *     
    0x24, 0x0E,         //   *  *   ***    
    0xE4, 0x03,         //   *  *****      
    0x24, 0x02,         //   *  *   *      
    0xE4, 0x3F,         //   *  *********  
    0x24, 0x02,         //   *  *   *      
    0x24, 0x02,         //   *  *   *      
    0x24, 0x22,         //   *  *   *   *  
    0xA2, 0x24,         //  *   * *  *  *  
    0x72, 0x2B,         //  *  *** ** * *  
    0x21, 0x32,         // *    *   *  **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x10,         //        *    *   
    0xFC, 0x3F,         //   ************  
    0x04, 0x00,         //   *             
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x3F,         //   ************  
    0x44, 0x04,         //   *   *   *     
    0xC4, 0x07,         //   *   *****     
    0x04, 0x00,         //   *             
    0xF4, 0x0F,         //   * ********    
    0x44, 0x04,         //   *   *   *     
    0x84, 0x02,         //   *    * *      
    0x02, 0x01,         //  *      *       
    0xC2, 0x06,         //  *    ** **     
    0x39, 0x38,         // *  ***     ***  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x00, 0x11,         //         *   *   
    0xFC, 0x3F,         //   ************  
    0x04, 0x10,         //   *         *   
    0x74, 0x0F,         //   * *** ****    
    0x24, 0x04,         //   *  *    *     
    0x14, 0x04,         //   * *     *     
    0x74, 0x1F,         //   * *** *****   
    0x44, 0x04,         //   *   *   *     
    0x4C, 0x04,         //   **  *   *     
    0xD4, 0x3F,         //   * * ********  
    0x22, 0x00,         //  *   *          
    0x52, 0x00,         //  *  * *         
    0x8D, 0x3F,         // * **   *******  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0xFC, 0x1F,         //   ***********   
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x20, 0x12,         //      *   *  *   
    0xFE, 0x3F,         //  *************  
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x10, 0x02,         //     *    *      
    0x10, 0x02,         //     *    *      
    0x08, 0x02,         //    *     *      
    0x04, 0x02,         //   *      *      
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0xFE, 0x31,         //  ********   **  
    0x48, 0x10,         //    *  *     *   
    0x48, 0x08,         //    *  *    *    
    0x48, 0x04,         //    *  *   *     
    0x48, 0x31,         //    *  * *   **  
    0xFE, 0x13,         //  *********  *   
    0x48, 0x08,         //    *  *    *    
    0x48, 0x04,         //    *  *   *     
    0x48, 0x30,         //    *  *     **  
    0x48, 0x10,         //    *  *     *   
    0x44, 0x08,         //   *   *    *    
    0x44, 0x04,         //   *   *   *     
    0x42, 0x02,         //  *    *  *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x08, 0x09,         //    *    *  *    
    0xCA, 0x1F,         //  * *  *******   
    0x1A, 0x09,         //  * **   *  *    
    0x2A, 0x09,         //  * * *  *  *    
    0x29, 0x09,         // *  * *  *  *    
    0xE8, 0x3F,         //    * *********  
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x88, 0x02,         //    *   * *      
    0x48, 0x04,         //    *  *   *     
    0x28, 0x38,         //    * *     ***  
    0x18, 0x10,         //    **       *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x40, 0x01,         //       * *       
    0x20, 0x02,         //      *   *      
    0xD0, 0x04,         //     * **  *     
    0x88, 0x18,         //    *   *   **   
    0x04, 0x10,         //   *         *   
    0xA0, 0x00,         //      * *        
    0x24, 0x11,         //   *  *  *   *   
    0x24, 0x25,         //   *  *  * *  *  
    0x24, 0x24,         //   *  *    *  *  
    0xC2, 0x0F,         //  *    ******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0xFE, 0x1F,         //  ************   
    0x10, 0x02,         //     *    *      
    0xFF, 0x3F,         // **************  
    0x00, 0x00,         //                 
    0xF8, 0x07,         //    ********     
    0x08, 0x04,         //    *      *     
    0xF8, 0x07,         //    ********     
    0x08, 0x04,         //    *      *     
    0xF8, 0x07,         //    ********     
    0x40, 0x10,         //       *     *   
    0x94, 0x24,         //   * *  *  *  *  
    0x12, 0x2C,         //  *  *     ** *  
    0xE1, 0x07,         // *    ******     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x02,         //    *     *      
    0x88, 0x0A,         //    *   * * *    
    0x88, 0x12,         //    *   * *  *   
    0x7F, 0x12,         // *******  *  *   
    0xC8, 0x3F,         //    *  ********  
    0x08, 0x01,         //    *    *       
    0x28, 0x09,         //    * *  *  *    
    0x18, 0x1F,         //    **   *****   
    0x8C, 0x09,         //   **   **  *    
    0x4B, 0x0A,         // ** *  *  * *    
    0x28, 0x04,         //    * *    *     
    0x08, 0x0A,         //    *     * *    
    0x0F, 0x31,         // ****    *   **  
    0xC8, 0x20,         //    *  **     *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0xC8, 0x1F,         //    *  *******   
    0x3F, 0x02,         // ******   *      
    0x08, 0x02,         //    *     *      
    0xC8, 0x3F,         //    *  ********  
    0x18, 0x08,         //    **      *    
    0x0C, 0x08,         //   **       *    
    0xEB, 0x3F,         // ** * *********  
    0x48, 0x08,         //    *  *    *    
    0x88, 0x08,         //    *   *   *    
    0x09, 0x08,         // *  *       *    
    0x0E, 0x0E,         //  ***     ***    
    0x0C, 0x04,         //   **      *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x02,         //    *     *      
    0x08, 0x04,         //    *      *     
    0x48, 0x24,         //    *  *   *  *  
    0xFF, 0x3F,         // **************  
    0x48, 0x12,         //    *  *  *  *   
    0x08, 0x02,         //    *     *      
    0x28, 0x11,         //    * *  *   *   
    0xD8, 0x3F,         //    ** ********  
    0x0C, 0x09,         //   **    *  *    
    0x8B, 0x08,         // ** *   *   *    
    0x88, 0x04,         //    *   *  *     
    0x08, 0x07,         //    *    ***     
    0x0F, 0x1A,         // ****     * **   
    0xE8, 0x11,         //    * ****   *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x03,         //   *     **      
    0x04, 0x02,         //   *      *      
    0xC4, 0x3F,         //   *   ********  
    0x5F, 0x20,         // ***** *      *  
    0x24, 0x15,         //   *  *  * * *   
    0x84, 0x08,         //   *    *   *    
    0x54, 0x30,         //   * * *     **  
    0x2C, 0x20,         //   ** *       *  
    0xC7, 0x1F,         // ***   *******   
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x05, 0x02,         // * *      *      
    0x07, 0x12,         // ***      *  *   
    0xE2, 0x3F,         //  *   *********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x84, 0x08,         //   *    *   *    
    0x84, 0x08,         //   *    *   *    
    0xE4, 0x3F,         //   *  *********  
    0x9F, 0x08,         // *****  *   *    
    0xC4, 0x1F,         //   *   *******   
    0x44, 0x10,         //   *   *     *   
    0xD4, 0x1F,         //   * * *******   
    0x4C, 0x10,         //   **  *     *   
    0xC7, 0x1F,         // ***   *******   
    0x04, 0x02,         //   *      *      
    0xE4, 0x3F,         //   *  *********  
    0x04, 0x05,         //   *     * *     
    0x87, 0x18,         // ***    *   **   
    0x64, 0x30,         //   *  **     **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFF, 0x3F,         // **************  
    0x10, 0x04,         //     *     *     
    0x10, 0x04,         //     *     *     
    0x20, 0x02,         //      *   *      
    0x20, 0x02,         //      *   *      
    0x40, 0x01,         //       * *       
    0x80, 0x00,         //        *        
    0x40, 0x01,         //       * *       
    0x20, 0x02,         //      *   *      
    0x18, 0x0C,         //    **     **    
    0x07, 0x30,         // ***         **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x08,         //    *       *    
    0xF8, 0x1F,         //    **********   
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x08,         //            *    
    0x12, 0x08,         //  *  *      *    
    0x3E, 0x08,         //  *****     *    
    0x12, 0x08,         //  *  *      *    
    0xD2, 0x3F,         //  *  * ********  
    0x12, 0x08,         //  *  *      *    
    0x5E, 0x08,         //  **** *    *    
    0x92, 0x09,         //  *  *  **  *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x08,         //  *  *      *    
    0x1E, 0x08,         //  ****      *    
    0x12, 0x08,         //  *  *      *    
    0x00, 0x0F,         //         ****    
    0x00, 0x04,         //           *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0x00, 0x10,         //             *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x90, 0x00,         //     *  *        
    0x90, 0x1F,         //     *  ******   
    0x98, 0x00,         //    **  *        
    0xA4, 0x00,         //   *  * *        
    0xC3, 0x3F,         // **    ********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x10,         //             *   
    0xFF, 0x3F,         // **************  
    0x80, 0x00,         //        *        
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0xF8, 0x0F,         //    *********    
    0x88, 0x08,         //    *   *   *    
    0x90, 0x00,         //     *  *        
    0xA0, 0x00,         //      * *        
    0x40, 0x00,         //       *         
    0xB0, 0x01,         //     ** **       
    0x0F, 0x3E,         // ****     *****  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x00, 0x10,         //             *   
    0xFE, 0x3F,         //  *************  
    0x44, 0x00,         //   *   *         
    0xFC, 0x3F,         //   ************  
    0x44, 0x11,         //   *   * *   *   
    0x7C, 0x0A,         //   *****  * *    
    0x44, 0x04,         //   *   *   *     
    0xFE, 0x1A,         //  ******* * **   
    0x40, 0x31,         //       * *   **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x44, 0x3E,         //   *   *  *****  
    0x44, 0x22,         //   *   *  *   *  
    0xFE, 0x22,         //  ******* *   *  
    0x44, 0x22,         //   *   *  *   *  
    0x44, 0x3E,         //   *   *  *****  
    0x7C, 0x22,         //   *****  *   *  
    0x44, 0x22,         //   *   *  *   *  
    0x7C, 0x22,         //   *****  *   *  
    0x44, 0x3E,         //   *   *  *****  
    0xFF, 0x23,         // **********   *  
    0x28, 0x22,         //    * *   *   *  
    0x44, 0x21,         //   *   * *    *  
    0x82, 0x3C,         //  *     *  ****  
    0x41, 0x10,         // *     *     *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0xC0, 0x01,         //       ***       
    0xA0, 0x02,         //      * * *      
    0x90, 0x04,         //     *  *  *     
    0x88, 0x08,         //    *   *   *    
    0x84, 0x10,         //   *    *    *   
    0xF2, 0x27,         //  *  *******  *  
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x20, 0x04,         //      *    *     
    0xF0, 0x0F,         //     ********    
    0x28, 0x02,         //    * *   *      
    0x44, 0x01,         //   *   * *       
    0xC2, 0x01,         //  *    ***       
    0x3C, 0x3E,         //   ****   *****  
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x90, 0x04,         //     *  *  *     
    0x88, 0x18,         //    *   *   **   
    0xE4, 0x10,         //   *  ***    *   
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x48, 0x10,         //    *  *     *   
    0xC8, 0x3F,         //    *  ********  
    0x48, 0x00,         //    *  *         
    0x48, 0x00,         //    *  *         
    0x7F, 0x1F,         // ******* *****   
    0x48, 0x04,         //    *  *   *     
    0x5C, 0x04,         //   *** *   *     
    0x6A, 0x1F,         //  * * ** *****   
    0x4A, 0x04,         //  * *  *   *     
    0x49, 0x04,         // *  *  *   *     
    0xC9, 0x3F,         // *  *  ********  
    0x48, 0x00,         //    *  *         
    0x48, 0x10,         //    *  *     *   
    0xC8, 0x3F,         //    *  ********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x88, 0x00,         //    *   *        
    0x88, 0x08,         //    *   *   *    
    0x88, 0x1F,         //    *   ******   
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x10,         //    *   *    *   
    0xFF, 0x3F,         // **************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x82, 0x00,         //  *     *        
    0x8C, 0x10,         //   **   *    *   
    0xC8, 0x3F,         //    *  ********  
    0x40, 0x00,         //       *         
    0xA9, 0x1F,         // *  * * ******   
    0x1A, 0x00,         //  * **           
    0xE4, 0x0F,         //   *  *******    
    0x04, 0x08,         //   *        *    
    0x04, 0x08,         //   *        *    
    0x03, 0x08,         // **         *    
    0x02, 0x28,         //  *         * *  
    0x03, 0x28,         // **         * *  
    0x03, 0x30,         // **          **  
    0x02, 0x20,         //  *           *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x20,         //  *           *  
    0xF4, 0x21,         //   * *****    *  
    0x18, 0x25,         //    **   * *  *  
    0x10, 0x25,         //     *   * *  *  
    0x59, 0x25,         // *  ** * * *  *  
    0x5A, 0x25,         //  * ** * * *  *  
    0x54, 0x25,         //   * * * * *  *  
    0x54, 0x25,         //   * * * * *  *  
    0x54, 0x25,         //   * * * * *  *  
    0x53, 0x25,         // **  * * * *  *  
    0x42, 0x20,         //  *    *      *  
    0xA3, 0x24,         // **   * *  *  *  
    0x13, 0x3B,         // **  *   ** ***  
    0x0A, 0x12,         //  * *     *  *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x01,         //  *      *       
    0x04, 0x12,         //   *      *  *   
    0xE4, 0x3F,         //   *  *********  
    0x80, 0x08,         //        *   *    
    0x49, 0x11,         // *  *  * *   *   
    0xAA, 0x28,         //  * * * *   * *  
    0xC4, 0x0F,         //   *   ******    
    0x04, 0x11,         //   *     *   *   
    0x84, 0x01,         //   *    **       
    0x43, 0x1A,         // **    *  * **   
    0x62, 0x04,         //  *   **   *     
    0x52, 0x08,         //  *  * *    *    
    0xC2, 0x31,         //  *    ***   **  
    0x62, 0x20,         //  *   **      *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x01,         //         *       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x08, 0x11,         //    *    *   *   
    0xF8, 0x3F,         //    ***********  
    0x08, 0x00,         //    *            
    0x08, 0x00,         //    *            
    0x08, 0x02,         //    *     *      
    0xF8, 0x07,         //    ********     
    0x08, 0x02,         //    *     *      
    0x08, 0x02,         //    *     *      
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x02, 0x02,         //  *       *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x10,         //    *        *   
    0xF8, 0x3F,         //    ***********  
    0x88, 0x10,         //    *   *    *   
    0x88, 0x10,         //    *   *    *   
    0xF8, 0x1F,         //    **********   
    0x88, 0x10,         //    *   *    *   
    0x88, 0x10,         //    *   *    *   
    0x88, 0x10,         //    *   *    *   
    0xF8, 0x1F,         //    **********   
    0x88, 0x10,         //    *   *    *   
    0x88, 0x10,         //    *   *    *   
    0x88, 0x12,         //    *   * *  *   
    0x84, 0x1C,         //   *    *  ***   
    0x82, 0x08,         //  *     *   *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x08,         //       *    *    
    0xFC, 0x1F,         //   ***********   
    0x44, 0x08,         //   *   *    *    
    0x44, 0x08,         //   *   *    *    
    0xFC, 0x0F,         //   **********    
    0x44, 0x08,         //   *   *    *    
    0x44, 0x08,         //   *   *    *    
    0xFC, 0x0F,         //   **********    
    0x44, 0x08,         //   *   *    *    
    0x40, 0x10,         //       *     *   
    0x40, 0x30,         //       *     **  
    0x80, 0x1F,         //        ******   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x10,         //             *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xF0, 0x07,         //     *******     
    0x94, 0x14,         //   * *  *  * *   
    0x94, 0x14,         //   * *  *  * *   
    0xF4, 0x17,         //   * ******* *   
    0x94, 0x14,         //   * *  *  * *   
    0x94, 0x14,         //   * *  *  * *   
    0xF4, 0x17,         //   * ******* *   
    0x04, 0x10,         //   *         *   
    0xFC, 0x1F,         //   ***********   
    0x04, 0x10,         //   *         *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x08, 0x11,         //    *    *   *   
    0xF8, 0x3F,         //    ***********  
    0x0B, 0x00,         // ** *            
    0xEA, 0x1F,         //  * * ********   
    0x0C, 0x04,         //   **      *     
    0x08, 0x02,         //    *     *      
    0x0C, 0x01,         //   **    *       
    0x0B, 0x01,         // ** *    *       
    0x09, 0x01,         // *  *    *       
    0x08, 0x01,         //    *    *       
    0x04, 0x01,         //   *     *       
    0xC4, 0x01,         //   *   ***       
    0x02, 0x01,         //  *      *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x0C, 0x01,         //   **    *       
    0x04, 0x01,         //   *     *       
    0x02, 0x01,         //  *      *       
    0x3F, 0x3F,         // ******  ******  
    0xA1, 0x20,         // *    * *     *  
    0x61, 0x20,         // *    **      *  
    0x21, 0x20,         // *    *       *  
    0x3F, 0x21,         // ******  *    *  
    0x21, 0x22,         // *    *   *   *  
    0x21, 0x22,         // *    *   *   *  
    0x21, 0x20,         // *    *       *  
    0x21, 0x22,         // *    *   *   *  
    0x3F, 0x1C,         // ******    ***   
    0x21, 0x08,         // *    *     *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x90, 0x08,         //     *  *   *    
    0xF0, 0x1F,         //     *********   
    0x90, 0x08,         //     *  *   *    
    0x10, 0x09,         //     *   *  *    
    0xFE, 0x3F,         //  *************  
    0x90, 0x08,         //     *  *   *    
    0x10, 0x09,         //     *   *  *    
    0x10, 0x09,         //     *   *  *    
    0x08, 0x04,         //    *      *     
    0xFC, 0x0F,         //   **********    
    0x24, 0x09,         //   *  *  *  *    
    0x24, 0x09,         //   *  *  *  *    
    0x24, 0x09,         //   *  *  *  *    
    0xFF, 0x3F,         // **************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x04,         //     *     *     
    0x10, 0x04,         //     *     *     
    0x7E, 0x3F,         //  ****** ******  
    0x10, 0x04,         //     *     *     
    0x38, 0x0E,         //    ***   ***    
    0x54, 0x15,         //   * * * * * *   
    0x92, 0x24,         //  *  *  *  *  *  
    0xF8, 0x0F,         //    *********    
    0x00, 0x00,         //                 
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x88, 0x08,         //    *   *   *    
    0xE4, 0x30,         //   *  ***    **  
    0x82, 0x20,         //  *     *     *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x02,         //    *     *      
    0x78, 0x3E,         //    ****  *****  
    0x14, 0x05,         //   * *   * *     
    0xA2, 0x08,         //  *   * *   *    
    0xC0, 0x00,         //       **        
    0x20, 0x01,         //      *  *       
    0x18, 0x06,         //    **    **     
    0x06, 0x38,         //  **        ***  
    0xF0, 0x03,         //     ******      
    0x40, 0x0C,         //       *   **    
    0x88, 0x04,         //    *   *  *     
    0x90, 0x02,         //     *  * *      
    0x10, 0x12,         //     *    *  *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x10,         //   *         *   
    0x84, 0x3F,         //   *    *******  
    0x84, 0x10,         //   *    *    *   
    0xB2, 0x10,         //  *  ** *    *   
    0x92, 0x10,         //  *  *  *    *   
    0x8F, 0x1F,         // ****   ******   
    0x88, 0x10,         //    *   *    *   
    0x84, 0x10,         //   *    *    *   
    0x9F, 0x10,         // *****  *    *   
    0x82, 0x1F,         //  *     ******   
    0x80, 0x10,         //        *    *   
    0x98, 0x10,         //    **  *    *   
    0x87, 0x10,         // ***    *    *   
    0xE2, 0x3F,         //  *   *********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x04, 0x05,         //   *     * *     
    0xB2, 0x08,         //  *  ** *   *    
    0x52, 0x30,         //  *  * *     **  
    0x2F, 0x20,         // **** *       *  
    0x88, 0x0F,         //    *   *****    
    0x04, 0x00,         //   *             
    0xDF, 0x3F,         // ***** ********  
    0x02, 0x01,         //  *      *       
    0x80, 0x08,         //        *   *    
    0x58, 0x10,         //    ** *     *   
    0xE7, 0x2F,         // ***  ******* *  
    0x42, 0x20,         //  *    *      *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x24, 0x04,         //   *  *    *     
    0xA4, 0x24,         //   *  * *  *  *  
    0x24, 0x25,         //   *  *  * *  *  
    0x32, 0x15,         //  *  **  * * *   
    0x32, 0x04,         //  *  **    *     
    0xAF, 0x3F,         // **** * *******  
    0x28, 0x04,         //    * *    *     
    0x24, 0x0E,         //   *  *   ***    
    0x3F, 0x15,         // ******  * * *   
    0x22, 0x15,         //  *   *  * * *   
    0xA0, 0x24,         //      * *  *  *  
    0xB8, 0x24,         //    *** *  *  *  
    0x27, 0x00,         // ***  *          
    0xE2, 0x3F,         //  *   *********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0xC4, 0x1F,         //   *   *******   
    0x32, 0x02,         //  *  **   *      
    0xD2, 0x3F,         //  *  * ********  
    0x8F, 0x20,         // ****   *     *  
    0x08, 0x15,         //    *    * * *   
    0x44, 0x04,         //   *   *   *     
    0x9F, 0x04,         // *****  *  *     
    0xC2, 0x3F,         //  *    ********  
    0x00, 0x02,         //          *      
    0x18, 0x05,         //    **   * *     
    0xC7, 0x38,         // ***   **   ***  
    0x32, 0x10,         //  *  **      *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x01,         //   *     *       
    0x04, 0x12,         //   *      *  *   
    0xE4, 0x3F,         //   *  *********  
    0x32, 0x10,         //  *  **      *   
    0x32, 0x10,         //  *  **      *   
    0xEF, 0x1F,         // **** ********   
    0x28, 0x00,         //    * *          
    0xA4, 0x3F,         //   *  * *******  
    0xBF, 0x2A,         // ****** * * * *  
    0xA2, 0x2A,         //  *   * * * * *  
    0xA0, 0x3F,         //      * *******  
    0xB8, 0x2A,         //    *** * * * *  
    0x97, 0x2A,         // *** *  * * * *  
    0x8A, 0x30,         //  * *   *    **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFC, 0x1F,         //   ***********   
    0x24, 0x12,         //   *  *   *  *   
    0x24, 0x12,         //   *  *   *  *   
    0xFC, 0x1F,         //   ***********   
    0x80, 0x00,         //        *        
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x01,         //    *    *       
    0x28, 0x11,         //    * *  *   *   
    0x44, 0x0D,         //   *   * * **    
    0xBF, 0x03,         // ****** ***      
    0x02, 0x21,         //  *      *    *  
    0x7E, 0x21,         //  ****** *    *  
    0x42, 0x3E,         //  *    *  *****  
    0x7E, 0x01,         //  ****** *       
    0x42, 0x11,         //  *    * *   *   
    0x42, 0x09,         //  *    * *  *    
    0x7E, 0x07,         //  ****** ***     
    0x42, 0x21,         //  *    * *    *  
    0x42, 0x21,         //  *    * *    *  
    0x72, 0x3E,         //  *  ***  *****  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x01,         //        **       
    0x80, 0x00,         //        *        
    0x48, 0x08,         //    *  *    *    
    0xF8, 0x1F,         //    **********   
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x08, 0x08,         //    *       *    
    0xF8, 0x0F,         //    *********    
    0x08, 0x08,         //    *       *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x02,         //      *   *      
    0x20, 0x12,         //      *   *  *   
    0xFE, 0x3F,         //  *************  
    0x20, 0x02,         //      *   *      
    0x88, 0x08,         //    *   *   *    
    0x90, 0x1F,         //     *  ******   
    0xA2, 0x08,         //  *   * *   *    
    0x94, 0x08,         //   * *  *   *    
    0x90, 0x08,         //     *  *   *    
    0x90, 0x08,         //     *  *   *    
    0x8C, 0x06,         //   **   * **     
    0x88, 0x20,         //    *   *     *  
    0x88, 0x20,         //    *   *     *  
    0x08, 0x3F,         //    *    ******  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x00,         //        *        
    0x80, 0x08,         //        *   *    
    0xFC, 0x1F,         //   ***********   
    0x80, 0x00,         //        *        
    0xF8, 0x0F,         //    *********    
    0x80, 0x00,         //        *        
    0xFE, 0x3F,         //  *************  
    0x40, 0x01,         //       * *       
    0x20, 0x19,         //      *  *  **   
    0x30, 0x05,         //     **  * *     
    0x28, 0x02,         //    * *   *      
    0xA4, 0x05,         //   *  * ** *     
    0x73, 0x38,         // **  ***    ***  
    0x20, 0x10,         //      *      *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x14, 0x04,         //   * *     *     
    0x3C, 0x04,         //   ****    *     
    0x12, 0x04,         //  *  *     *     
    0x49, 0x3F,         // *  *  * ******  
    0xFE, 0x25,         //  ******** *  *  
    0x4A, 0x25,         //  * *  * * *  *  
    0x4A, 0x25,         //  * *  * * *  *  
    0x7E, 0x25,         //  ****** * *  *  
    0x4A, 0x3F,         //  * *  * ******  
    0x7E, 0x25,         //  ****** * *  *  
    0x4A, 0x04,         //  * *  *   *     
    0x4A, 0x14,         //  * *  *   * *   
    0x49, 0x34,         // *  *  *   * **  
    0x69, 0x2F,         // *  * ** **** *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x82, 0x08,         //  *     *   *    
    0x8C, 0x1F,         //   **   ******   
    0x88, 0x08,         //    *   *   *    
    0x80, 0x08,         //        *   *    
    0x88, 0x08,         //    *   *   *    
    0x5F, 0x38,         // ***** *    ***  
    0x08, 0x00,         //    *            
    0xC8, 0x1F,         //    *  *******   
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0x28, 0x05,         //    * *  * *     
    0x18, 0x02,         //    **    *      
    0x8C, 0x0D,         //   **   ** **    
    0x60, 0x30,         //      **     **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x04,         //  *        *     
    0x0C, 0x0C,         //   **      **    
    0x08, 0x14,         //    *      * *   
    0xE0, 0x3F,         //      *********  
    0x08, 0x04,         //    *      *     
    0x1F, 0x04,         // *****     *     
    0xE8, 0x07,         //    * ******     
    0x88, 0x04,         //    *   *  *     
    0x88, 0x04,         //    *   *  *     
    0x88, 0x04,         //    *   *  *     
    0xA8, 0x24,         //    * * *  *  *  
    0x98, 0x2B,         //    **  *** * *  
    0xEC, 0x30,         //   ** ***    **  
    0x00, 0x20,         //              *  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x10,         //  *          *   
    0xEC, 0x3F,         //   ** *********  
    0x08, 0x01,         //    *    *       
    0x00, 0x09,         //         *  *    
    0xC8, 0x1F,         //    *  *******   
    0x1F, 0x09,         // *****   *  *    
    0x08, 0x09,         //    *    *  *    
    0xE8, 0x3F,         //    * *********  
    0x08, 0x00,         //    *            
    0x88, 0x1F,         //    *   ******   
    0xA8, 0x10,         //    * * *    *   
    0x98, 0x10,         //    **  *    *   
    0x8C, 0x1F,         //   **   ******   
    0x80, 0x10,         //        *    *   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x12,         //  *       *  *   
    0xEC, 0x3F,         //   ** *********  
    0x08, 0x02,         //    *     *      
    0xC0, 0x1F,         //       *******   
    0x08, 0x02,         //    *     *      
    0xFF, 0x3F,         // **************  
    0x08, 0x00,         //    *            
    0xC8, 0x1F,         //    *  *******   
    0x48, 0x10,         //    *  *     *   
    0xC8, 0x1F,         //    *  *******   
    0x68, 0x10,         //    * **     *   
    0xD8, 0x1F,         //    ** *******   
    0x4C, 0x10,         //   **  *     *   
    0x40, 0x1C,         //       *   ***   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0x40, 0x10,         //       *     *   
    0xFC, 0x3F,         //   ************  
    0x20, 0x00,         //      *          
    0x90, 0x00,         //     *  *        
    0x90, 0x00,         //     *  *        
    0x88, 0x04,         //    *   *  *     
    0xFC, 0x0F,         //   **********    
    0x80, 0x00,         //        *        
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x84, 0x08,         //   *    *   *    
    0x84, 0x1F,         //   *    ******   
    0x84, 0x08,         //   *    *   *    
    0xBF, 0x0F,         // ****** *****    
    0x02, 0x00,         //  *              
    0xCA, 0x3F,         //  * *  ********  
    0x89, 0x08,         // *  *   *   *    
    0xBF, 0x0F,         // ****** *****    
    0x88, 0x08,         //    *   *   *    
    0xB8, 0x0F,         //    *** *****    
    0x8F, 0x08,         // ****   *   *    
    0x88, 0x3E,         //    *   * *****  
    0xC8, 0x09,         //    *  ***  *    
    0x08, 0x08,         //    *       *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x01, 0x01,         // *       *       
    0x06, 0x01,         //  **     *       
    0x04, 0x11,         //   *     *   *   
    0xE0, 0x3F,         //      *********  
    0x00, 0x11,         //         *   *   
    0x04, 0x11,         //   *     *   *   
    0x0F, 0x11,         // ****    *   *   
    0x04, 0x11,         //   *     *   *   
    0x84, 0x10,         //   *    *    *   
    0x84, 0x10,         //   *    *    *   
    0x44, 0x1E,         //   *   *  ****   
    0x24, 0x08,         //   *  *     *    
    0x0B, 0x00,         // ** *            
    0xF1, 0x3F,         // *   **********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x81, 0x04,         // *      *  *     
    0x86, 0x04,         //  **    *  *     
    0x84, 0x04,         //   *    *  *     
    0xE0, 0x3F,         //      *********  
    0x80, 0x04,         //        *  *     
    0x84, 0x04,         //   *    *  *     
    0xEF, 0x3F,         // **** *********  
    0x84, 0x04,         //   *    *  *     
    0x84, 0x04,         //   *    *  *     
    0x84, 0x04,         //   *    *  *     
    0x44, 0x04,         //   *   *   *     
    0x24, 0x04,         //   *  *    *     
    0x0B, 0x00,         // ** *            
    0xF1, 0x1F,         // *   *********   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x41, 0x08,         // *     *    *    
    0xC6, 0x1F,         //  **   *******   
    0x44, 0x08,         //   *   *    *    
    0xC0, 0x0F,         //       ******    
    0x40, 0x08,         //       *    *    
    0xC4, 0x0F,         //   *   ******    
    0x4F, 0x0A,         // ****  *  * *    
    0x44, 0x12,         //   *   *  *  *   
    0x44, 0x0A,         //   *   *  * *    
    0x44, 0x04,         //   *   *   *     
    0x44, 0x09,         //   *   * *  *    
    0xE4, 0x30,         //   *  ***    **  
    0x0B, 0x00,         // ** *            
    0xF1, 0x3F,         // *   **********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x41, 0x02,         // *     *  *      
    0x46, 0x02,         //  **   *  *      
    0x44, 0x02,         //   *   *  *      
    0xE0, 0x1F,         //      ********   
    0x10, 0x02,         //     *    *      
    0x04, 0x12,         //   *      *  *   
    0xEF, 0x3F,         // **** *********  
    0x84, 0x04,         //   *    *  *     
    0x84, 0x04,         //   *    *  *     
    0x84, 0x24,         //   *    *  *  *  
    0x44, 0x24,         //   *   *   *  *  
    0x24, 0x38,         //   *  *     ***  
    0x0B, 0x00,         // ** *            
    0xF1, 0x3F,         // *   **********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC2, 0x1F,         //  *    *******   
    0x0C, 0x08,         //   **       *    
    0x88, 0x05,         //    *   ** *     
    0x00, 0x02,         //          *      
    0xC0, 0x1F,         //       *******   
    0x48, 0x12,         //    *  *  *  *   
    0xDF, 0x1F,         // ***** *******   
    0x48, 0x12,         //    *  *  *  *   
    0xC8, 0x1F,         //    *  *******   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x48, 0x1A,         //    *  *  * **   
    0x16, 0x20,         //  ** *        *  
    0xE1, 0x1F,         // *    ********   
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x01, 0x01,         // *       *       
    0x06, 0x11,         //  **     *   *   
    0xF4, 0x3F,         //   * **********  
    0x00, 0x01,         //         *       
    0xE0, 0x0F,         //      *******    
    0x24, 0x09,         //   *  *  *  *    
    0x2F, 0x09,         // **** *  *  *    
    0xE4, 0x0F,         //   *  *******    
    0x24, 0x09,         //   *  *  *  *    
    0x84, 0x05,         //   *    ** *     
    0x44, 0x19,         //   *   * *  **   
    0x24, 0x11,         //   *  *  *   *   
    0x0B, 0x01,         // ** *    *       
    0xF1, 0x3F,         // *   **********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x18, 0x3E,         //    **    *****  
    0x10, 0x22,         //     *    *   *  
    0xFE, 0x22,         //  ******* *   *  
    0x44, 0x12,         //   *   *  *  *   
    0x48, 0x12,         //    *  *  *  *   
    0x28, 0x0A,         //    * *   * *    
    0xFF, 0x13,         // **********  *   
    0x00, 0x12,         //          *  *   
    0x7C, 0x22,         //   *****  *   *  
    0x44, 0x22,         //   *   *  *   *  
    0x44, 0x26,         //   *   *  **  *  
    0x44, 0x3A,         //   *   *  * ***  
    0x7C, 0x12,         //   *****  *  *   
    0x44, 0x02,         //   *   *  *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x10,         //  *          *   
    0xC2, 0x3F,         //  *    ********  
    0x3E, 0x12,         //  *****   *  *   
    0x02, 0x12,         //  *       *  *   
    0x01, 0x12,         // *        *  *   
    0x1F, 0x12,         // *****    *  *   
    0x04, 0x12,         //   *      *  *   
    0xC4, 0x1F,         //   *   *******   
    0x3F, 0x11,         // ******  *   *   
    0x04, 0x11,         //   *     *   *   
    0x24, 0x11,         //   *  *  *   *   
    0x14, 0x11,         //   * *   *   *   
    0x0E, 0x11,         //  ***    *   *   
    0xE4, 0x3F,         //   *  *********  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x10,         //   *         *   
    0xD8, 0x3F,         //    ** ********  
    0x10, 0x10,         //     *       *   
    0x02, 0x10,         //  *          *   
    0xF2, 0x13,         //  *  ******  *   
    0x12, 0x12,         //  *  *    *  *   
    0x12, 0x12,         //  *  *    *  *   
    0xF2, 0x13,         //  *  ******  *   
    0x12, 0x12,         //  *  *    *  *   
    0xF2, 0x13,         //  *  ******  *   
    0x12, 0x12,         //  *  *    *  *   
    0x02, 0x10,         //  *          *   
    0x02, 0x1E,         //  *       ****   
    0x02, 0x08,         //  *         *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x09,         //   *     *  *    
    0x3F, 0x1F,         // ******  *****   
    0x84, 0x08,         //   *    *   *    
    0x7F, 0x04,         // *******   *     
    0x84, 0x1F,         //   *    ******   
    0x7F, 0x12,         // *******  *  *   
    0x00, 0x12,         //          *  *   
    0xFF, 0x3F,         // **************  
    0x21, 0x12,         // *    *   *  *   
    0xBF, 0x1F,         // ****** ******   
    0x21, 0x12,         // *    *   *  *   
    0x3F, 0x02,         // ******   *      
    0xA1, 0x03,         // *    * ***      
    0x39, 0x02,         // *  ***   *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x10,         //             *   
    0xFE, 0x3F,         //  *************  
    0x80, 0x00,         //        *        
    0x48, 0x08,         //    *  *    *    
    0xF8, 0x1F,         //    **********   
    0x08, 0x08,         //    *       *    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0x48, 0x08,         //    *  *    *    
    0x40, 0x03,         //       * **      
    0x20, 0x0C,         //      *    **    
    0x1E, 0x30,         //  ****       **  
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x10,         //        *    *   
    0xFE, 0x3F,         //  *************  
    0x00, 0x00,         //                 
    0xF0, 0x07,         //     *******     
    0x10, 0x04,         //     *     *     
    0xF0, 0x07,         //     *******     
    0x00, 0x00,         //                 
    0xFC, 0x1F,         //   ***********   
    0x04, 0x10,         //   *         *   
    0xE4, 0x13,         //   *  *****  *   
    0x24, 0x12,         //   *  *   *  *   
    0xE4, 0x13,         //   *  *****  *   
    0x04, 0x1C,         //   *       ***   
    0x04, 0x08,         //   *        *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xE0, 0x01,         //      ****       
    0x10, 0x02,         //     *    *      
    0x08, 0x04,         //    *      *     
    0x08, 0x04,         //    *      *     
    0x08, 0x04,         //    *      *     
    0x00, 0x02,         //          *      
    0x00, 0x01,         //         *       
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x80, 0x00,         //        *        
    0x00, 0x00,         //                 
    0xC0, 0x00,         //       **        
    0xC0, 0x00,         //       **        
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

};

/*********************************
 * Font Structure
 * Label: GOLSmallFont
 * Description:  Heigth: 15 pixels, range: ' ' to '?'
 ***********************************/

extern const char __GOLSmallFont[] __attribute__((aligned(2)));

const FONT_FLASH GOLSmallFont =
{
    (FLASH | COMP_NONE),
    __GOLSmallFont
};

const char __GOLSmallFont[] __attribute__((aligned(2))) =
{
/****************************************
 * Font header
 ****************************************/
    0x00,           // Information
    0x00,           // ID
    0x20, 0x00,     // First Character
    0xBB, 0x00,     // Last Character
    0x0F,           // Height
    0x00,           // Reserved
/****************************************
 * Font Glyph Table
 ****************************************/
    0x03, 0x78, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x87, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x06, 0x96, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA5, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xB4, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xC3, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xD2, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xE1, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x06, 0xF0, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x06, 0xFF, 0x02, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x0E, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x1D, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x2C, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x3B, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x4A, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x59, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x68, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x77, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x86, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x95, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA4, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xB3, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xC2, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xD1, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xE0, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xEF, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0xFE, 0x03, 0x00,           // width, MSB Offset, LSB offset
    0x03, 0x0D, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x1C, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x2B, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x3A, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x49, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x58, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x67, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x76, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x85, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x94, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA3, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xB2, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xC1, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xD0, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xDF, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xEE, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xFD, 0x04, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x0C, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x1B, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x2A, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x39, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x48, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x57, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x66, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x75, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x84, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x93, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA2, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xB1, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xC0, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xCF, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xDE, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xED, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xFC, 0x05, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0x0B, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x1A, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x29, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x38, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x47, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x56, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x65, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x74, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x83, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x92, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA1, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xB0, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xBF, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x05, 0xCE, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xDD, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x04, 0xEC, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xFB, 0x06, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x0A, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x19, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x28, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x37, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x46, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x55, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x64, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x73, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x82, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0x91, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xA0, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xAF, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x07, 0xBE, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xCD, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xEB, 0x07, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x09, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x27, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x45, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x63, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x81, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x9F, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xBD, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xDB, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xF9, 0x08, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x17, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x35, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x53, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x71, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x8F, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xAD, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xCB, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xE9, 0x09, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x07, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x25, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x43, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x61, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x7F, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x9D, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xBB, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xD9, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xF7, 0x0A, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x15, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x33, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x51, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x6F, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x8D, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xAB, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xC9, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xE7, 0x0B, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x05, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x23, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x41, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x5F, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x7D, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x9B, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xB9, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xD7, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xF5, 0x0C, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x13, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x31, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x4F, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x6D, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x8B, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xA9, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xC7, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xE5, 0x0D, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x03, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x21, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x3F, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x5D, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x7B, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x99, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xB7, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xD5, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0xF3, 0x0E, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x11, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x0D, 0x2F, 0x0F, 0x00,           // width, MSB Offset, LSB offset
    0x06, 0x4D, 0x0F, 0x00,           // width, MSB Offset, LSB offset
/***********************************
 * Font Characters
 ***********************************/
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x1B,         // ** **   
    0x12,         //  *  *   
    0x09,         // *  *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x3F,         // ******  
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x3F,         // ******  
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x04,         //   *     
    0x1E,         //  ****   
    0x25,         // * *  *  
    0x05,         // * *     
    0x05,         // * *     
    0x0E,         //  ***    
    0x14,         //   * *   
    0x24,         //   *  *  
    0x25,         // * *  *  
    0x25,         // * *  *  
    0x1E,         //  ****   
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x22,         //  *   *  
    0x25,         // * *  *  
    0x15,         // * * *   
    0x15,         // * * *   
    0x0D,         // * **    
    0x0A,         //  * *    
    0x14,         //   * *   
    0x2C,         //   ** *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x29,         // *  * *  
    0x11,         // *   *   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x0A,         //  * *    
    0x04,         //   *     
    0x06,         //  **     
    0x29,         // *  * *  
    0x11,         // *   *   
    0x11,         // *   *   
    0x2E,         //  *** *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x02,         //  *      
    0x04,         //   *     
    0x08,         //    *    
    0x08,         //    *    
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x2A,         //  * * *  
    0x1C,         //   ***   
    0x08,         //    *    
    0x1C,         //   ***   
    0x2A,         //  * * *  
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x3E,         //  *****  
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x20,         //      *  
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x02,         //  *      
    0x02,         //  *      
    0x01,         // *       
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x12,         //  *  *   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x12,         //  *  *   
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x0C,         //   **    
    0x0A,         //  * *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x3E,         //  *****  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x21,         // *    *  
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x10,         //     *   
    0x0C,         //   **    
    0x10,         //     *   
    0x20,         //      *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x10,         //     *   
    0x18,         //    **   
    0x14,         //   * *   
    0x14,         //   * *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x11,         // *   *   
    0x3F,         // ******  
    0x10,         //     *   
    0x38,         //    ***  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3E,         //  *****  
    0x02,         //  *      
    0x02,         //  *      
    0x1A,         //  * **   
    0x26,         //  **  *  
    0x20,         //      *  
    0x20,         //      *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x01,         // *       
    0x01,         // *       
    0x1D,         // * ***   
    0x23,         // **   *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x21,         // *    *  
    0x20,         //      *  
    0x10,         //     *   
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x12,         //  *  *   
    0x0C,         //   **    
    0x12,         //  *  *   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x11,         // *   *   
    0x21,         // *    *  
    0x21,         // *    *  
    0x31,         // *   **  
    0x2E,         //  *** *  
    0x20,         //      *  
    0x21,         // *    *  
    0x11,         // *   *   
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x03,         // **      
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x01,         // *       
    0x02,         //  *      
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x20,         //      *  
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x01,         // *       
    0x02,         //  *      
    0x04,         //   *     
    0x08,         //    *    
    0x10,         //     *   
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x01,         // *       
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x10,         //     *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x5A,         //  * ** * 
    0x55,         // * * * * 
    0x53,         // **  * * 
    0x53,         // **  * * 
    0x53,         // **  * * 
    0x53,         // **  * * 
    0x2B,         // ** * *  
    0x15,         // * * *   
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x0C,         //   **    
    0x0C,         //   **    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x3F,         // ******  
    0x21,         // *    *  
    0x21,         // *    *  
    0x33,         // **  **  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1F,         // *****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x2C,         //   ** *  
    0x32,         //  *  **  
    0x21,         // *    *  
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x21,         // *    *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x12,         //  *  *   
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x22,         //  *   *  
    0x02,         //  *      
    0x12,         //  *  *   
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x02,         //  *      
    0x02,         //  *      
    0x22,         //  *   *  
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x22,         //  *   *  
    0x02,         //  *      
    0x12,         //  *  *   
    0x1E,         //  ****   
    0x12,         //  *  *   
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x2C,         //   ** *  
    0x32,         //  *  **  
    0x21,         // *    *  
    0x01,         // *       
    0x01,         // *       
    0x31,         // *   **  
    0x21,         // *    *  
    0x21,         // *    *  
    0x32,         //  *  **  
    0x2C,         //   ** *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x3E,         //  *****  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3C,         //   ****  
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x10,         //     *   
    0x11,         // *   *   
    0x11,         // *   *   
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x37,         // *** **  
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x0A,         //  * *    
    0x0E,         //  ***    
    0x0A,         //  * *    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x07,         // ***     
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x36,         //  ** **  
    0x36,         //  ** **  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x22,         //  *   *  
    0x73,         // **  *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x31,         // *   **  
    0x23,         // **   *  
    0x23,         // **   *  
    0x25,         // * *  *  
    0x25,         // * *  *  
    0x29,         // *  * *  
    0x29,         // *  * *  
    0x31,         // *   **  
    0x31,         // *   **  
    0x23,         // **   *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x2F,         // **** *  
    0x31,         // *   **  
    0x1E,         //  ****   
    0x20,         //      *  
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1F,         // *****   
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1E,         //  ****   
    0x0A,         //  * *    
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x22,         //  *   *  
    0x27,         // ***  *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x01,         // *       
    0x06,         //  **     
    0x18,         //    **   
    0x20,         //      *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x7F,         // ******* 
    0x49,         // *  *  * 
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x41,         // *     * 
    0x49,         // *  *  * 
    0x49,         // *  *  * 
    0x55,         // * * * * 
    0x55,         // * * * * 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x14,         //   * *   
    0x14,         //   * *   
    0x22,         //  *   *  
    0x63,         // **   ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x63,         // **   ** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x21,         // *    *  
    0x20,         //      *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x02,         //  *      
    0x21,         // *    *  
    0x21,         // *    *  
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x07,         // ***     
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x02,         //  *      
    0x04,         //   *     
    0x04,         //   *     
    0x08,         //    *    
    0x08,         //    *    
    0x10,         //     *   
    0x10,         //     *   
    0x20,         //      *  
    0x20,         //      *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x07,         // ***     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x07,         // ***     
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x08,         //    *    
    0x14,         //   * *   
    0x22,         //  *   *  
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x08,         //    *    
    0x10,         //     *   
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0E,         //  ***    
    0x11,         // *   *   
    0x10,         //     *   
    0x1E,         //  ****   
    0x11,         // *   *   
    0x11,         // *   *   
    0x2E,         //  *** *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x0D,         // * **    
    0x13,         // **  *   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x13,         // **  *   
    0x0D,         // * **    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x01,         // *       
    0x01,         // *       
    0x01,         // *       
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x20,         //      *  
    0x2C,         //   ** *  
    0x32,         //  *  **  
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x32,         //  *  **  
    0x2C,         //   ** *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x3F,         // ******  
    0x01,         // *       
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x18,         //    **   
    0x24,         //   *  *  
    0x04,         //   *     
    0x04,         //   *     
    0x1F,         // *****   
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x0E,         //  ***    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x6C,         //   ** ** 
    0x12,         //  *  *   
    0x12,         //  *  *   
    0x0C,         //   **    
    0x02,         //  *      
    0x1E,         //  ****   
    0x21,         // *    *  
    0x21,         // *    *  
    0x1E,         //  ****   
    0x00,         //         

    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x1A,         //  * **   
    0x26,         //  **  *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x02,         //  *      
    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x0C,         //   **    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x08,         //    *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x06,         //  **     
    0x00,         //         

    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x32,         //  *  **  
    0x12,         //  *  *   
    0x0A,         //  * *    
    0x06,         //  **     
    0x0A,         //  * *    
    0x12,         //  *  *   
    0x37,         // *** **  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x03,         // **      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x15,         // * * *   
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x26,         //  **  *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0C,         //   **    
    0x12,         //  *  *   
    0x21,         // *    *  
    0x21,         // *    *  
    0x21,         // *    *  
    0x12,         //  *  *   
    0x0C,         //   **    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x26,         //  **  *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x26,         //  **  *  
    0x1A,         //  * **   
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x36,         //  ** **  
    0x19,         // *  **   
    0x11,         // *   *   
    0x11,         // *   *   
    0x11,         // *   *   
    0x19,         // *  **   
    0x16,         //  ** *   
    0x10,         //     *   
    0x38,         //    ***  
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1B,         // ** **   
    0x26,         //  **  *  
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x02,         //  *      
    0x07,         // ***     
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x1C,         //   ***   
    0x22,         //  *   *  
    0x02,         //  *      
    0x1C,         //   ***   
    0x20,         //      *  
    0x22,         //  *   *  
    0x1C,         //   ***   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x04,         //   *     
    0x04,         //   *     
    0x1F,         // *****   
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x04,         //   *     
    0x24,         //   *  *  
    0x18,         //    **   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x33,         // **  **  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x32,         //  *  **  
    0x6C,         //   ** ** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x6B,         // ** * ** 
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x2A,         //  * * *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x14,         //   * *   
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x77,         // *** *** 
    0x22,         //  *   *  
    0x14,         //   * *   
    0x08,         //    *    
    0x14,         //   * *   
    0x22,         //  *   *  
    0x77,         // *** *** 
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x33,         // **  **  
    0x22,         //  *   *  
    0x22,         //  *   *  
    0x14,         //   * *   
    0x14,         //   * *   
    0x08,         //    *    
    0x08,         //    *    
    0x04,         //   *     
    0x03,         // **      
    0x00,         //         

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x3F,         // ******  
    0x21,         // *    *  
    0x10,         //     *   
    0x08,         //    *    
    0x04,         //   *     
    0x22,         //  *   *  
    0x3F,         // ******  
    0x00,         //         
    0x00,         //         
    0x00,         //         

    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0xC6, 0x0C,         //  **   **  **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x02,         //      *   *      
    0x48, 0x02,         //    *  *  *      
    0x48, 0x02,         //    *  *  *      
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x10, 0x01,         //     *   *       
    0x90, 0x00,         //     *  *        
    0xA0, 0x00,         //      * *        
    0x40, 0x00,         //       *         
    0xA0, 0x00,         //      * *        
    0x18, 0x03,         //    **   **      
    0x07, 0x0C,         // ***       **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x48, 0x00,         //    *  *         
    0x88, 0x04,         //    *   *  *     
    0xA4, 0x04,         //   *  * *  *     
    0x24, 0x04,         //   *  *    *     
    0x26, 0x02,         //  **  *   *      
    0x25, 0x02,         // * *  *   *      
    0x44, 0x01,         //   *   * *       
    0x44, 0x01,         //   *   * *       
    0x84, 0x00,         //   *    *        
    0x44, 0x01,         //   *   * *       
    0x24, 0x02,         //   *  *   *      
    0x14, 0x0C,         //   * *     **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x88, 0x00,         //    *   *        
    0x08, 0x01,         //    *    *       
    0x04, 0x00,         //   *             
    0xF4, 0x0F,         //   * ********    
    0x06, 0x00,         //  **             
    0x25, 0x02,         // * *  *   *      
    0x24, 0x02,         //   *  *   *      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x01,         //   *   * *       
    0x04, 0x01,         //   *     *       
    0x84, 0x00,         //   *    *        
    0xF4, 0x0F,         //   * ********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x01,         //    *    *       
    0xF8, 0x0F,         //    *********    
    0x08, 0x01,         //    *    *       
    0xE4, 0x0F,         //   *  *******    
    0x24, 0x09,         //   *  *  *  *    
    0x26, 0x09,         //  **  *  *  *    
    0xE5, 0x0F,         // * *  *******    
    0x24, 0x01,         //   *  *  *       
    0x44, 0x01,         //   *   * *       
    0x84, 0x00,         //   *    *        
    0x44, 0x01,         //   *   * *       
    0x3C, 0x0E,         //   ****   ***    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x03,         //    *    **      
    0x10, 0x01,         //     *   *       
    0xA0, 0x00,         //      * *        
    0xFE, 0x07,         //  **********     
    0x40, 0x00,         //       *         
    0x40, 0x04,         //       *   *     
    0xFF, 0x0F,         // ************    
    0x40, 0x00,         //       *         
    0xA0, 0x00,         //      * *        
    0x10, 0x01,         //     *   *       
    0x0C, 0x0E,         //   **     ***    
    0x03, 0x04,         // **        *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x08,         //      *     *    
    0x7F, 0x08,         // *******    *    
    0x08, 0x09,         //    *    *  *    
    0x08, 0x09,         //    *    *  *    
    0x78, 0x09,         //    **** *  *    
    0x44, 0x09,         //   *   * *  *    
    0x4A, 0x09,         //  * *  * *  *    
    0x29, 0x09,         // *  * *  *  *    
    0x20, 0x09,         //      *  *  *    
    0x10, 0x08,         //     *      *    
    0x0C, 0x0E,         //   **     ***    
    0x03, 0x04,         // **        *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x08,         //    *       *    
    0x0A, 0x08,         //  * *       *    
    0x7E, 0x09,         //  ****** *  *    
    0x09, 0x09,         // *  *    *  *    
    0x7F, 0x09,         // ******* *  *    
    0x08, 0x09,         //    *    *  *    
    0x7E, 0x09,         //  ****** *  *    
    0x4A, 0x09,         //  * *  * *  *    
    0x4A, 0x09,         //  * *  * *  *    
    0x4A, 0x08,         //  * *  *    *    
    0x6A, 0x08,         //  * * **    *    
    0x08, 0x0E,         //    *     ***    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x01,         //         *       
    0x1F, 0x01,         // *****   *       
    0x00, 0x01,         //         *       
    0xC0, 0x0F,         //       ******    
    0x1F, 0x09,         // *****   *  *    
    0x04, 0x09,         //   *     *  *    
    0x04, 0x09,         //   *     *  *    
    0x02, 0x09,         //  *      *  *    
    0x92, 0x08,         //  *  *  *   *    
    0xAF, 0x08,         // **** * *   *    
    0x42, 0x08,         //  *    *    *    
    0x20, 0x06,         //      *   **     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x01,         //    *    *       
    0x90, 0x00,         //     *  *        
    0xFC, 0x07,         //   *********     
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x07,         //   *********     
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x07,         //   *********     
    0x40, 0x00,         //       *         
    0xFE, 0x0F,         //  ***********    
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x60, 0x00,         //      **         
    0x90, 0x00,         //     *  *        
    0x0C, 0x03,         //   **    **      
    0x03, 0x0C,         // **        **    
    0xF8, 0x01,         //    ******       
    0x00, 0x00,         //                 
    0x04, 0x02,         //   *      *      
    0xFC, 0x07,         //   *********     
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0xFC, 0x03,         //   ********      
    0x04, 0x02,         //   *      *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0x10, 0x01,         //     *   *       
    0xF0, 0x03,         //     ******      
    0x08, 0x01,         //    *    *       
    0x94, 0x00,         //   * *  *        
    0x53, 0x00,         // **  * *         
    0x20, 0x00,         //      *          
    0xF8, 0x07,         //    ********     
    0x0C, 0x04,         //   **      *     
    0x0B, 0x04,         // ** *      *     
    0xF8, 0x07,         //    ********     
    0x08, 0x04,         //    *      *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x30, 0x00,         //     **          
    0x8F, 0x0F,         // ****   *****    
    0x88, 0x08,         //    *   *   *    
    0x88, 0x08,         //    *   *   *    
    0xFF, 0x08,         // ********   *    
    0x88, 0x08,         //    *   *   *    
    0x98, 0x08,         //    **  *   *    
    0xAC, 0x08,         //   ** * *   *    
    0xCA, 0x08,         //  * *  **   *    
    0x89, 0x0F,         // *  *   *****    
    0x88, 0x08,         //    *   *   *    
    0x08, 0x00,         //    *            
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFE, 0x0F,         //  ***********    
    0x02, 0x08,         //  *         *    
    0x02, 0x08,         //  *         *    
    0xF2, 0x09,         //  *  *****  *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x09,         //  *  *   *  *    
    0xF2, 0x09,         //  *  *****  *    
    0x12, 0x09,         //  *  *   *  *    
    0x02, 0x08,         //  *         *    
    0xFE, 0x0F,         //  ***********    
    0x02, 0x08,         //  *         *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFE, 0x07,         //  **********     
    0x22, 0x04,         //  *   *    *     
    0xE2, 0x05,         //  *   **** *     
    0x92, 0x04,         //  *  *  *  *     
    0xAA, 0x04,         //  * * * *  *     
    0x42, 0x04,         //  *    *   *     
    0xB2, 0x04,         //  *  ** *  *     
    0x4E, 0x07,         //  ***  * ***     
    0x22, 0x04,         //  *   *    *     
    0x42, 0x04,         //  *    *   *     
    0x02, 0x04,         //  *        *     
    0xFE, 0x07,         //  **********     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x08, 0x04,         //    *      *     
    0xFC, 0x0F,         //   **********    
    0x0A, 0x02,         //  * *     *      
    0xF9, 0x03,         // *  *******      
    0x08, 0x02,         //    *     *      
    0xF8, 0x03,         //    *******      
    0x10, 0x00,         //     *           
    0xF0, 0x07,         //     *******     
    0x18, 0x02,         //    **    *      
    0x26, 0x01,         //  **  *  *       
    0xC0, 0x00,         //       **        
    0x3F, 0x0F,         // ******  ****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x02,         //       *  *      
    0xE0, 0x07,         //      ******     
    0x10, 0x02,         //     *    *      
    0x6E, 0x01,         //  *** ** *       
    0xC0, 0x00,         //       **        
    0xB0, 0x04,         //     ** *  *     
    0xCF, 0x0F,         // ****  ******    
    0x20, 0x04,         //      *    *     
    0x5C, 0x04,         //   *** *   *     
    0x80, 0x02,         //        * *      
    0x80, 0x01,         //        **       
    0x7F, 0x00,         // *******         
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0x40, 0x00,         //       *         
    0xFF, 0x0F,         // ************    
    0x01, 0x08,         // *          *    
    0xFD, 0x0B,         // * ******** *    
    0x40, 0x00,         //       *         
    0x48, 0x00,         //    *  *         
    0xC8, 0x03,         //    *  ****      
    0x48, 0x00,         //    *  *         
    0x54, 0x00,         //   * * *         
    0x62, 0x00,         //  *   **         
    0xC1, 0x0F,         // *     ******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0x00, 0x02,         //          *      
    0x1F, 0x02,         // *****    *      
    0xF0, 0x0F,         //     ********    
    0x12, 0x02,         //  *  *    *      
    0x0C, 0x02,         //   **     *      
    0x48, 0x02,         //    *  *  *      
    0x8C, 0x02,         //   **   * *      
    0x94, 0x02,         //   * *  * *      
    0x12, 0x02,         //  *  *    *      
    0x81, 0x03,         // *      ***      
    0x00, 0x01,         //         *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x22, 0x04,         //  *   *    *     
    0x24, 0x02,         //   *  *   *      
    0xFF, 0x0F,         // ************    
    0x01, 0x08,         // *          *    
    0xFD, 0x0B,         // * ******** *    
    0x04, 0x02,         //   *      *      
    0xFC, 0x03,         //   ********      
    0x20, 0x00,         //      *          
    0xFF, 0x0F,         // ************    
    0x21, 0x08,         // *    *     *    
    0x21, 0x0E,         // *    *   ***    
    0x20, 0x00,         //      *          
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0xFE, 0x0F,         //  ***********    
    0x12, 0x02,         //  *  *    *      
    0xFE, 0x0F,         //  ***********    
    0x12, 0x02,         //  *  *    *      
    0xF2, 0x03,         //  *  ******      
    0x02, 0x00,         //  *              
    0xFA, 0x07,         //  * ********     
    0x12, 0x02,         //  *  *    *      
    0x22, 0x01,         //  *   *  *       
    0xC1, 0x00,         // *     **        
    0x3D, 0x0F,         // * ****  ****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0xFC, 0x07,         //   *********     
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0xFE, 0x0F,         //  ***********    
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x04, 0x01,         //   *     *       
    0x02, 0x01,         //  *      *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x80, 0x02,         //        * *      
    0x80, 0x04,         //        *  *     
    0x80, 0x00,         //        *        
    0xFF, 0x0F,         // ************    
    0x80, 0x00,         //        *        
    0xBE, 0x00,         //  ***** *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x08, 0x09,         //    *    *  *    
    0x78, 0x09,         //    **** *  *    
    0x07, 0x0A,         // ***      * *    
    0x02, 0x0C,         //  *        **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x00,         //   *             
    0xC4, 0x0F,         //   *   ******    
    0x04, 0x08,         //   *        *    
    0x1F, 0x08,         // *****      *    
    0x04, 0x08,         //   *        *    
    0x14, 0x08,         //   * *      *    
    0xCC, 0x0F,         //   **  ******    
    0x07, 0x08,         // ***        *    
    0x04, 0x08,         //   *        *    
    0x04, 0x08,         //   *        *    
    0xE7, 0x0F,         // ***  *******    
    0x02, 0x08,         //  *         *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xE4, 0x0F,         //   *  *******    
    0x44, 0x04,         //   *   *   *     
    0x9F, 0x02,         // *****  * *      
    0x04, 0x01,         //   *     *       
    0xD4, 0x0E,         //   * * ** ***    
    0x3C, 0x01,         //   ****  *       
    0xE7, 0x0F,         // ***  *******    
    0x04, 0x01,         //   *     *       
    0xF4, 0x0F,         //   * ********    
    0x04, 0x01,         //   *     *       
    0x07, 0x01,         // ***     *       
    0x02, 0x01,         //  *      *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x84, 0x00,         //   *    *        
    0x04, 0x01,         //   *     *       
    0xFF, 0x0F,         // ************    
    0x24, 0x08,         //   *  *     *    
    0xA4, 0x08,         //   *  * *   *    
    0x8C, 0x00,         //   **   *        
    0xF7, 0x0F,         // *** ********    
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x84, 0x01,         //   *    **       
    0x87, 0x02,         // ***    * *      
    0x72, 0x04,         //  *  ***   *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x01,         //   *     *       
    0xE4, 0x0F,         //   *  *******    
    0x3F, 0x08,         // ******     *    
    0xA4, 0x0A,         //   *  * * * *    
    0x54, 0x04,         //   * * *   *     
    0x2C, 0x08,         //   ** *     *    
    0x07, 0x00,         // ***             
    0xE4, 0x07,         //   *  ******     
    0x04, 0x01,         //   *     *       
    0x04, 0x01,         //   *     *       
    0x07, 0x01,         // ***     *       
    0xF2, 0x0F,         //  *  ********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0xFF, 0x0F,         // ************    
    0x44, 0x02,         //   *   *  *      
    0x14, 0x00,         //   * *           
    0xEC, 0x0F,         //   ** *******    
    0x27, 0x09,         // ***  *  *  *    
    0xE4, 0x0F,         //   *  *******    
    0x24, 0x09,         //   *  *  *  *    
    0x24, 0x09,         //   *  *  *  *    
    0xE7, 0x0F,         // ***  *******    
    0x22, 0x08,         //  *   *     *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x49, 0x01,         // *  *  * *       
    0x2A, 0x01,         //  * * *  *       
    0x7F, 0x01,         // ******* *       
    0x08, 0x0F,         //    *    ****    
    0x9C, 0x04,         //   ***  *  *     
    0xEA, 0x04,         //  * * ***  *     
    0x89, 0x04,         // *  *   *  *     
    0x7F, 0x05,         // ******* * *     
    0x24, 0x02,         //   *  *   *      
    0x18, 0x05,         //    **   * *     
    0xAC, 0x08,         //   ** * *   *    
    0x43, 0x08,         // **    *    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x02,         //   *      *      
    0xFC, 0x07,         //   *********     
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0xFC, 0x03,         //   ********      
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0x04, 0x02,         //   *      *      
    0xFC, 0x03,         //   ********      
    0x04, 0x02,         //   *      *      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0x0F, 0x02,         // ****     *      
    0x09, 0x02,         // *  *     *      
    0xE9, 0x0F,         // *  * *******    
    0x09, 0x02,         // *  *     *      
    0x0F, 0x02,         // ****     *      
    0x49, 0x02,         // *  *  *  *      
    0x89, 0x02,         // *  *   * *      
    0x8F, 0x02,         // ****   * *      
    0x09, 0x02,         // *  *     *      
    0x00, 0x02,         //          *      
    0x00, 0x03,         //         **      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFF, 0x0F,         // ************    
    0x40, 0x00,         //       *         
    0xFC, 0x07,         //   *********     
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x07,         //   *********     
    0x44, 0x04,         //   *   *   *     
    0xFC, 0x07,         //   *********     
    0x44, 0x04,         //   *   *   *     
    0x50, 0x00,         //     * *         
    0x20, 0x00,         //      *          
    0xD8, 0x00,         //    ** **        
    0x07, 0x0F,         // ***     ****    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x92, 0x0F,         //  *  *  *****    
    0x92, 0x08,         //  *  *  *   *    
    0xFF, 0x08,         // ********   *    
    0x92, 0x0F,         //  *  *  *****    
    0x9E, 0x08,         //  ****  *   *    
    0x92, 0x08,         //  *  *  *   *    
    0x9E, 0x0F,         //  ****  *****    
    0x92, 0x08,         //  *  *  *   *    
    0xFF, 0x08,         // ********   *    
    0x94, 0x08,         //   * *  *   *    
    0x62, 0x0E,         //  *   **  ***    
    0x21, 0x04,         // *    *    *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0xF0, 0x03,         //     ******      
    0x18, 0x01,         //    **   *       
    0xA4, 0x00,         //   *  * *        
    0xC2, 0x00,         //  *    **        
    0x3C, 0x0F,         //   ****  ****    
    0x40, 0x00,         //       *         
    0xFE, 0x0F,         //  ***********    
    0x40, 0x00,         //       *         
    0x48, 0x02,         //    *  *  *      
    0x44, 0x04,         //   *   *   *     
    0x62, 0x08,         //  *   **    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x04,         //   *       *     
    0xE4, 0x0F,         //   *  *******    
    0x24, 0x00,         //   *  *          
    0xFF, 0x0F,         // ************    
    0x24, 0x01,         //   *  *  *       
    0x24, 0x01,         //   *  *  *       
    0xAC, 0x07,         //   ** * ****     
    0x36, 0x01,         //  ** **  *       
    0x25, 0x01,         // * *  *  *       
    0xE4, 0x0F,         //   *  *******    
    0x24, 0x00,         //   *  *          
    0xE4, 0x0F,         //   *  *******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x44, 0x02,         //   *   *  *      
    0xF4, 0x0F,         //   * ********    
    0x44, 0x02,         //   *   *  *      
    0xFF, 0x07,         // ***********     
    0x24, 0x04,         //   *  *    *     
    0xEC, 0x07,         //   ** ******     
    0x36, 0x04,         //  ** **    *     
    0xE5, 0x07,         // * *  ******     
    0x85, 0x00,         // * *    *        
    0xF4, 0x0F,         //   * ********    
    0x44, 0x02,         //   *   *  *      
    0x34, 0x0C,         //   * **    **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x02,         //          *      
    0xFE, 0x07,         //  **********     
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x40, 0x00,         //       *         
    0x48, 0x02,         //    *  *  *      
    0xC8, 0x07,         //    *  *****     
    0x48, 0x00,         //    *  *         
    0x48, 0x00,         //    *  *         
    0x48, 0x00,         //    *  *         
    0x48, 0x04,         //    *  *   *     
    0xFF, 0x0F,         // ************    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x82, 0x00,         //  *     *        
    0xF4, 0x0F,         //   * ********    
    0x40, 0x02,         //       *  *      
    0xA1, 0x04,         // *    * *  *     
    0x52, 0x0A,         //  *  * *  * *    
    0xE4, 0x07,         //   *  ******     
    0x84, 0x00,         //   *    *        
    0xC4, 0x08,         //   *   **   *    
    0x23, 0x05,         // **   *  * *     
    0x3A, 0x02,         //  * ***   *      
    0xA2, 0x04,         //  *   * *  *     
    0x62, 0x08,         //  *   **    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0x88, 0x00,         //    *   *        
    0xF8, 0x0F,         //    *********    
    0x08, 0x00,         //    *            
    0x08, 0x00,         //    *            
    0xF8, 0x01,         //    ******       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x04, 0x01,         //   *     *       
    0x03, 0x01,         // **      *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFC, 0x0F,         //   **********    
    0x44, 0x08,         //   *   *    *    
    0x44, 0x08,         //   *   *    *    
    0xFC, 0x0F,         //   **********    
    0x44, 0x08,         //   *   *    *    
    0x44, 0x08,         //   *   *    *    
    0xFC, 0x0F,         //   **********    
    0x44, 0x08,         //   *   *    *    
    0x44, 0x08,         //   *   *    *    
    0x42, 0x09,         //  *    * *  *    
    0x42, 0x0E,         //  *    *  ***    
    0x41, 0x04,         // *     *   *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0xFF, 0x01,         // *********       
    0x11, 0x01,         // *   *   *       
    0x11, 0x01,         // *   *   *       
    0xFF, 0x01,         // *********       
    0x11, 0x01,         // *   *   *       
    0x11, 0x01,         // *   *   *       
    0xFF, 0x01,         // *********       
    0x11, 0x05,         // *   *   * *     
    0x10, 0x04,         //     *     *     
    0x10, 0x0C,         //     *     **    
    0xE0, 0x07,         //      ******     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0xF0, 0x03,         //     ******      
    0x50, 0x02,         //     * *  *      
    0x90, 0x02,         //     *  * *      
    0xFE, 0x0F,         //  ***********    
    0x50, 0x02,         //     * *  *      
    0x88, 0x02,         //    *   * *      
    0x04, 0x01,         //   *     *       
    0xFC, 0x07,         //   *********     
    0xA4, 0x04,         //   *  * *  *     
    0xA4, 0x04,         //   *  * *  *     
    0xFE, 0x0F,         //  ***********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x84, 0x00,         //   *    *        
    0xBC, 0x0F,         //   **** *****    
    0x54, 0x02,         //   * * *  *      
    0x42, 0x04,         //  *    *   *     
    0xA0, 0x00,         //      * *        
    0x18, 0x03,         //    **   **      
    0xF6, 0x0D,         //  ** ***** **    
    0x20, 0x00,         //      *          
    0x48, 0x02,         //    *  *  *      
    0x48, 0x01,         //    *  * *       
    0x10, 0x01,         //     *   *       
    0xFC, 0x0F,         //   **********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC4, 0x07,         //   *   *****     
    0x44, 0x04,         //   *   *   *     
    0x42, 0x04,         //  *    *   *     
    0x51, 0x04,         // *   * *   *     
    0xCB, 0x07,         // ** *  *****     
    0x44, 0x04,         //   *   *   *     
    0x52, 0x04,         //  *  * *   *     
    0xCF, 0x07,         // ****  *****     
    0x40, 0x04,         //       *   *     
    0x58, 0x04,         //    ** *   *     
    0x47, 0x04,         // ***   *   *     
    0xE2, 0x0F,         //  *   *******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x01,         //   *     *       
    0x84, 0x02,         //   *    * *      
    0x42, 0x04,         //  *    *   *     
    0x31, 0x08,         // *   **     *    
    0xCB, 0x03,         // ** *  ****      
    0x04, 0x00,         //   *             
    0xFA, 0x0F,         //  * *********    
    0x87, 0x00,         // ***    *        
    0x80, 0x00,         //        *        
    0x58, 0x04,         //    ** *   *     
    0xF7, 0x0F,         // *** ********    
    0x22, 0x08,         //  *   *     *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x01,         //   *     *       
    0xE4, 0x0F,         //   *  *******    
    0x22, 0x08,         //  *   *     *    
    0xF1, 0x0F,         // *   ********    
    0x2B, 0x00,         // ** * *          
    0xE4, 0x0F,         //   *  *******    
    0xBA, 0x0A,         //  * *** * * *    
    0xA7, 0x0A,         // ***  * * * *    
    0xE0, 0x0F,         //      *******    
    0xB8, 0x0A,         //    *** * * *    
    0xA7, 0x0A,         // ***  * * * *    
    0x22, 0x0C,         //  *   *    **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xFE, 0x07,         //  **********     
    0x92, 0x04,         //  *  *  *  *     
    0x92, 0x04,         //  *  *  *  *     
    0xFE, 0x07,         //  **********     
    0x40, 0x00,         //       *         
    0xFF, 0x0F,         // ************    
    0x08, 0x02,         //    *     *      
    0xF8, 0x03,         //    *******      
    0x08, 0x02,         //    *     *      
    0xF8, 0x03,         //    *******      
    0x08, 0x02,         //    *     *      
    0xFF, 0x0F,         // ************    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x30, 0x00,         //     **          
    0x12, 0x02,         //  *  *    *      
    0xFE, 0x07,         //  **********     
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0xFE, 0x03,         //  *********      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0xFE, 0x03,         //  *********      
    0x02, 0x02,         //  *       *      
    0x02, 0x02,         //  *       *      
    0xFE, 0x03,         //  *********      
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x20, 0x00,         //      *          
    0xFF, 0x0F,         // ************    
    0x20, 0x00,         //      *          
    0xFE, 0x07,         //  **********     
    0x20, 0x00,         //      *          
    0xFF, 0x0F,         // ************    
    0x50, 0x00,         //     * *         
    0x48, 0x04,         //    *  *   *     
    0x8C, 0x02,         //   **   * *      
    0x4B, 0x01,         // ** *  * *       
    0x28, 0x0E,         //    * *   ***    
    0x1C, 0x04,         //   ***     *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x04, 0x01,         //   *     *       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x00, 0x01,         //         *       
    0xEF, 0x0F,         // **** *******    
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x08, 0x01,         //    *    *       
    0x48, 0x01,         //    *  * *       
    0x28, 0x01,         //    * *  *       
    0x1C, 0x01,         //   ***   *       
    0x08, 0x01,         //    *    *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC2, 0x03,         //  *    ****      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x40, 0x02,         //       *  *      
    0x27, 0x0E,         // ***  *   ***    
    0x14, 0x00,         //   * *           
    0xC4, 0x07,         //   *   *****     
    0x44, 0x04,         //   *   *   *     
    0x94, 0x02,         //   * *  * *      
    0x0C, 0x01,         //   **    *       
    0xC6, 0x02,         //  **   ** *      
    0x30, 0x0C,         //     **    **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x82, 0x00,         //  *     *        
    0xE4, 0x07,         //   *  ******     
    0x84, 0x00,         //   *    *        
    0xF0, 0x0F,         //     ********    
    0x47, 0x09,         // ***   * *  *    
    0x84, 0x01,         //   *    **       
    0x24, 0x01,         //   *  *  *       
    0x44, 0x01,         //   *   * *       
    0xF4, 0x0F,         //   * ********    
    0x0C, 0x01,         //   **    *       
    0x86, 0x02,         //  **    * *      
    0x60, 0x0C,         //      **   **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x00,         //     *           
    0xF0, 0x01,         //     *****       
    0x88, 0x00,         //    *   *        
    0x44, 0x00,         //   *   *         
    0xFE, 0x03,         //  *********      
    0x05, 0x02,         // * *      *      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0xA0, 0x01,         //      * **       
    0x1F, 0x06,         // *****    **     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC2, 0x07,         //  *    *****     
    0x02, 0x04,         //  *        *     
    0x1F, 0x02,         // *****    *      
    0x02, 0x02,         //  *       *      
    0x05, 0x05,         // * *     * *     
    0x9F, 0x08,         // *****  *   *    
    0x64, 0x00,         //   *  **         
    0xC4, 0x0F,         //   *   ******    
    0x1C, 0x01,         //   ***   *       
    0x07, 0x01,         // ***     *       
    0x04, 0x01,         //   *     *       
    0xE4, 0x0F,         //   *  *******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x10, 0x01,         //     *   *       
    0x7E, 0x05,         //  ****** * *     
    0x10, 0x09,         //     *   *  *    
    0xFE, 0x0F,         //  ***********    
    0x08, 0x01,         //    *    *       
    0x7E, 0x09,         //  ****** *  *    
    0x14, 0x05,         //   * *   * *     
    0x7C, 0x05,         //   ***** * *     
    0x10, 0x02,         //     *    *      
    0x7E, 0x0D,         //  ****** * **    
    0x90, 0x08,         //     *  *   *    
    0x50, 0x08,         //     * *    *    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x01,         //  *      *       
    0x02, 0x02,         //  *       *      
    0xDF, 0x0F,         // ***** ******    
    0x82, 0x04,         //  *     *  *     
    0x45, 0x08,         // * *   *    *    
    0x9F, 0x04,         // *****  *  *     
    0x84, 0x02,         //   *    * *      
    0x84, 0x02,         //   *    * *      
    0x1C, 0x01,         //   ***   *       
    0x07, 0x01,         // ***     *       
    0x84, 0x02,         //   *    * *      
    0x64, 0x0C,         //   *  **   **    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xC2, 0x07,         //  *    *****     
    0x42, 0x04,         //  *    *   *     
    0xDF, 0x07,         // ***** *****     
    0x02, 0x00,         //  *              
    0xE5, 0x0F,         // * *  *******    
    0x5F, 0x04,         // ***** *   *     
    0xC4, 0x07,         //   *   *****     
    0x44, 0x04,         //   *   *   *     
    0xDC, 0x07,         //   *** *****     
    0x47, 0x04,         // ***   *   *     
    0xF4, 0x0F,         //   * ********    
    0x04, 0x04,         //   *       *     
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x06,         //  *       **     
    0xE4, 0x01,         //   *  ****       
    0x24, 0x00,         //   *  *          
    0xE0, 0x07,         //      ******     
    0xA0, 0x02,         //      * * *      
    0xA7, 0x02,         // ***  * * *      
    0xA4, 0x02,         //   *  * * *      
    0x24, 0x01,         //   *  *  *       
    0x94, 0x02,         //   * *  * *      
    0x44, 0x04,         //   *   *   *     
    0x0A, 0x00,         //  * *            
    0xF1, 0x0F,         // *   ********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x42, 0x02,         //  *    *  *      
    0x44, 0x02,         //   *   *  *      
    0xF4, 0x0F,         //   * ********    
    0x40, 0x02,         //       *  *      
    0x40, 0x02,         //       *  *      
    0xF7, 0x0F,         // *** ********    
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x44, 0x02,         //   *   *  *      
    0x24, 0x02,         //   *  *   *      
    0x0A, 0x00,         //  * *            
    0xF1, 0x0F,         // *   ********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xA2, 0x00,         //  *   * *        
    0xA4, 0x00,         //   *  * *        
    0xE4, 0x07,         //   *  ******     
    0x90, 0x00,         //     *  *        
    0x80, 0x00,         //        *        
    0xF7, 0x0F,         // *** ********    
    0x44, 0x01,         //   *   * *       
    0x44, 0x09,         //   *   * *  *    
    0x24, 0x09,         //   *  *  *  *    
    0x14, 0x0E,         //   * *    ***    
    0x0A, 0x00,         //  * *            
    0xF1, 0x0F,         // *   ********    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x00, 0x03,         //         **      
    0xFE, 0x00,         //  *******        
    0x40, 0x04,         //       *   *     
    0xFF, 0x0F,         // ************    
    0x44, 0x02,         //   *   *  *      
    0xFC, 0x03,         //   ********      
    0x44, 0x02,         //   *   *  *      
    0xFC, 0x03,         //   ********      
    0x40, 0x00,         //       *         
    0xFE, 0x07,         //  **********     
    0x40, 0x00,         //       *         
    0xFF, 0x0F,         // ************    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x02, 0x00,         //  *              
    0xC2, 0x07,         //  *    *****     
    0x9E, 0x04,         //  ****  *  *     
    0x81, 0x04,         // *      *  *     
    0x9F, 0x04,         // *****  *  *     
    0x84, 0x04,         //   *    *  *     
    0xDF, 0x07,         // ***** *****     
    0x84, 0x04,         //   *    *  *     
    0x84, 0x04,         //   *    *  *     
    0x94, 0x04,         //   * *  *  *     
    0x8C, 0x04,         //   **   *  *     
    0xE4, 0x0F,         //   *  *******    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0xE4, 0x0F,         //   *  *******    
    0x08, 0x08,         //    *       *    
    0x02, 0x08,         //  *         *    
    0xF2, 0x09,         //  *  *****  *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x09,         //  *  *   *  *    
    0xF2, 0x09,         //  *  *****  *    
    0x12, 0x09,         //  *  *   *  *    
    0x12, 0x09,         //  *  *   *  *    
    0xF2, 0x09,         //  *  *****  *    
    0x02, 0x08,         //  *         *    
    0x02, 0x0E,         //  *       ***    
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00, 0x00,         //                 
    0x40, 0x00,         //       *         
    0xFE, 0x0F,         //  ***********    
    0x10, 0x02,         //     *    *      
    0x20, 0x01,         //      *  *       
    0xC0, 0x00,         //       **        
    0x38, 0x03,         //    ***  **      
    0x06, 0x0C,         //  **       **    
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0x10, 0x01,         //     *   *       
    0x08, 0x01,         //    *    *       
    0x06, 0x01,         //  **     *       
    0x00, 0x00,         //                 
    0x00, 0x00,         //                 

    0x00,         //         
    0x00,         //         
    0x00,         //         
    0x0F,         // ****    
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x09,         // *  *    
    0x0F,         // ****    
    0x00,         //         
    0x00,         //         
    0x00,         //         

};

