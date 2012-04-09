/*****************************************************************************
 * FileName:        picturesexternal.h
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
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.8.21
 *****************************************************************************/

#ifndef PICTURESEXTERNAL_H_FILE
#define PICTURESEXTERNAL_H_FILE
/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <Graphics/Graphics.h>


/*****************************************************************************
 * This is an error check for the color depth
 *****************************************************************************/
#if (COLOR_DEPTH > 16)
#error "Color Depth needs to be 16 to correctly use these resources"
#endif


/*****************************************************************************
 * This is a unique marker to verify the external memory data
 * The marker is a total of 8 bytes in length starting at the location GRC_CRC32_EXTERNAL_ADDR.
 * The first four bytes, starting at GRC_CRC32_EXTERNAL_ADDR, will always equal 'M', 'C', 'H', 'P'.
 * The next four byte is the generated 32-bit CRC.  The application can compare the value read from the
 * external memory to the value of GRC_CRC32_EXTERNAL_MARKER to verify that the data is valid.
 *****************************************************************************/
#define GRC_CRC32_EXTERNAL_MARKER 0xA1A8B0D6ul
#define GRC_CRC32_EXTERNAL_ADDR 0x00000000ul

/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: bmpBud
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBud;
#define bmpBud_WIDTH     (110)
#define bmpBud_HEIGHT    (110)
#define bmpBud_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBudL
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBudL;
#define bmpBudL_WIDTH     (110)
#define bmpBudL_HEIGHT    (110)
#define bmpBudL_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpCoorsL
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpCoorsL;
#define bmpCoorsL_WIDTH     (110)
#define bmpCoorsL_HEIGHT    (110)
#define bmpCoorsL_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpCorona
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpCorona;
#define bmpCorona_WIDTH     (110)
#define bmpCorona_HEIGHT    (110)
#define bmpCorona_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGuinness
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGuinness;
#define bmpGuinness_WIDTH     (110)
#define bmpGuinness_HEIGHT    (110)
#define bmpGuinness_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMichelo
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMichelo;
#define bmpMichelo_WIDTH     (110)
#define bmpMichelo_HEIGHT    (110)
#define bmpMichelo_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMillerL
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMillerL;
#define bmpMillerL_WIDTH     (110)
#define bmpMillerL_HEIGHT    (110)
#define bmpMillerL_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpYuen
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpYuen;
#define bmpYuen_WIDTH     (110)
#define bmpYuen_HEIGHT    (110)
#define bmpYuen_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcarrotfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcarrotfr;
#define bmpcarrotfr_WIDTH     (110)
#define bmpcarrotfr_HEIGHT    (110)
#define bmpcarrotfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcheesest
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcheesest;
#define bmpcheesest_WIDTH     (110)
#define bmpcheesest_HEIGHT    (110)
#define bmpcheesest_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpchiliche
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpchiliche;
#define bmpchiliche_WIDTH     (110)
#define bmpchiliche_HEIGHT    (110)
#define bmpchiliche_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfrenchfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfrenchfr;
#define bmpfrenchfr_WIDTH     (110)
#define bmpfrenchfr_HEIGHT    (110)
#define bmpfrenchfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfriedGre
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfriedGre;
#define bmpfriedGre_WIDTH     (110)
#define bmpfriedGre_HEIGHT    (110)
#define bmpfriedGre_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfriedpic
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfriedpic;
#define bmpfriedpic_WIDTH     (110)
#define bmpfriedpic_HEIGHT    (110)
#define bmpfriedpic_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpgarlicfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpgarlicfr;
#define bmpgarlicfr_WIDTH     (110)
#define bmpgarlicfr_HEIGHT    (110)
#define bmpgarlicfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpnachos
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpnachos;
#define bmpnachos_WIDTH     (110)
#define bmpnachos_HEIGHT    (110)
#define bmpnachos_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmponirings
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmponirings;
#define bmponirings_WIDTH     (110)
#define bmponirings_HEIGHT    (110)
#define bmponirings_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpspicynac
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpspicynac;
#define bmpspicynac_WIDTH     (110)
#define bmpspicynac_HEIGHT    (110)
#define bmpspicynac_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpCajunBur
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpCajunBur;
#define bmpCajunBur_WIDTH     (110)
#define bmpCajunBur_HEIGHT    (110)
#define bmpCajunBur_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMonsterC
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMonsterC;
#define bmpMonsterC_WIDTH     (110)
#define bmpMonsterC_HEIGHT    (110)
#define bmpMonsterC_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMushroom
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMushroom;
#define bmpMushroom_WIDTH     (110)
#define bmpMushroom_HEIGHT    (110)
#define bmpMushroom_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcheesebu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcheesebu;
#define bmpcheesebu_WIDTH     (110)
#define bmpcheesebu_HEIGHT    (110)
#define bmpcheesebu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmphamburge
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmphamburge;
#define bmphamburge_WIDTH     (110)
#define bmphamburge_HEIGHT    (110)
#define bmphamburge_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmppepperja
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmppepperja;
#define bmppepperja_WIDTH     (110)
#define bmppepperja_HEIGHT    (110)
#define bmppepperja_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBrownie
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBrownie;
#define bmpBrownie_WIDTH     (110)
#define bmpBrownie_HEIGHT    (110)
#define bmpBrownie_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMousse
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMousse;
#define bmpMousse_WIDTH     (110)
#define bmpMousse_HEIGHT    (110)
#define bmpMousse_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpStrawb
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpStrawb;
#define bmpStrawb_WIDTH     (110)
#define bmpStrawb_HEIGHT    (110)
#define bmpStrawb_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpSundae
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpSundae;
#define bmpSundae_WIDTH     (110)
#define bmpSundae_HEIGHT    (110)
#define bmpSundae_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpapple
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpapple;
#define bmpapple_WIDTH     (110)
#define bmpapple_HEIGHT    (110)
#define bmpapple_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpblueberr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpblueberr;
#define bmpblueberr_WIDTH     (110)
#define bmpblueberr_HEIGHT    (110)
#define bmpblueberr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmppeanut
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmppeanut;
#define bmppeanut_WIDTH     (110)
#define bmppeanut_HEIGHT    (110)
#define bmppeanut_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpredvel
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpredvel;
#define bmpredvel_WIDTH     (110)
#define bmpredvel_HEIGHT    (110)
#define bmpredvel_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpFrChx
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpFrChx;
#define bmpFrChx_WIDTH     (110)
#define bmpFrChx_HEIGHT    (110)
#define bmpFrChx_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGrChx
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGrChx;
#define bmpGrChx_WIDTH     (110)
#define bmpGrChx_HEIGHT    (110)
#define bmpGrChx_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpLasagna
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpLasagna;
#define bmpLasagna_WIDTH     (110)
#define bmpLasagna_HEIGHT    (110)
#define bmpLasagna_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpMPizza
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpMPizza;
#define bmpMPizza_WIDTH     (110)
#define bmpMPizza_HEIGHT    (110)
#define bmpMPizza_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpQuesd
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpQuesd;
#define bmpQuesd_WIDTH     (110)
#define bmpQuesd_HEIGHT    (110)
#define bmpQuesd_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpSteak
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpSteak;
#define bmpSteak_WIDTH     (110)
#define bmpSteak_HEIGHT    (110)
#define bmpSteak_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpTilipia
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpTilipia;
#define bmpTilipia_WIDTH     (110)
#define bmpTilipia_HEIGHT    (110)
#define bmpTilipia_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpVegPizza
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpVegPizza;
#define bmpVegPizza_WIDTH     (110)
#define bmpVegPizza_HEIGHT    (110)
#define bmpVegPizza_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcabbage
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcabbage;
#define bmpcabbage_WIDTH     (110)
#define bmpcabbage_HEIGHT    (110)
#define bmpcabbage_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpspagmeat
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpspagmeat;
#define bmpspagmeat_WIDTH     (110)
#define bmpspagmeat_HEIGHT    (110)
#define bmpspagmeat_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpspagmeatt
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpspagmeatt;
#define bmpspagmeatt_WIDTH     (110)
#define bmpspagmeatt_HEIGHT    (110)
#define bmpspagmeatt_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpChocMilk
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpChocMilk;
#define bmpChocMilk_WIDTH     (110)
#define bmpChocMilk_HEIGHT    (110)
#define bmpChocMilk_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpCoffee
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpCoffee;
#define bmpCoffee_WIDTH     (110)
#define bmpCoffee_HEIGHT    (110)
#define bmpCoffee_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpDcoffee
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpDcoffee;
#define bmpDcoffee_WIDTH     (110)
#define bmpDcoffee_HEIGHT    (110)
#define bmpDcoffee_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpHotTea
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpHotTea;
#define bmpHotTea_WIDTH     (110)
#define bmpHotTea_HEIGHT    (110)
#define bmpHotTea_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpIcedTea
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpIcedTea;
#define bmpIcedTea_WIDTH     (110)
#define bmpIcedTea_HEIGHT    (110)
#define bmpIcedTea_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpLem
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpLem;
#define bmpLem_WIDTH     (110)
#define bmpLem_HEIGHT    (110)
#define bmpLem_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpSweetTea
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpSweetTea;
#define bmpSweetTea_WIDTH     (110)
#define bmpSweetTea_HEIGHT    (110)
#define bmpSweetTea_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcoke
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcoke;
#define bmpcoke_WIDTH     (110)
#define bmpcoke_HEIGHT    (110)
#define bmpcoke_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpdietcoke
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpdietcoke;
#define bmpdietcoke_WIDTH     (110)
#define bmpdietcoke_HEIGHT    (110)
#define bmpdietcoke_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpdietspri
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpdietspri;
#define bmpdietspri_WIDTH     (110)
#define bmpdietspri_HEIGHT    (110)
#define bmpdietspri_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpgingera
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpgingera;
#define bmpgingera_WIDTH     (110)
#define bmpgingera_HEIGHT    (110)
#define bmpgingera_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpmilk
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpmilk;
#define bmpmilk_WIDTH     (110)
#define bmpmilk_HEIGHT    (110)
#define bmpmilk_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpraspberr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpraspberr;
#define bmpraspberr_WIDTH     (110)
#define bmpraspberr_HEIGHT    (110)
#define bmpraspberr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmprootbeer
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmprootbeer;
#define bmprootbeer_WIDTH     (110)
#define bmprootbeer_HEIGHT    (110)
#define bmprootbeer_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpsprite
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpsprite;
#define bmpsprite_WIDTH     (110)
#define bmpsprite_HEIGHT    (110)
#define bmpsprite_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpwater
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpwater;
#define bmpwater_WIDTH     (110)
#define bmpwater_HEIGHT    (110)
#define bmpwater_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpFruitSal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpFruitSal;
#define bmpFruitSal_WIDTH     (110)
#define bmpFruitSal_HEIGHT    (110)
#define bmpFruitSal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGardenBu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGardenBu;
#define bmpGardenBu_WIDTH     (110)
#define bmpGardenBu_HEIGHT    (110)
#define bmpGardenBu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGrilledL
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGrilledL;
#define bmpGrilledL_WIDTH     (110)
#define bmpGrilledL_HEIGHT    (110)
#define bmpGrilledL_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpVegsalad
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpVegsalad;
#define bmpVegsalad_WIDTH     (110)
#define bmpVegsalad_HEIGHT    (110)
#define bmpVegsalad_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpbaconSal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpbaconSal;
#define bmpbaconSal_WIDTH     (110)
#define bmpbaconSal_HEIGHT    (110)
#define bmpbaconSal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpblackene
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpblackene;
#define bmpblackene_WIDTH     (110)
#define bmpblackene_HEIGHT    (110)
#define bmpblackene_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfetafruc
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfetafruc;
#define bmpfetafruc_WIDTH     (110)
#define bmpfetafruc_HEIGHT    (110)
#define bmpfetafruc_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfriedchi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfriedchi;
#define bmpfriedchi_WIDTH     (110)
#define bmpfriedchi_HEIGHT    (110)
#define bmpfriedchi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmphamsalad
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmphamsalad;
#define bmphamsalad_WIDTH     (110)
#define bmphamsalad_HEIGHT    (110)
#define bmphamsalad_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmplemonshr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmplemonshr;
#define bmplemonshr_WIDTH     (110)
#define bmplemonshr_HEIGHT    (110)
#define bmplemonshr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpspicyveg
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpspicyveg;
#define bmpspicyveg_WIDTH     (110)
#define bmpspicyveg_HEIGHT    (110)
#define bmpspicyveg_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpsteaksal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpsteaksal;
#define bmpsteaksal_WIDTH     (110)
#define bmpsteaksal_HEIGHT    (110)
#define bmpsteaksal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmptacosald
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmptacosald;
#define bmptacosald_WIDTH     (110)
#define bmptacosald_HEIGHT    (110)
#define bmptacosald_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBlackTil
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBlackTil;
#define bmpBlackTil_WIDTH     (110)
#define bmpBlackTil_HEIGHT    (110)
#define bmpBlackTil_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGardensw
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGardensw;
#define bmpGardensw_WIDTH     (110)
#define bmpGardensw_HEIGHT    (110)
#define bmpGardensw_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpGrillChe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpGrillChe;
#define bmpGrillChe_WIDTH     (110)
#define bmpGrillChe_HEIGHT    (110)
#define bmpGrillChe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpReuben
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpReuben;
#define bmpReuben_WIDTH     (110)
#define bmpReuben_HEIGHT    (110)
#define bmpReuben_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpTurkeyCl
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpTurkeyCl;
#define bmpTurkeyCl_WIDTH     (110)
#define bmpTurkeyCl_HEIGHT    (110)
#define bmpTurkeyCl_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpbuffaloc
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpbuffaloc;
#define bmpbuffaloc_WIDTH     (110)
#define bmpbuffaloc_HEIGHT    (110)
#define bmpbuffaloc_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcajunChi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcajunChi;
#define bmpcajunChi_WIDTH     (110)
#define bmpcajunChi_HEIGHT    (110)
#define bmpcajunChi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpcorndog
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpcorndog;
#define bmpcorndog_WIDTH     (110)
#define bmpcorndog_HEIGHT    (110)
#define bmpcorndog_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfriedsta
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfriedsta;
#define bmpfriedsta_WIDTH     (110)
#define bmpfriedsta_HEIGHT    (110)
#define bmpfriedsta_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpgrillChi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpgrillChi;
#define bmpgrillChi_WIDTH     (110)
#define bmpgrillChi_HEIGHT    (110)
#define bmpgrillChi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpgrilledS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpgrilledS;
#define bmpgrilledS_WIDTH     (110)
#define bmpgrilledS_HEIGHT    (110)
#define bmpgrilledS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpsmothere
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpsmothere;
#define bmpsmothere_WIDTH     (110)
#define bmpsmothere_HEIGHT    (110)
#define bmpsmothere_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpsteakwra
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpsteakwra;
#define bmpsteakwra_WIDTH     (110)
#define bmpsteakwra_HEIGHT    (110)
#define bmpsteakwra_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpveggieRe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpveggieRe;
#define bmpveggieRe_WIDTH     (110)
#define bmpveggieRe_HEIGHT    (110)
#define bmpveggieRe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpveggiemu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpveggiemu;
#define bmpveggiemu_WIDTH     (110)
#define bmpveggiemu_HEIGHT    (110)
#define bmpveggiemu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBBroccol
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBBroccol;
#define bmpBBroccol_WIDTH     (110)
#define bmpBBroccol_HEIGHT    (110)
#define bmpBBroccol_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBaked
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBaked;
#define bmpBaked_WIDTH     (110)
#define bmpBaked_HEIGHT    (110)
#define bmpBaked_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpColeslaw
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpColeslaw;
#define bmpColeslaw_WIDTH     (110)
#define bmpColeslaw_HEIGHT    (110)
#define bmpColeslaw_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpFries
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpFries;
#define bmpFries_WIDTH     (110)
#define bmpFries_HEIGHT    (110)
#define bmpFries_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpfruit
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpfruit;
#define bmpfruit_WIDTH     (110)
#define bmpfruit_HEIGHT    (110)
#define bmpfruit_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpmashed
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpmashed;
#define bmpmashed_WIDTH     (110)
#define bmpmashed_HEIGHT    (110)
#define bmpmashed_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmponion
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmponion;
#define bmponion_WIDTH     (110)
#define bmponion_HEIGHT    (110)
#define bmponion_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpBanana
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpBanana;
#define bmpBanana_WIDTH     (110)
#define bmpBanana_HEIGHT    (110)
#define bmpBanana_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpberry
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpberry;
#define bmpberry_WIDTH     (110)
#define bmpberry_HEIGHT    (110)
#define bmpberry_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpchoc
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpchoc;
#define bmpchoc_WIDTH     (110)
#define bmpchoc_HEIGHT    (110)
#define bmpchoc_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmporeo
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmporeo;
#define bmporeo_WIDTH     (110)
#define bmporeo_HEIGHT    (110)
#define bmporeo_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpsmpean
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpsmpean;
#define bmpsmpean_WIDTH     (110)
#define bmpsmpean_HEIGHT    (110)
#define bmpsmpean_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpvan
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpvan;
#define bmpvan_WIDTH     (110)
#define bmpvan_HEIGHT    (110)
#define bmpvan_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpChickenS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpChickenS;
#define bmpChickenS_WIDTH     (110)
#define bmpChickenS_HEIGHT    (110)
#define bmpChickenS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpFishsoup
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpFishsoup;
#define bmpFishsoup_WIDTH     (110)
#define bmpFishsoup_HEIGHT    (110)
#define bmpFishsoup_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpHamandBe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpHamandBe;
#define bmpHamandBe_WIDTH     (110)
#define bmpHamandBe_HEIGHT    (110)
#define bmpHamandBe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpItalianS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpItalianS;
#define bmpItalianS_WIDTH     (110)
#define bmpItalianS_HEIGHT    (110)
#define bmpItalianS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpbroccoli
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpbroccoli;
#define bmpbroccoli_WIDTH     (110)
#define bmpbroccoli_HEIGHT    (110)
#define bmpbroccoli_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpgumbol
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpgumbol;
#define bmpgumbol_WIDTH     (110)
#define bmpgumbol_HEIGHT    (110)
#define bmpgumbol_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpjambalay
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpjambalay;
#define bmpjambalay_WIDTH     (110)
#define bmpjambalay_HEIGHT    (110)
#define bmpjambalay_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpmisomush
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpmisomush;
#define bmpmisomush_WIDTH     (110)
#define bmpmisomush_HEIGHT    (110)
#define bmpmisomush_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpspicyVeg
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpspicyVeg;
#define bmpspicyVeg_WIDTH     (110)
#define bmpspicyVeg_HEIGHT    (110)
#define bmpspicyVeg_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmptomatoSp
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmptomatoSp;
#define bmptomatoSp_WIDTH     (110)
#define bmptomatoSp_HEIGHT    (110)
#define bmptomatoSp_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: bmpendofuni
 * Description:  267x220 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL bmpendofuni;
#define bmpendofuni_WIDTH     (267)
#define bmpendofuni_HEIGHT    (220)
#define bmpendofuni_SIZE      (117486)
/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * Font Structure
 * Label: HobbitonBrushhandRegular20
 * Description:  Height: 42 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL HobbitonBrushhandRegular20;
#define HobbitonBrushhandRegular20_SIZE    (7024)
/*********************************
 * Font Structure
 * Label: MicrosoftSansSerifRegular11
 * Description:  Height: 14 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL MicrosoftSansSerifRegular11;
#define MicrosoftSansSerifRegular11_SIZE    (1760)
/*********************************
 * Font Structure
 * Label: HobbitonBrushhandRegular32
 * Description:  Height: 66 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL HobbitonBrushhandRegular32;
#define HobbitonBrushhandRegular32_SIZE    (14578)
/*********************************
 * Font Structure
 * Label: MicrosoftSansSerifRegular17
 * Description:  Height: 20 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL MicrosoftSansSerifRegular17;
#define MicrosoftSansSerifRegular17_SIZE    (3548)
/*********************************
 * Font Structure
 * Label: HobbitonBrushhandRegular26
 * Description:  Height: 54 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL HobbitonBrushhandRegular26;
#define HobbitonBrushhandRegular26_SIZE    (10324)
/*********************************
 * Font Structure
 * Label: HobbitonBrushhandRegular28
 * Description:  Height: 58 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL HobbitonBrushhandRegular28;
#define HobbitonBrushhandRegular28_SIZE    (11698)
/*********************************
 * Font Structure
 * Label: MicrosoftSansSerifRegular14
 * Description:  Height: 16 pixels, range: ' ' to '~'
 ***********************************/
extern const FONT_EXTERNAL MicrosoftSansSerifRegular14;
#define MicrosoftSansSerifRegular14_SIZE    (2340)
#endif

