/*********************************************************************
 *
 *	Hardware specific definitions
 *
 *********************************************************************
 * FileName:        HardwareProfile_xxx.h
 * Processor:       PIC24F, PIC24H, dsPIC, PIC32
 * Compiler:        Microchip C32 v1.00 or higher
 *					Microchip C30 v3.01 or higher
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright © 2002-2011 Microchip Technology Inc.  All rights 
 * reserved.
 *
 * Microchip licenses to you the right to use, modify, copy, and 
 * distribute: 
 * (i)  the Software when embedded on a Microchip microcontroller or 
 *      digital signal controller product (“Device”) which is 
 *      integrated into Licensee’s product; or
 * (ii) ONLY the Software driver source files ENC28J60.c and 
 *      ENC28J60.h ported to a non-Microchip device used in 
 *      conjunction with a Microchip ethernet controller for the 
 *      sole purpose of interfacing with the ethernet controller. 
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED “AS IS” WITHOUT 
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
 * Date		    Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 02/24/11	    For Graphics Library Version 3.00 
 ********************************************************************/

#ifndef __HARDWARE_PROFILE_H
    #define __HARDWARE_PROFILE_H

/*********************************************************************
* PIC Device Specific includes
*********************************************************************/
    #include "Compiler.h"

/*********************************************************************
* GetSystemClock() returns system clock frequency.
*
* GetPeripheralClock() returns peripheral clock frequency.
*
* GetInstructionClock() returns instruction clock frequency.
*
********************************************************************/

/*********************************************************************
* Macro: #define	GetSystemClock() 
*
* Overview: This macro returns the system clock frequency in Hertz.
*			* value is 8 MHz x 4 PLL for PIC24
*			* value is 8 MHz/2 x 18 PLL for PIC32
*
********************************************************************/
    #define GetSystemClock()    (32000000ul)

/*********************************************************************
* Macro: #define	GetPeripheralClock() 
*
* Overview: This macro returns the peripheral clock frequency 
*			used in Hertz.
*			* value for PIC24 is <PRE>(GetSystemClock()/2) </PRE> 
*			* value for PIC32 is <PRE>(GetSystemClock()/(1<<OSCCONbits.PBDIV)) </PRE>
*
********************************************************************/
    #define GetPeripheralClock()    (GetSystemClock() / 2)

/*********************************************************************
* Macro: #define	GetInstructionClock() 
*
* Overview: This macro returns instruction clock frequency 
*			used in Hertz.
*			* value for PIC24 is <PRE>(GetSystemClock()/2) </PRE> 
*			* value for PIC32 is <PRE>(GetSystemClock()) </PRE> 
*
********************************************************************/
    #define GetInstructionClock()   (GetSystemClock() / 2)

/* ################################################################## */
/*********************************************************************
* START OF GRAPHICS RELATED MACROS
********************************************************************/
/* ################################################################## */

/*********************************************************************
* AUTO GENERATED CODE 
********************************************************************/

//Auto Generated Code
#define PIC24FJ256DA210_DEV_BOARD
#define USE_16BIT_PMP
#define GFX_USE_DISPLAY_CONTROLLER_MCHP_DA210
#define GFX_USE_DISPLAY_PANEL_PH480272T_005_I11Q
#define GFX_GCLK_DIVIDER 38
#define GFX_DISPLAY_BUFFER_START_ADDRESS 0x00020000ul
#define GFX_DISPLAY_BUFFER_LENGTH 0x0003FC00ul
#define GFX_EPMP_CS1_BASE_ADDRESS 0x00020000ul
#define GFX_EPMP_CS1_MEMORY_SIZE 0x40000ul
//End Auto Generated Code



/*********************************************************************
* END OF AUTO GENERATED CODE 
********************************************************************/

/*********************************************************************
* External Memory Programmer Settings
*********************************************************************/
#if defined (EXPLORER_16)  
    #define USE_COMM_PKT_MEDIA_SERIAL_PORT
    #define BAUDRATE2               115200UL
    #define BRG_DIV2                4
    #define BRGH2                   1
#else
    #define USE_COMM_PKT_MEDIA_USB

    //#define USE_SELF_POWER_SENSE_IO
    #define tris_self_power     TRISAbits.TRISA2    // Input
    #define self_power          1

    //#define USE_USB_BUS_SENSE_IO
    #define tris_usb_bus_sense  TRISBbits.TRISB5    // Input
    #define USB_BUS_SENSE       U1OTGSTATbits.SESVD // Special considerations required if using SESVD for this purpose.  See documentation.

#endif

#define COMM_PKT_RX_MAX_SIZE    (1024)


/*********************************************************************
* HARDWARE DEVICES SELECTION
*********************************************************************/
/*
    This portion selects the different components available to 
    the application depending on the hardware platform selected.
    * PIC24FJ256DA210_DEV_BOARD - PIC24FJ256DA210 Development Board (DM240312)
*/
	#if defined (GFX_EPMP_CS2_BASE_ADDRESS)
	    #define  USE_SST39LF400					  // use the 4 Mbit (x16) Multi-Purpose (Parallel) Flash connected to EPMP CS 2 
    #else	
        #define	USE_SST25VF016                    // use the 16 Mbit SPI Serial Flash 
    #endif 
    #define      USE_TOUCHSCREEN_RESISTIVE         // use 4-wire resistive touch screen driver

	   
/*********************************************************************
* DISPLAY PARAMETERS 
*********************************************************************/
/*
    The following are the parameters required for the 
    different display drivers that is supported.
    When adding support to a new display controller or display panel,
    follow the parameterization of the driver for reusability of the
    driver.

    Display Parameter Macros Descriptions:
    
    1. DISP_ORIENTATION - defines the display rotation with
            respect to its native orientation. For example, if the display 
            has a resolution specifications that says 240x320 (QVGA), the
            display is natively in portrait mode. If the application
            uses the display in landscape mode (320x240), then the 
            orientation musts be defined as 90 or 180 degree rotation.
            The Graphics Library will calculate the actual pixel location
            to rotate the contents of the screen. So when users view the 
            display, the image on the screen will come out in the correct
            orientation.
            
            Valid values: 0, 90, 180 and 270
            Example: #define DISP_ORIENTATION 90

    2. DISP_HOR_RESOLUTION - defines the horizontal dimension in pixels. This 
            is the native horizontal dimension of the screen. In the example
            given in DISP_ORIENTATION, a 320x240 display will have DISP_HOR_RESOLUTION
            of 320.
            
            Valid Values: dependent on the display glass resolution used.
            Example: #define DISP_HOR_RESOLUTION 320 

    3. DISP_VER_RESOLUTION - defines the vertical dimension in pixels. This 
            is the native vertical dimension of the screen. In the example
            given in DISP_ORIENTATION, a 320x240 display will have DISP_VER_RESOLUTION
            of 240.
            
            Valid Values: dependent on the display glass resolution used.
            Example: #define DISP_VER_RESOLUTION 240 

    4. COLOR_DEPTH - (NOTE: Define this macro in the GraphicsConfig.h 
             This defines the vertical dimension in pixels. 
            
            Valid Values: 1, 4, 8, 16, 24 (note 24 bpp is only used if you are 
                          using a Display Driver that supports 24 bpp color depth.
            Example: #define COLOR_DEPTH 16 

    5. DISP_DATA_WIDTH - this defines the display controller physical interface 
            to the display panel. 

            Valid Values: 1, 4, 8, 16, 18, 24 
                          1, 4, 8 are usually used in MSTN and CSTN displays
                          16, 18 and 24 are usually used in TFT displays.
            Example: #define DISP_DATA_WIDTH 18 
    
    6. DISP_INV_LSHIFT - this indicates that the color data is sampled in the
            falling edge of the pixel clock. 

            Example: #define DISP_INV_LSHIFT - define this to sample the
                          color data in the falling edge of the pixel clock.
    
    7. DISP_HOR_PULSE_WIDTH - this defines the horizontal sync signal pulse width. 

            Valid Values: See display panel data sheet                           
            Example: #define DISP_HOR_PULSE_WIDTH 25 
  
    8. DISP_VER_PULSE_WIDTH - this defines the vertical sync signal pulse width. 

            Valid Values: See display panel data sheet                           
            Example: #define DISP_VER_PULSE_WIDTH 4
            
    9. DISP_HOR_BACK_PORCH - this defines the horizontal back porch. 
            DISP_HOR_BACK_PORCH + DISP_HOR_FRONT_PORCH + DISP_HOR_PULSE_WIDTH
            makes up the horizontal blanking period.

            Valid Values: See display panel data sheet                           
            Example: #define DISP_HOR_BACK_PORCH 5

    10. DISP_HOR_FRONT_PORCH - this defines the horizontal front porch. 
            DISP_HOR_BACK_PORCH + DISP_HOR_FRONT_PORCH + DISP_HOR_PULSE_WIDTH
            makes up the horizontal blanking period.

            Valid Values: See display panel data sheet                           
            Example: #define DISP_HOR_FRONT_PORCH 10

    11. DISP_VER_BACK_PORCH - this defines the vertical back porch. 
            DISP_VER_BACK_PORCH + DISP_VER_FRONT_PORCH + DISP_VER_PULSE_WIDTH
            makes up the horizontal blanking period.

            Valid Values: See display panel data sheet                           
            Example: #define DISP_VER_BACK_PORCH 0

    12. DISP_VER_FRONT_PORCH - this defines the horizontal front porch. 
            DISP_VER_BACK_PORCH + DISP_VER_FRONT_PORCH + DISP_VER_PULSE_WIDTH
            makes up the horizontal blanking period.

            Valid Values: See display panel data sheet                           
            Example: #define DISP_VER_FRONT_PORCH 2
            
    13. GFX_LCD_TYPE - this defines the type of display glass used. 
            
            Valid Values: Dependent on the display controller supported LCD types.
                          GFX_LCD_TFT  // Type TFT Display 
                          GFX_LCD_CSTN // Type Color STN Display 
                          GFX_LCD_MSTN // Type Mono STN Display 
                          GFX_LCD_OLED // Type OLED Display

            Example: #define GFX_LCD_TYPE GFX_LCD_TFT

    14. GFX_DISPLAYENABLE_ENABLE - this enables the use of the Display Enable Port 
            (GEN) when using the Microchip Graphics Module. The signal required when 
            using a display panel that supports DATA ENABLE Mode. DATA ENABLE Mode 
            is used when the display panel do not have sync (HSYNC and VSYNC) signals.
            
            Example: #define GFX_DISPLAYENABLE_ENABLE

    15. GFX_DISPLAYENABLE_POLARITY - this sets the polarity of the Display Enable Port 
            (GEN) when using the Microchip Graphics Module. 
            
            Valid Values: GFX_ACTIVE_HIGH, GFX_ACTIVE_LOW
            Example: #define GFX_DISPLAYENABLE_POLARITY GFX_ACTIVE_HIGH
            
    16. GFX_HSYNC_ENABLE - this enables the use of the Display Horizontal Synchronization 
            Port (HSYNC) when using the Microchip Graphics Module. The signal required when 
            using a display panel that supports SYNC Mode. SYNC Mode 
            is used when the display panel has sync (HSYNC and VSYNC) signals.
            
            Example: #define GFX_HSYNC_ENABLE

    17. GFX_HSYNC_POLARITY - this sets the polarity of the Display Horizontal Synchronization 
            Port (HSYNC)when using the Microchip Graphics Module. 
            
            Valid Values: GFX_ACTIVE_HIGH, GFX_ACTIVE_LOW
            Example: #define GFX_HSYNC_POLARITY GFX_ACTIVE_LOW

    18. GFX_VSYNC_ENABLE - this enables the use of the Display Vertical Synchronization 
            Port (VSYNC) when using the Microchip Graphics Module. The signal required when 
            using a display panel that supports SYNC Mode. SYNC Mode 
            is used when the display panel has sync (HSYNC and VSYNC) signals.
            
            Example: #define GFX_VSYNC_ENABLE

    19. GFX_VSYNC_POLARITY - this sets the polarity of the Display Vertical Synchronization
            Port (VSYNC)when using the Microchip Graphics Module. 
            
            Valid Values: GFX_ACTIVE_HIGH, GFX_ACTIVE_LOW
            Example: #define GFX_VSYNC_POLARITY GFX_ACTIVE_LOW

    20. GFX_DISPLAYPOWER_ENABLE - this enables the use of the Display Power Sequencer 
            Control Port (GPWR) when using the Microchip Graphics Module. The signal 
            can be used to control the display power circuitry. The Graphics Module
            can manage the powering up and powering down of the display since 
            power up and power down sequence in display panels is essential to 
            extend display life cycle.
            
            Example: #define GFX_DISPLAYPOWER_ENABLE
            
    21. GFX_DISPLAYPOWER_POLARITY - this sets the polarity of the Display Power Sequencer 
            Control Port (GPWR) when using the Microchip Graphics Module. 
            
            Valid Values: GFX_ACTIVE_HIGH, GFX_ACTIVE_LOW
            Example: #define GFX_DISPLAYPOWER_POLARITY GFX_ACTIVE_HIGH
            
    22. GFX_CLOCK_POLARITY - this sets the polarity of the Display Glass Clock Port (GCLK) 
            when using the Microchip Graphics Module. 
            
            Valid Values: GFX_ACTIVE_HIGH, GFX_ACTIVE_LOW
            Example: #define GFX_CLOCK_POLARITY GFX_ACTIVE_HIGH
            
    
    There are two major types of controllers enumerated here:
    1. Controllers in Smart Displays - these are display modules that have  
       built in display controller. Interface to the PIC device(s) 
       are usually through parallel interface or serial interface.
       
       Required parameters:
       #define DISP_ORIENTATION 
       #define DISP_HOR_RESOLUTION 
       #define DISP_VER_RESOLUTION 
       
    2. Controller that drives the RGB Glass directly - these are display 
       controllers that comes in a separate package or built into the
       microcontrollers.
    
       Required parameters:
       #define DISP_ORIENTATION 
       #define DISP_HOR_RESOLUTION 
       #define DISP_VER_RESOLUTION 
       #define DISP_DATA_WIDTH			
       #define DISP_HOR_PULSE_WIDTH    
       #define DISP_HOR_BACK_PORCH     
       #define DISP_HOR_FRONT_PORCH    
       #define DISP_VER_PULSE_WIDTH    
       #define DISP_VER_BACK_PORCH     
       #define DISP_VER_FRONT_PORCH    

       Optional parameters:       
       #define DISP_INV_LSHIFT

       When using Microchip Graphics Module (mchpGfxDrv) required parameters:
       #define GFX_DISPLAYENABLE_ENABLE
       #define GFX_DISPLAYENABLE_POLARITY          
       
       or 
       
       #define GFX_HSYNC_ENABLE
       #define GFX_VSYNC_ENABLE
       #define GFX_HSYNC_POLARITY                  
       #define GFX_VSYNC_POLARITY                  

       #define GFX_CLOCK_POLARITY                  

       When using Microchip Graphics Module (mchpGfxDrv) Optional parameters:       
       #define GFX_DISPLAYPOWER_ENABLE
       #define GFX_DISPLAYPOWER_POLARITY           
      
    
*/

// -----------------------------------
// For RGB GLASS
// -----------------------------------
// Using PH480272T_005_I11Q Display Panel
	#if defined (GFX_USE_DISPLAY_PANEL_PH480272T_005_I11Q) 
		#define DISP_ORIENTATION		0
        #define DISP_HOR_RESOLUTION		480
        #define DISP_VER_RESOLUTION		272
        #define DISP_DATA_WIDTH			24
        #define DISP_HOR_PULSE_WIDTH    41
        #define DISP_HOR_BACK_PORCH     2
        #define DISP_HOR_FRONT_PORCH    2
        #define DISP_VER_PULSE_WIDTH    10
        #define DISP_VER_BACK_PORCH     2
        #define DISP_VER_FRONT_PORCH    2
    	#define GFX_LCD_TYPE            GFX_LCD_TFT
        
        #if defined (GFX_USE_DISPLAY_CONTROLLER_MCHP_DA210)
            #define GFX_DISPLAYENABLE_ENABLE
            #define GFX_HSYNC_ENABLE
            #define GFX_VSYNC_ENABLE
            #define GFX_DISPLAYPOWER_ENABLE
            #define GFX_CLOCK_POLARITY                  GFX_ACTIVE_LOW
            #define GFX_DISPLAYENABLE_POLARITY          GFX_ACTIVE_HIGH
            #define GFX_HSYNC_POLARITY                  GFX_ACTIVE_LOW
            #define GFX_VSYNC_POLARITY                  GFX_ACTIVE_LOW
            #define GFX_DISPLAYPOWER_POLARITY           GFX_ACTIVE_HIGH
        #endif // #if defined (GFX_USE_DISPLAY_CONTROLLER_MCHP_DA210)
	#endif // 	#if defined (GFX_USE_DISPLAY_PANEL_PH480272T_005_I11Q) 


/*********************************************************************
* DISPLAY PARALLEL INTERFACE 
*********************************************************************/
/*
   Select the correct Parallel Master Port Interface Driver.
   This selection is valid only for parallel interface. When using
   display drivers that uses serial interface, this portion should be
   commented out or removed.
*/
// EPMP is exclusive to GB210 devices and PMP to some devices
		// EPMP is used by graphics controller but if EPMP is used 
		// to access external memory then we will need EPMP driver.
	#define USE_GFX_EPMP
	
/*********************************************************************
* PARALLEL MASTER PORT INTERFACE TIMING 
*********************************************************************/
	// When using the Parallel Master Port (or Enhanced Parallel Master Port) the 
	// PMP timing must be defined for the following:
	// PMP_DATA_SETUP_TIME or EPMPCSx_DATA_SETUP (for DWAITB) 
	// PMP_DATA_WAIT_TIME or EPMPCSx_DATA_WAIT_TIME (for DWAITM) 
	// and PMP_DATA_HOLD_TIME or EPMPCSx_DATA_HOLD_TIME (for DWAITE)
    // where x is 1 or 2 (EPMP has 2 chip selects)
	// All values are timing parameters in ns.
	// The timing is dependent on the display controller sampling period if 
	// interfacing with the display controller or device AC timing requirements
	// if interfacing with a device (such as SRAM or Parallel Flash memory).
	// Refer to your specific display controller or device to determine the 
	// optimum (fastest) timing requirement for your interface. 

#if defined (USE_GFX_EPMP)

    #if defined (GFX_USE_DISPLAY_CONTROLLER_MCHP_DA210)
        
        // Since the display controller is built into the PIC24FJ256DA210
        // microcontroller, the timing shown here are based on the 
        // two memory devices (SRAM and Parallel Flash) mounted on the
        // development Board. All time are in ns.
        // EPMPCSx_DATA_SETUP_TIME (for DWAITB), 
        // EPMPCSx_DATA_WAIT_TIME (for DWAITM), 
        // and EPMPCSx_DATA_HOLD_TIME (for DWAITE)
        // are only used when accessing data from the External SRAM or External Parallel Flash
        // using CPU accesses, 
        // where:   
        //      x = 1 for CS1 
        //      x = 2 for CS2
        
        // When the Graphics Module is used, the EPMP timing is based on the EPMPCSx_DATA_AMWAIT_TIME
        
        // based on the IS61LV25616AL RAM Device
        #define EPMPCS1_ENABLE                              // use this to enable the use of EPMP CS1
        #define EPMPCS1_ADDRESS_LINE_COUNT          (18)    // use 18 address lines (PMA[0:17]
		#define EPMPCS1_DATA_SETUP_TIME             (0)	    // 
		#define EPMPCS1_DATA_WAIT_TIME		        (10)    // 
		#define EPMPCS1_DATA_HOLD_TIME		        (0)		// 
        
        // values are based on the SST39VF400A Parallel Flash Device (55 ns access time)
        // Since access time is 55 ns and Write Timing are the following:
        //      For programming (assuming a WE controlled Programming)
        //          WE pulse width = 40 ns (min)
        //      For reading
        //          OE to data active = 30 ns (max)
        //          OE to data high-Z output = 15 ns (max)
        //          55 ns access time
        //      We need to fulfill 55 ns then.
               
        #define EPMPCS2_ENABLE                              // use this to enable the use of EPMP CS2
        #define EPMPCS2_ADDRESS_LINE_COUNT          (18)    // use 18 address lines (PMA[0:17]
		#define EPMPCS2_DATA_SETUP_TIME             (0)	    // based on OE to data active 
		#define EPMPCS2_DATA_WAIT_TIME		        (55)	// based on 55 - 30 - 10 = 10 ns (since access time is 55 ns) 
		#define EPMPCS2_DATA_HOLD_TIME		        (0)     // bsaed on OE to data high-Z output 
    
    #else
        #error "USE_GFX_EPMP is defined but no timing values are defined for the selected hardware interface. Define the following timing paraters: EPMPCSx_DATA_SETUP_TIME, EPMPCSx_DATA_WAIT_TIME, EPMPCSx_DATA_HOLD_TIME, where x is the chip select number (1 or 2)."

    #endif
    
#endif //#if defined (USE_GFX_PMP) || defined (USE_GFX_EPMP)

/*********************************************************************
* PARALLEL MASTER PORT INTERFACE TIMING AND POLARITIES 
*********************************************************************/
/*
    This portion sets up the EPMP port timing when Graphics Module is
    used as a Alternate Master in EPMP (See Family Reference Manual (FRM)
    Section 42. Enhanced Parallel Master Port (EPMP)) for details.

    Macros to define the access timing of the parallel device in EPMP chip 
	selects.  This value is used to calculate the AMWAIT cycles needed in EPMP
	Alternate Master I/Os direct access (EPMP bypass mode) (MSTSEL = 0x3). 
	When in this mode the Alternate Master (in this case Graphics Module)
	will use the clock specified by the G1CLKSEL bits of CLKDIV register
	in the oscillator module. There are two possible values: 48 Mhz and 
	96 Mhz. The equation used is:
	    temp = (1000000000ul) / ((CLKDIVbits.G1CLKSEL == 1)? 960000000ul : 480000000);
		
		if (EPMPCSx_ACCESS_TIME <= (temp*3))
		    PMCSxMDbits.AMWAIT = 0;
		else if (EPMPCSx_ACCESS_TIME > temp)
	    {
            PMCSxMDbits.AMWAIT = (EPMPCSx_ACCESS_TIME / temp);
            if ((EPMPCSx_ACCESS_TIME % temp) > 0)
                PMCSxMDbits.AMWAIT += 1;
        }          
		 
        where:   
            x = 1 for CS1 
            x = 2 for CS2
            the factor of 3 is used because of the fact that an AMWAIT of 0 means
            that 3 alternate master cycles are used per read/write.
            Actual cycles used is 3 + AMWAIT cycles per read/write access.

*/
#ifdef PIC24FJ256DA210_DEV_BOARD

	#if defined (GFX_EPMP_CS1_BASE_ADDRESS)
		#define EPMPCS1_CS_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS1_WR_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS1_RD_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS1_BE_POLARITY	GFX_ACTIVE_LOW


		#define EPMPCS1_ACCESS_TIME                 (10)		// chip select 1 Alternate Master access time.

	#endif

	#if defined (GFX_EPMP_CS2_BASE_ADDRESS)
		#define EPMPCS2_CS_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS2_WR_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS2_RD_POLARITY	GFX_ACTIVE_LOW
		#define EPMPCS2_BE_POLARITY	GFX_ACTIVE_LOW

		// macros to define the access timing of the parallel device in EPMP CS2
		#define EPMPCS2_ACCESS_TIME                 (55)		// chip select 1 Alternate Master access time.

	#endif
#endif


/*********************************************************************
* HARDWARE PROFILE FOR DISPLAY CONTROLLER INTERFACE
*********************************************************************/
/* 
    The following defines the different IO signals used to connect
    to the display controller.
    The hardware profile used is dependent on the PIC device 
    and the development board used.
    
    The following are used to control the following signals to the
    Display Controller:
    1. Reset Signal - this signal controls the reset pin of the display
            controller if available.
            
            Example:
            #define DisplayResetConfig()        TRISAbits.TRISA4 = 0    
            #define DisplayResetEnable()        LATAbits.LATA4 = 0
            #define DisplayResetDisable()       LATAbits.LATA4 = 1

    2. Command/Data Signal - this signal indicates to the controller
            if the command or data is being sent to the display controller.

            Example:
            #define DisplayCmdDataConfig()      TRISAbits.TRISA1 = 0
            #define DisplaySetCommand()         LATAbits.LATA1 = 0
            #define DisplaySetData()            LATAbits.LATA1 = 1

    3. Controller Chip Select Signal - this signal controls the chip select
            pin of the display controller is available.

            Example:
            #define DisplayConfig()             TRISBbits.TRISB15 = 0             
            #define DisplayEnable()             LATBbits.LATB15 = 0
            #define DisplayDisable()            LATBbits.LATB15 = 1
            
    4. Display Module Power Control Signal - this signal turns on or off
            the display module if available. In some cases, this can be an 
            IO port that will enable the power circuitry of your 
            display module.

            Example:
            #define DisplayPowerConfig()        TRISAbits.TRISA5 = 0       
            #define DisplayPowerOn()            LATAbits.LATA5 = 1           
            #define DisplayPowerOff()           LATAbits.LATA5 = 0

    5. Display Backlight Brightness Control - this controls the backlight
            brightness or ON or OFF states if available. If brightness is 
            controllable, this signal may be driven by some PWM signal. 

            Example:
            #define DisplayBacklightConfig()    TRISDbits.TRISD0 = 0  
            #define DisplayBacklightOn()        LATDbits.LATD0 = 0
            #define DisplayBacklightOff()       LATDbits.LATD0 = 1               
    
*/


// -----------------------------------
// When using PIC24FJ256DA210 Development Board
// -----------------------------------
/*
    This development board only has PIC24FJ256DA210 device.
*/

#if defined (PIC24FJ256DA210_DEV_BOARD)
	
    // Definitions for POWER ON pin
    #define DisplayPowerConfig()            TRISAbits.TRISA5 = 0       
    #define DisplayPowerOn()                LATAbits.LATA5 = 1           
    #define DisplayPowerOff()               LATAbits.LATA5 = 0

    // Definitions for backlight control pin
    #define DisplayBacklightConfig()        
    #define DisplayBacklightOn()        
    #define DisplayBacklightOff()          
    
    // Dummy definitions
    // Definitions for reset pin
    #define DisplayResetConfig()           
    #define DisplayResetEnable()           
    #define DisplayResetDisable()          

    // Definitions for RS pin
    #define DisplayCmdDataConfig()         
    #define DisplaySetCommand()            
    #define DisplaySetData()               

    // Definitions for CS pin
    #define DisplayConfig()                
    #define DisplayEnable()                
    #define DisplayDisable()               
    

// end of #elif defined (PIC24FJ256DA210_DEV_BOARD)
#endif 

/*********************************************************************
* HARDWARE PROFILE FOR THE RESISTIVE TOUCHSCREEN 
*********************************************************************/
/*
	These are the hardware settings for the 4-wire resistive
	touch screen. There are two analog inputs and two digital I/Os
	needed. 
	
	This portion is divided into 3 components
	1. IO and ADC channels settings - sets up the IO pins used and the
	   ADC channel selected to evaluate the screen touch. 
	2. Touch Screen X and Y orientation settings - sets up the
	   x and y directions. This is dependent on how the resistive
	   touch signals (X-, Y-, X+, and Y+) are wired up to the 
	   IOs and ADC signals with respect to the orientation of the
	   screen. Based on these factors, we can control the calculation
	   of the touch by swapping x and/or y and flipping the x and/or y 
	   directions.
	3. Touch Screen Non-Volatile Memory Storage Macros - this defines
	   the non-volatile memory read, write and sector erase functions
	   to be used when reading or storing calibration values.    
	
	The resistive touch screen driver assumes the following: 
	1. X+ and Y+ are mapped to the A/D inputs
	2. X- and Y- are mapped to the pure digital I/Os
*/

#if defined (USE_TOUCHSCREEN_RESISTIVE)

	/*********************************************************************
	* Resistive Touch Screen A/D and I/O Specific Macros 
	*********************************************************************/
	// ADC Input Channel Selector
	// all other supported devices
	#define TOUCH_ADC_INPUT_SEL   AD1CHS

	// ADC Sample Start 
	#define TOUCH_ADC_START   AD1CON1bits.SAMP 

	// ADC Status
	#define TOUCH_ADC_DONE   AD1CON1bits.DONE

	// Hardware Platform dependend macros
	/* ----------------------------------------- */
	#if defined (PIC24FJ256DA210_DEV_BOARD)
	/* ----------------------------------------- */
		// ADC channel constants
		// Potentiometer and Temperature sensor
		/* PIC24FJ256DA210 Development Board does 
		 * not have a temperature sensor 
		 */
		#define ADC_POT			5
		#define ADC_XPOS		16
		#define ADC_YPOS		18

		// ADC Port Control Bits
		#define ADC_POT_PCFG	ANSBbits.ANSB5
		#define ADPCFG_XPOS		ANSCbits.ANSC4
		#define ADPCFG_YPOS		ANSGbits.ANSG7

		// Y port definitions
		#define LAT_XPOS    LATCbits.LATC4
		#define TRIS_XPOS   TRISCbits.TRISC4
		#define LAT_XNEG    LATAbits.LATA2
		#define TRIS_XNEG   TRISAbits.TRISA2
	     
		// X port definitions
		#define LAT_YPOS    LATGbits.LATG7
		#define TRIS_YPOS   TRISGbits.TRISG7
   		#define LAT_YNEG    LATAbits.LATA1
		#define TRIS_YNEG   TRISAbits.TRISA1
    
    // end of #if defined (PIC24FJ256DA210_DEV_BOARD)...
	#endif

	/*********************************************************************
	* Touch Screen X and Y orientation
	*********************************************************************/
	/*********************************************************************
	Description:
		The usage of the resistive touch screen will be affected 
		by the way the hardware is mapped to the A/D channels that
		samples the touch. Since resistive touch is basically a 
		measurement of X and Y coordinates the following are macros
		that can modify the touch algorithm when sampling the 
		touch.
		TOUCHSCREEN_RESISTIVE_FLIP_X - will flip the x direction. 	
		TOUCHSCREEN_RESISTIVE_FLIP_Y - will flip the y direction.
		TOUCHSCREEN_RESISTIVE_SWAP_XY - will swap the x and y sampling.
		
		As long as the (X-,Y-) and (X+,Y+) are used consistently,
		and connected properly in hardware, the macros above
		can provide options to the user to align the touch screen
		to the screen orientation.

        Another macro that may affect the way the x and y measurement 
        are the following:
        TOUCHSCREEN_RESISTIVE_PRESS_THRESHOLD - determines how light the 
            touch on the screen. The smaller the  value the lighter the 
            touch. Valid range of values: 0-0x03ff
        TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR - this is the scale
            factor used to calculate the touch coefficients. The equation 
            to calculate the scale factor is:
               (1 << TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR).
            Valid values: 0 - 15 (most resistive touch screens will work 
                                  in the range of 5 - 7)

	*********************************************************************/

	/* ----------------------------------------- */
	#if defined (GFX_PICTAIL_V2)
	/* ----------------------------------------- */
        #define TOUCHSCREEN_RESISTIVE_FLIP_Y

	/* ----------------------------------------- */
	#elif defined (GFX_PICTAIL_V3)              || \
		  defined (GFX_PICTAIL_V3E)             || \
          defined (GFX_PICTAIL_LCC)             || \
		  defined (PIC24FJ256DA210_DEV_BOARD)   || \
	      defined (MEB_BOARD) 
	/* ----------------------------------------- */

		//#if (DISPLAY_PANEL == PH480272T_005_I11Q)	
		#if defined (GFX_USE_DISPLAY_PANEL_PH480272T_005_I11Q)	
			#if (DISP_ORIENTATION == 0)
				#define TOUCHSCREEN_RESISTIVE_SWAP_XY
                #define TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR    6
            #elif (DISP_ORIENTATION == 90)	
				#define TOUCHSCREEN_RESISTIVE_SWAP_XY
                #define TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR    6
			#elif (DISP_ORIENTATION == 180)	
				#define TOUCHSCREEN_RESISTIVE_FLIP_Y
                #define TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR    5
			#elif (DISP_ORIENTATION == 270)	
				#define TOUCHSCREEN_RESISTIVE_SWAP_XY
				#define TOUCHSCREEN_RESISTIVE_FLIP_Y
			#endif	
            
		#endif
	#endif
	
	/*********************************************************************
	* Touch Screen Non-Volatile Memory Storage Macros
	*********************************************************************/

	/* ----------------------------------------- */
    #if defined (USE_SST25VF016) || defined (USE_M25P80)
	/* ----------------------------------------- */
		// Addresses for calibration and version values in SPI Flash on Graphics PICtail 3 & PIC24FJ256DA210 Development Board.
		// Or Addresses for calibration and version values in Parallel Flash on PIC24FJ256DA210 Development Board.
        #define ADDRESS_RESISTIVE_TOUCH_VERSION	(unsigned long)0xFFFFFFFE
        #define ADDRESS_RESISTIVE_TOUCH_COEFA   (unsigned long)0xFFFFFFFC
        #define ADDRESS_RESISTIVE_TOUCH_COEFB   (unsigned long)0xFFFFFFFA
        #define ADDRESS_RESISTIVE_TOUCH_COEFC   (unsigned long)0xFFFFFFF8
        #define ADDRESS_RESISTIVE_TOUCH_COEFD   (unsigned long)0xFFFFFFF6

        // define the functions to call for the non-volatile memory
        // check out touch screen module for definitions of the following function pointers
        // used: NVM_READ_FUNC, NVM_WRITE_FUNC & NVM_SECTORERASE_FUNC
		#define NVMSectorErase					((NVM_SECTORERASE_FUNC)&SST25SectorErase)
    	#define NVMWrite 						((NVM_WRITE_FUNC)&SST25WriteWord)
    	#define NVMRead 						((NVM_READ_FUNC)&SST25ReadWord)

	/* ----------------------------------------- */
	#elif defined (USE_SST39LF400)
	/* ----------------------------------------- */
		// for  PIC24FJ256DA210 Dev Board 
		#define ADDRESS_RESISTIVE_TOUCH_VERSION	(unsigned long)0x0003FFFE
	    #define ADDRESS_RESISTIVE_TOUCH_COEFA   (unsigned long)0x0003FFFC
	    #define ADDRESS_RESISTIVE_TOUCH_COEFB   (unsigned long)0x0003FFFA
	    #define ADDRESS_RESISTIVE_TOUCH_COEFC   (unsigned long)0x0003FFF8
	    #define ADDRESS_RESISTIVE_TOUCH_COEFD   (unsigned long)0x0003FFF6
	    
        // define the functions to call for the non-volatile memory
        // check out touch screen module for definitions of the following function pointers
        // used: NVM_READ_FUNC, NVM_WRITE_FUNC & NVM_SECTORERASE_FUNC
		#define NVMSectorErase					((NVM_SECTORERASE_FUNC)&SST39LF400SectorErase)
    	#define NVMWrite 						((NVM_WRITE_FUNC)&SST39LF400WriteWord)
    	#define NVMRead 						((NVM_READ_FUNC)&SST39LF400ReadWord)

	/* ----------------------------------------- */
	#else	// when no non-volatile memory is used
	/* ----------------------------------------- */
		#warning "Non-Volatile Memory addresses is not set for touch screen calibration"

		#define ADDRESS_RESISTIVE_TOUCH_VERSION	0
	    #define ADDRESS_RESISTIVE_TOUCH_COEFA   0
	    #define ADDRESS_RESISTIVE_TOUCH_COEFB   0
	    #define ADDRESS_RESISTIVE_TOUCH_COEFC   0
	    #define ADDRESS_RESISTIVE_TOUCH_COEFD   0

		#define NVMSectorErase					((void *)0)
    	#define NVMWrite 						((void *)0)
    	#define NVMRead 						((void *)0)

    #endif    

#endif // defined (USE_TOUCHSCREEN_RESISTIVE)



/*********************************************************************
* HARDWARE PROFILE FOR THE SPI FLASH MEMORY
*********************************************************************/
/*
	These are the hardware settings for the SPI peripherals used.
*/

#if defined (USE_SST25VF016) 

	/*********************************************************************
	* SPI Flash Memory on GFX_PICTAIL_V2, GFX_PICTIAL_V3, GFX_PICTAIL_V3e, 
	* PIC24FJ256DA210 Development Board and MEB_BOARD
	*********************************************************************/
	// Set up the signals used to communicate to the SPI Flash device 

    // define the SPI channel to be used
    #if defined (PIC24FJ256DA210_DEV_BOARD)    
        #ifdef PIC24FJ256DA210_DEV_BOARD_ENC624J600
            #define SST25_SPI_CHANNEL 1
        #else
            #define SST25_SPI_CHANNEL 2
        #endif
    #endif	

    /* Define all the SPI channels that will be used here.
       These will be used to determine how the SPI Driver (drv_spi)
       will be compiled.
    */
    #if (SST25_SPI_CHANNEL == 1)
        #define SPI_CHANNEL_1_ENABLE
    #elif (SST25_SPI_CHANNEL == 2)
        #define SPI_CHANNEL_2_ENABLE
    #elif (SST25_SPI_CHANNEL == 3)
        #define SPI_CHANNEL_3_ENABLE
    #elif (SST25_SPI_CHANNEL == 4)
        #define SPI_CHANNEL_4_ENABLE
    #endif


    // Chip Select, SCLK, SDI and SDO signals used 
    #if defined (PIC24FJ256DA210_DEV_BOARD)
    
        #define SST25_CS_TRIS   TRISAbits.TRISA14
        #define SST25_CS_LAT    LATAbits.LATA14
        
        #define SST25_SCK_TRIS  TRISDbits.TRISD8
        #define SST25_SDO_TRIS  TRISBbits.TRISB1
        #define SST25_SDI_TRIS  TRISBbits.TRISB0
        
        #define SST25_SDI_ANS   ANSBbits.ANSB0
        #define SST25_SDO_ANS   ANSBbits.ANSB1

    #endif

#endif // #if defined (USE_SST25VF016)


/*********************************************************************
* IPU OPERATION MACROS.
*********************************************************************/
/* ********************************************************************
* These defines the cache areas when using IPU of the Graphics Module. 
* The IPU operation will need two cache areas:
* - for compressed data (GFX_COMPRESSED_DATA_RAM_ADDRESS, 
*   GFX_COMPRESSED_BUFFER_SIZE)
* - for decompressed data (GFX_DECOMPRESSED_DATA_RAM_ADDRESS, 
*   GFX_DECOMPRESSED_BUFFER_SIZE)
* These two areas are not part of the memory that the Display Driver 
* uses for the viewable pixels. These two areas will exclusively be 
* used by the IPU operation to perform the decompression.
* The use of the IPU cache areas assumes that the hardware used
* is the PIC24FJ256DA210 Development Board where the EPMP CS1 is hooked
* up to SRAM and EPMP CS2 is hooked up to a parallel flash memory.
* Make sure that the buffer sizes are word aligned since IPU operates 
* only on WORD aligned addresses.
* Users can derive the size of the two areas based on the output of the
* "Graphics Resource Converter" tool used to generate the hex or C array
* of the compressed images. Please refer to the "Graphics Resource 
* Converter" Help file for details.
* If the compressed image is placed in Parallel Flash, then the
* GFX_COMPRESSED_BUFFER_SIZE is not needed since the IPU module
* can access the compressed data directly.
********************************************************************  */

#if defined (PIC24FJ256DA210_DEV_BOARD)
	#if defined (GFX_EPMP_CS1_BASE_ADDRESS)

		#define GFX_COMPRESSED_BUFFER_SIZE              (13950)
        #define GFX_DECOMPRESSED_BUFFER_SIZE            (19216)
        #define GFX_IPU_TEMP_DATA_TRANSFER_ARRAY_SIZE   (1024)

	#else
        // a check if the buffer start address is mapped outside the PIC24FJ256DA210
        #if (GFX_DISPLAY_BUFFER_START_ADDRESS >= 0x00017700ul)
		    #warning "EPMP CS1 or CS2 Base Addresses are not defined. If you are using IPU make sure that the GFX_COMPRESSED_DATA_RAM_ADDRESS & GFX_DECOMPRESSED_DATA_RAM_ADDRESS are allocated properly in internal memory."                   
        #endif
    #endif

#endif //#if defined (PIC24FJ256DA210_DEV_BOARD)

/*********************************************************************
* IOS FOR THE SWITCHES (SIDE BUTTONS)
*********************************************************************/
typedef enum
{
    HW_BUTTON_PRESS = 0,
    HW_BUTTON_RELEASE = 1
}HW_BUTTON_STATE;

#if defined (PIC24FJ256DA210_DEV_BOARD)
    #if defined(__PIC24FJ256DA210__)
        #define HardwareButtonInit()
        #define GetHWButtonProgram()        (PORTEbits.RE9)
        #define GetHWButtonScanDown()       (HW_BUTTON_RELEASE)
        #define GetHWButtonScanUp()         (HW_BUTTON_RELEASE) 
        #define GetHWButtonCR()             (PORTGbits.RG8)
        #define GetHWButtonFocus()          (PORTEbits.RE9)
        #define GetHWButtonLeft()           (PORTGbits.RG8)
        #define GetHWButtonCenter()         (PORTEbits.RE9)
        #define GetHWButtonRight()          (PORTBbits.RB5)
    #endif
#endif 


/*********************************************************************
* IOS FOR THE UART
*********************************************************************/   
#define TX_TRIS TRISFbits.TRISF3
#define RX_TRIS TRISDbits.TRISD0

/*********************************************************************
* RTCC DEFAULT INITIALIZATION (these are values to initialize the RTCC
*********************************************************************/
#define RTCC_DEFAULT_DAY        18      // 18th
#define RTCC_DEFAULT_MONTH      10      // October
#define RTCC_DEFAULT_YEAR       11      // 2011
#define RTCC_DEFAULT_WEEKDAY    02      // Tuesday
#define RTCC_DEFAULT_HOUR       10      // 10:10:01
#define RTCC_DEFAULT_MINUTE     10
#define RTCC_DEFAULT_SECOND     01


#endif // __HARDWARE_PROFILE_H




