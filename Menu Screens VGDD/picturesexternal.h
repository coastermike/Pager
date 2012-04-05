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
#define GRC_CRC32_EXTERNAL_MARKER 0xFA1E4321ul
#define GRC_CRC32_EXTERNAL_ADDR 0x00000000ul

/*****************************************************************************
 * SECTION:  BITMAPS
 *****************************************************************************/

/*********************************
 * Bitmap Structure
 * Label: carrotfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL carrotfr;
#define carrotfr_WIDTH     (110)
#define carrotfr_HEIGHT    (110)
#define carrotfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: cheesest
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL cheesest;
#define cheesest_WIDTH     (110)
#define cheesest_HEIGHT    (110)
#define cheesest_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: chiliche
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL chiliche;
#define chiliche_WIDTH     (110)
#define chiliche_HEIGHT    (110)
#define chiliche_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: frenchfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL frenchfr;
#define frenchfr_WIDTH     (110)
#define frenchfr_HEIGHT    (110)
#define frenchfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: friedGre
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL friedGre;
#define friedGre_WIDTH     (110)
#define friedGre_HEIGHT    (110)
#define friedGre_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: friedpic
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL friedpic;
#define friedpic_WIDTH     (110)
#define friedpic_HEIGHT    (110)
#define friedpic_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: garlicfr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL garlicfr;
#define garlicfr_WIDTH     (110)
#define garlicfr_HEIGHT    (110)
#define garlicfr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: nachos
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL nachos;
#define nachos_WIDTH     (110)
#define nachos_HEIGHT    (110)
#define nachos_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: onirings
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL onirings;
#define onirings_WIDTH     (110)
#define onirings_HEIGHT    (110)
#define onirings_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: spicynac
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL spicynac;
#define spicynac_WIDTH     (110)
#define spicynac_HEIGHT    (110)
#define spicynac_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: CajunBur
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL CajunBur;
#define CajunBur_WIDTH     (110)
#define CajunBur_HEIGHT    (110)
#define CajunBur_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: MonsterC
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL MonsterC;
#define MonsterC_WIDTH     (110)
#define MonsterC_HEIGHT    (110)
#define MonsterC_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Mushroom
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Mushroom;
#define Mushroom_WIDTH     (110)
#define Mushroom_HEIGHT    (110)
#define Mushroom_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: cheesebu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL cheesebu;
#define cheesebu_WIDTH     (110)
#define cheesebu_HEIGHT    (110)
#define cheesebu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: hamburge
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL hamburge;
#define hamburge_WIDTH     (110)
#define hamburge_HEIGHT    (110)
#define hamburge_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: pepperja
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL pepperja;
#define pepperja_WIDTH     (110)
#define pepperja_HEIGHT    (110)
#define pepperja_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Brownie
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Brownie;
#define Brownie_WIDTH     (110)
#define Brownie_HEIGHT    (110)
#define Brownie_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Mousse
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Mousse;
#define Mousse_WIDTH     (110)
#define Mousse_HEIGHT    (110)
#define Mousse_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Strawb
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Strawb;
#define Strawb_WIDTH     (110)
#define Strawb_HEIGHT    (110)
#define Strawb_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Sundae
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Sundae;
#define Sundae_WIDTH     (110)
#define Sundae_HEIGHT    (110)
#define Sundae_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: apple
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL apple;
#define apple_WIDTH     (110)
#define apple_HEIGHT    (110)
#define apple_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: blueberr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL blueberr;
#define blueberr_WIDTH     (110)
#define blueberr_HEIGHT    (110)
#define blueberr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: peanut
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL peanut;
#define peanut_WIDTH     (110)
#define peanut_HEIGHT    (110)
#define peanut_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: redvel
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL redvel;
#define redvel_WIDTH     (110)
#define redvel_HEIGHT    (110)
#define redvel_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: FrChx
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL FrChx;
#define FrChx_WIDTH     (110)
#define FrChx_HEIGHT    (110)
#define FrChx_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: GrChx
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL GrChx;
#define GrChx_WIDTH     (110)
#define GrChx_HEIGHT    (110)
#define GrChx_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Lasagna
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Lasagna;
#define Lasagna_WIDTH     (110)
#define Lasagna_HEIGHT    (110)
#define Lasagna_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: MPizza
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL MPizza;
#define MPizza_WIDTH     (110)
#define MPizza_HEIGHT    (110)
#define MPizza_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Quesd
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Quesd;
#define Quesd_WIDTH     (110)
#define Quesd_HEIGHT    (110)
#define Quesd_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Steak
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Steak;
#define Steak_WIDTH     (110)
#define Steak_HEIGHT    (110)
#define Steak_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Tilipia
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Tilipia;
#define Tilipia_WIDTH     (110)
#define Tilipia_HEIGHT    (110)
#define Tilipia_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: VegPizza
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL VegPizza;
#define VegPizza_WIDTH     (110)
#define VegPizza_HEIGHT    (110)
#define VegPizza_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: cabbage
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL cabbage;
#define cabbage_WIDTH     (110)
#define cabbage_HEIGHT    (110)
#define cabbage_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: spagmeat
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL spagmeat;
#define spagmeat_WIDTH     (110)
#define spagmeat_HEIGHT    (110)
#define spagmeat_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: spagmeatt
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL spagmeatt;
#define spagmeatt_WIDTH     (110)
#define spagmeatt_HEIGHT    (110)
#define spagmeatt_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: FruitSal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL FruitSal;
#define FruitSal_WIDTH     (110)
#define FruitSal_HEIGHT    (110)
#define FruitSal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: GardenBu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL GardenBu;
#define GardenBu_WIDTH     (110)
#define GardenBu_HEIGHT    (110)
#define GardenBu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: GrilledL
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL GrilledL;
#define GrilledL_WIDTH     (110)
#define GrilledL_HEIGHT    (110)
#define GrilledL_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Vegsalad
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Vegsalad;
#define Vegsalad_WIDTH     (110)
#define Vegsalad_HEIGHT    (110)
#define Vegsalad_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: baconSal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL baconSal;
#define baconSal_WIDTH     (110)
#define baconSal_HEIGHT    (110)
#define baconSal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: blackene
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL blackene;
#define blackene_WIDTH     (110)
#define blackene_HEIGHT    (110)
#define blackene_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: fetafruc
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL fetafruc;
#define fetafruc_WIDTH     (110)
#define fetafruc_HEIGHT    (110)
#define fetafruc_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: friedchi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL friedchi;
#define friedchi_WIDTH     (110)
#define friedchi_HEIGHT    (110)
#define friedchi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: hamsalad
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL hamsalad;
#define hamsalad_WIDTH     (110)
#define hamsalad_HEIGHT    (110)
#define hamsalad_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: lemonshr
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL lemonshr;
#define lemonshr_WIDTH     (110)
#define lemonshr_HEIGHT    (110)
#define lemonshr_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: spicyveg
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL spicyveg;
#define spicyveg_WIDTH     (110)
#define spicyveg_HEIGHT    (110)
#define spicyveg_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: steaksal
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL steaksal;
#define steaksal_WIDTH     (110)
#define steaksal_HEIGHT    (110)
#define steaksal_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: tacosald
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL tacosald;
#define tacosald_WIDTH     (110)
#define tacosald_HEIGHT    (110)
#define tacosald_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: BlackTil
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL BlackTil;
#define BlackTil_WIDTH     (110)
#define BlackTil_HEIGHT    (110)
#define BlackTil_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Gardensw
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Gardensw;
#define Gardensw_WIDTH     (110)
#define Gardensw_HEIGHT    (110)
#define Gardensw_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: GrillChe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL GrillChe;
#define GrillChe_WIDTH     (110)
#define GrillChe_HEIGHT    (110)
#define GrillChe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Reuben
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Reuben;
#define Reuben_WIDTH     (110)
#define Reuben_HEIGHT    (110)
#define Reuben_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: TurkeyCl
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL TurkeyCl;
#define TurkeyCl_WIDTH     (110)
#define TurkeyCl_HEIGHT    (110)
#define TurkeyCl_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: buffaloc
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL buffaloc;
#define buffaloc_WIDTH     (110)
#define buffaloc_HEIGHT    (110)
#define buffaloc_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: cajunChi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL cajunChi;
#define cajunChi_WIDTH     (110)
#define cajunChi_HEIGHT    (110)
#define cajunChi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: corndog
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL corndog;
#define corndog_WIDTH     (110)
#define corndog_HEIGHT    (110)
#define corndog_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: friedsta
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL friedsta;
#define friedsta_WIDTH     (110)
#define friedsta_HEIGHT    (110)
#define friedsta_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: grillChi
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL grillChi;
#define grillChi_WIDTH     (110)
#define grillChi_HEIGHT    (110)
#define grillChi_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: grilledS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL grilledS;
#define grilledS_WIDTH     (110)
#define grilledS_HEIGHT    (110)
#define grilledS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: smothere
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL smothere;
#define smothere_WIDTH     (110)
#define smothere_HEIGHT    (110)
#define smothere_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: steakwra
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL steakwra;
#define steakwra_WIDTH     (110)
#define steakwra_HEIGHT    (110)
#define steakwra_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: veggieRe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL veggieRe;
#define veggieRe_WIDTH     (110)
#define veggieRe_HEIGHT    (110)
#define veggieRe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: veggiemu
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL veggiemu;
#define veggiemu_WIDTH     (110)
#define veggiemu_HEIGHT    (110)
#define veggiemu_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: BBroccol
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL BBroccol;
#define BBroccol_WIDTH     (110)
#define BBroccol_HEIGHT    (110)
#define BBroccol_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Baked
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Baked;
#define Baked_WIDTH     (110)
#define Baked_HEIGHT    (110)
#define Baked_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Coleslaw
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Coleslaw;
#define Coleslaw_WIDTH     (110)
#define Coleslaw_HEIGHT    (110)
#define Coleslaw_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Fries
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Fries;
#define Fries_WIDTH     (110)
#define Fries_HEIGHT    (110)
#define Fries_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: fruit
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL fruit;
#define fruit_WIDTH     (110)
#define fruit_HEIGHT    (110)
#define fruit_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: mashed
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL mashed;
#define mashed_WIDTH     (110)
#define mashed_HEIGHT    (110)
#define mashed_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: onion
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL onion;
#define onion_WIDTH     (110)
#define onion_HEIGHT    (110)
#define onion_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: ChickenS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL ChickenS;
#define ChickenS_WIDTH     (110)
#define ChickenS_HEIGHT    (110)
#define ChickenS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: Fishsoup
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL Fishsoup;
#define Fishsoup_WIDTH     (110)
#define Fishsoup_HEIGHT    (110)
#define Fishsoup_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: HamandBe
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL HamandBe;
#define HamandBe_WIDTH     (110)
#define HamandBe_HEIGHT    (110)
#define HamandBe_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: ItalianS
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL ItalianS;
#define ItalianS_WIDTH     (110)
#define ItalianS_HEIGHT    (110)
#define ItalianS_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: broccoli
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL broccoli;
#define broccoli_WIDTH     (110)
#define broccoli_HEIGHT    (110)
#define broccoli_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: gumbol
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL gumbol;
#define gumbol_WIDTH     (110)
#define gumbol_HEIGHT    (110)
#define gumbol_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: jambalay
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL jambalay;
#define jambalay_WIDTH     (110)
#define jambalay_HEIGHT    (110)
#define jambalay_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: misomush
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL misomush;
#define misomush_WIDTH     (110)
#define misomush_HEIGHT    (110)
#define misomush_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: spicyVeg
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL spicyVeg;
#define spicyVeg_WIDTH     (110)
#define spicyVeg_HEIGHT    (110)
#define spicyVeg_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: tomatoSp
 * Description:  110x110 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL tomatoSp;
#define tomatoSp_WIDTH     (110)
#define tomatoSp_HEIGHT    (110)
#define tomatoSp_SIZE      (24206)
/*********************************
 * Bitmap Structure
 * Label: endofuni
 * Description:  388x264 pixels, 16-bits per pixel
 ***********************************/
extern const IMAGE_EXTERNAL endofuni;
#define endofuni_WIDTH     (388)
#define endofuni_HEIGHT    (264)
#define endofuni_SIZE      (204870)
#endif

