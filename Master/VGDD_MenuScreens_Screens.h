#ifndef	_VGDD_SCREENS_H_
#define	 _VGDD_SCREENS_H_
WORD VGDD_MenuScreens_MsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg);
WORD VGDD_MenuScreens_DrawCallback(void);
extern GOL_SCHEME* GOLScheme_New;
void CreateScheme_New(void);
extern GOL_SCHEME* GOLScheme_New1;
void CreateScheme_New1(void);
extern GOL_SCHEME* GOLScheme_New2;
void CreateScheme_New2(void);
extern const IMAGE_EXTERNAL bmpcheesest;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\cheesest.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpchiliche;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\chiliche.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfriedGre;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\friedGre.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfriedpic;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\friedpic.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpgarlicfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\garlicfr.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpnachos;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\nachos.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpspicynac;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\spicynac.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpjambalay;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\jambalay.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpspicyVeg;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\spicyVeg.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpbroccoli;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\broccoli.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpHamandBe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\HamandBe.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpgumbol;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\gumbol.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpTurkeyCl;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\TurkeyCl.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpReuben;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\Reuben.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpveggieRe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\veggieRe.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpsmothere;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\smothere.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpcajunChi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\cajunChi.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfriedsta;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\friedsta.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpgrilledS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\grilledS.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpcheesebu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\cheesebu.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmphamburge;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\hamburge.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmppepperja;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\pepperja.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpMushroom;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\Mushroom.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmplemonshr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\lemonshr.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfriedchi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\friedchi.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpsteaksal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\steaksal.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpFruitSal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\FruitSal.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpGardenBu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\GardenBu.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpChickenS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\ChickenS.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmptomatoSp;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\tomatoSp.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpItalianS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\ItalianS.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpFishsoup;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\Fishsoup.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpmisomush;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\misomush.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmponirings;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\onirings.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfrenchfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\frenchfr.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpcarrotfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\carrotfr.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpGrillChe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\GrillChe.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpbuffaloc;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\buffaloc.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpcorndog;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\corndog.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpsteakwra;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\steakwra.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpGardensw;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\Gardensw.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpgrillChi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\grillChi.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpCajunBur;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\CajunBur.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpblackene;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\blackene.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpfetafruc;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\fetafruc.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpVegsalad;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\Vegsalad.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmptacosald;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\tacosald.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmphamsalad;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\hamsalad.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpbaconSal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\baconSal.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpveggiemu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\veggiemu.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpMonsterC;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\MonsterC.bmp 110x110 24BPP
extern const IMAGE_EXTERNAL bmpBlackTil;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\BlackTil.bmp 110x110 24BPP
void CreateMainMenu(void);
#define ID_MainMenu_Button1   1
#define ID_MainMenu_Button2   2
#define ID_MainMenu_EditBox1   3
#define ID_MainMenu_Button3   4
#define ID_MainMenu_StaticText1   5

void CreateFoodMenu(void);
#define ID_FoodMenu_Window1   6
#define ID_FoodMenu_Button1   7
#define ID_FoodMenu_Button2   8
#define ID_FoodMenu_Button3   9
#define ID_FoodMenu_Button4   10
#define ID_FoodMenu_Button5   11
#define ID_FoodMenu_Button6   12
#define ID_FoodMenu_Button7   13
#define ID_FoodMenu_Button8   14

void CreateAppetizerList(void);
#define ID_AppetizerList_Window1   15
#define ID_AppetizerList_Button1   16
#define ID_AppetizerList_Button2   17
#define ID_AppetizerList_Button3   18
#define ID_AppetizerList_Button4   19
#define ID_AppetizerList_Button5   20
#define ID_AppetizerList_Button6   21
#define ID_AppetizerList_Button7   22
#define ID_AppetizerList_Button8   23
#define ID_AppetizerList_Button9   24
#define ID_AppetizerList_Button10   25
#define ID_AppetizerList_Button11   26
#define ID_AppetizerList_Button12   27

void CreateSoupList(void);
#define ID_SoupList_Window1   28
#define ID_SoupList_Button1   29
#define ID_SoupList_Button2   30
#define ID_SoupList_Button3   31
#define ID_SoupList_Button4   32
#define ID_SoupList_Button5   33
#define ID_SoupList_Button6   34
#define ID_SoupList_Button7   35
#define ID_SoupList_Button8   36
#define ID_SoupList_Button9   37
#define ID_SoupList_Button10   38
#define ID_SoupList_Button11   39
#define ID_SoupList_Button12   40

void CreateSoupChickenNoodle(void);
#define ID_SoupChickenNoodle_Window1   41
#define ID_SoupChickenNoodle_Picture1   42
#define ID_SoupChickenNoodle_EditBox1   43
#define ID_SoupChickenNoodle_Button1   44
#define ID_SoupChickenNoodle_Button8   45
#define ID_SoupChickenNoodle_Button3   46
#define ID_SoupChickenNoodle_Button4   47

void CreateSoupJambalaya(void);
#define ID_SoupJambalaya_Window1   48
#define ID_SoupJambalaya_Picture1   49
#define ID_SoupJambalaya_EditBox1   50
#define ID_SoupJambalaya_Button1   51
#define ID_SoupJambalaya_Button8   52
#define ID_SoupJambalaya_Button3   53
#define ID_SoupJambalaya_Button4   54

void CreateSoupSpicyVegetable(void);
#define ID_SoupSpicyVegetable_Window1   55
#define ID_SoupSpicyVegetable_Picture1   56
#define ID_SoupSpicyVegetable_EditBox1   57
#define ID_SoupSpicyVegetable_Button1   58
#define ID_SoupSpicyVegetable_Button8   59
#define ID_SoupSpicyVegetable_Button3   60
#define ID_SoupSpicyVegetable_Button4   61

void CreateSoupsCheesyBroccoli(void);
#define ID_SoupsCheesyBroccoli_Window1   62
#define ID_SoupsCheesyBroccoli_Picture1   63
#define ID_SoupsCheesyBroccoli_EditBox1   64
#define ID_SoupsCheesyBroccoli_Button1   65
#define ID_SoupsCheesyBroccoli_Button8   66
#define ID_SoupsCheesyBroccoli_Button3   67
#define ID_SoupsCheesyBroccoli_Button4   68

void CreateSoupCreamyTomato(void);
#define ID_SoupCreamyTomato_Window1   69
#define ID_SoupCreamyTomato_Picture1   70
#define ID_SoupCreamyTomato_EditBox1   71
#define ID_SoupCreamyTomato_Button1   72
#define ID_SoupCreamyTomato_Button8   73
#define ID_SoupCreamyTomato_Button3   74
#define ID_SoupCreamyTomato_Button4   75

void CreateSoupBean(void);
#define ID_SoupBean_Window1   76
#define ID_SoupBean_Picture1   77
#define ID_SoupBean_EditBox1   78
#define ID_SoupBean_Button1   79
#define ID_SoupBean_Button8   80
#define ID_SoupBean_Button3   81
#define ID_SoupBean_Button4   82

void CreateSoupItalianWedding(void);
#define ID_SoupItalianWedding_Window1   83
#define ID_SoupItalianWedding_Picture1   84
#define ID_SoupItalianWedding_EditBox1   85
#define ID_SoupItalianWedding_Button1   86
#define ID_SoupItalianWedding_Button8   87
#define ID_SoupItalianWedding_Button3   88
#define ID_SoupItalianWedding_Button4   89

void CreateGumboSoup(void);
#define ID_GumboSoup_Window1   90
#define ID_GumboSoup_Picture1   91
#define ID_GumboSoup_EditBox1   92
#define ID_GumboSoup_Button1   93
#define ID_GumboSoup_Button8   94
#define ID_GumboSoup_Button3   95
#define ID_GumboSoup_Button4   96

void CreateSoupFish(void);
#define ID_SoupFish_Window1   97
#define ID_SoupFish_Picture1   98
#define ID_SoupFish_EditBox1   99
#define ID_SoupFish_Button1   100
#define ID_SoupFish_Button8   101
#define ID_SoupFish_Button3   102
#define ID_SoupFish_Button4   103

void CreateSoupCreamyMushroom(void);
#define ID_SoupCreamyMushroom_Window1   104
#define ID_SoupCreamyMushroom_Picture1   105
#define ID_SoupCreamyMushroom_EditBox1   106
#define ID_SoupCreamyMushroom_Button1   107
#define ID_SoupCreamyMushroom_Button8   108
#define ID_SoupCreamyMushroom_Button3   109
#define ID_SoupCreamyMushroom_Button4   110

void CreateSandwichesList(void);
#define ID_SandwichesList_Window1   111
#define ID_SandwichesList_Button1   112
#define ID_SandwichesList_Button3   113
#define ID_SandwichesList_Button4   114
#define ID_SandwichesList_Button5   115
#define ID_SandwichesList_Button6   116
#define ID_SandwichesList_Button7   117
#define ID_SandwichesList_Button8   118
#define ID_SandwichesList_Button9   119
#define ID_SandwichesList_Button10   120
#define ID_SandwichesList_Button12   121

void CreateSandwichesList2(void);
#define ID_SandwichesList2_Window1   122
#define ID_SandwichesList2_Button1   123
#define ID_SandwichesList2_Button3   124
#define ID_SandwichesList2_Button5   125
#define ID_SandwichesList2_Button6   126
#define ID_SandwichesList2_Button7   127
#define ID_SandwichesList2_Button8   128
#define ID_SandwichesList2_Button9   129
#define ID_SandwichesList2_Button10   130
#define ID_SandwichesList2_Button12   131
#define ID_SandwichesList2_Button11   132

void CreateAppetFriedPickles(void);
#define ID_AppetFriedPickles_Window1   133
#define ID_AppetFriedPickles_Picture1   134
#define ID_AppetFriedPickles_EditBox1   135
#define ID_AppetFriedPickles_Button1   136
#define ID_AppetFriedPickles_Button8   137
#define ID_AppetFriedPickles_Button3   138
#define ID_AppetFriedPickles_Button4   139

void CreateAppetCheeseStick(void);
#define ID_AppetCheeseStick_Window1   140
#define ID_AppetCheeseStick_AppetCheeseSticks   141
#define ID_AppetCheeseStick_EditBox1   142
#define ID_AppetCheeseStick_Button1   143
#define ID_AppetCheeseStick_Button8   144
#define ID_AppetCheeseStick_Button3   145
#define ID_AppetCheeseStick_Button4   146

void CreateAppetChiliFrie(void);
#define ID_AppetChiliFrie_Window1   147
#define ID_AppetChiliFrie_AppetChiliFries   148
#define ID_AppetChiliFrie_EditBox1   149
#define ID_AppetChiliFrie_Button1   150
#define ID_AppetChiliFrie_Button8   151
#define ID_AppetChiliFrie_Button3   152
#define ID_AppetChiliFrie_Button4   153

void CreateAppetFairFrie(void);
#define ID_AppetFairFrie_Window1   154
#define ID_AppetFairFrie_AppetFairFries   155
#define ID_AppetFairFrie_EditBox1   156
#define ID_AppetFairFrie_Button1   157
#define ID_AppetFairFrie_Button8   158
#define ID_AppetFairFrie_Button3   159
#define ID_AppetFairFrie_Button4   160

void CreateAppetGarlicFairFries(void);
#define ID_AppetGarlicFairFries_Window1   161
#define ID_AppetGarlicFairFries_Picture1   162
#define ID_AppetGarlicFairFries_EditBox1   163
#define ID_AppetGarlicFairFries_Button1   164
#define ID_AppetGarlicFairFries_Button8   165
#define ID_AppetGarlicFairFries_Button3   166
#define ID_AppetGarlicFairFries_Button4   167

void CreateAppetCarrotFries(void);
#define ID_AppetCarrotFries_Window1   168
#define ID_AppetCarrotFries_Picture1   169
#define ID_AppetCarrotFries_EditBox1   170
#define ID_AppetCarrotFries_Button1   171
#define ID_AppetCarrotFries_Button8   172
#define ID_AppetCarrotFries_Button3   173
#define ID_AppetCarrotFries_Button4   174

void CreateAppetFriedGreenBeans(void);
#define ID_AppetFriedGreenBeans_Window1   175
#define ID_AppetFriedGreenBeans_Picture1   176
#define ID_AppetFriedGreenBeans_EditBox1   177
#define ID_AppetFriedGreenBeans_Button1   178
#define ID_AppetFriedGreenBeans_Button8   179
#define ID_AppetFriedGreenBeans_Button3   180
#define ID_AppetFriedGreenBeans_Button4   181

void CreateAppetMexicanNachos(void);
#define ID_AppetMexicanNachos_Window1   182
#define ID_AppetMexicanNachos_Picture1   183
#define ID_AppetMexicanNachos_EditBox1   184
#define ID_AppetMexicanNachos_Button1   185
#define ID_AppetMexicanNachos_Button8   186
#define ID_AppetMexicanNachos_Button3   187
#define ID_AppetMexicanNachos_Button4   188

void CreateAppetSpicyNachos(void);
#define ID_AppetSpicyNachos_Window1   189
#define ID_AppetSpicyNachos_Picture1   190
#define ID_AppetSpicyNachos_EditBox1   191
#define ID_AppetSpicyNachos_Button1   192
#define ID_AppetSpicyNachos_Button8   193
#define ID_AppetSpicyNachos_Button3   194
#define ID_AppetSpicyNachos_Button4   195

void CreateAppetORings(void);
#define ID_AppetORings_Window1   196
#define ID_AppetORings_Picture1   197
#define ID_AppetORings_EditBox1   198
#define ID_AppetORings_Button1   199
#define ID_AppetORings_Button8   200
#define ID_AppetORings_Button3   201
#define ID_AppetORings_Button4   202

void CreateSandTurkeyClub(void);
#define ID_SandTurkeyClub_Window1   203
#define ID_SandTurkeyClub_Picture1   204
#define ID_SandTurkeyClub_EditBox1   205
#define ID_SandTurkeyClub_Button1   206
#define ID_SandTurkeyClub_Button8   207
#define ID_SandTurkeyClub_Button3   208
#define ID_SandTurkeyClub_Button4   209

void CreateSandReuben(void);
#define ID_SandReuben_Window1   210
#define ID_SandReuben_Picture1   211
#define ID_SandReuben_EditBox1   212
#define ID_SandReuben_Button1   213
#define ID_SandReuben_Button8   214
#define ID_SandReuben_Button3   215
#define ID_SandReuben_Button4   216

void CreateSandVeggieReuben(void);
#define ID_SandVeggieReuben_Window1   217
#define ID_SandVeggieReuben_Picture1   218
#define ID_SandVeggieReuben_EditBox1   219
#define ID_SandVeggieReuben_Button1   220
#define ID_SandVeggieReuben_Button8   221
#define ID_SandVeggieReuben_Button3   222
#define ID_SandVeggieReuben_Button4   223

void CreateSandSmothered(void);
#define ID_SandSmothered_Window1   224
#define ID_SandSmothered_Picture1   225
#define ID_SandSmothered_EditBox1   226
#define ID_SandSmothered_Button1   227
#define ID_SandSmothered_Button8   228
#define ID_SandSmothered_Button3   229
#define ID_SandSmothered_Button4   230

void CreateSandSmotheredBuffalo(void);
#define ID_SandSmotheredBuffalo_Window1   231
#define ID_SandSmotheredBuffalo_Picture1   232
#define ID_SandSmotheredBuffalo_EditBox1   233
#define ID_SandSmotheredBuffalo_Button1   234
#define ID_SandSmotheredBuffalo_Button8   235
#define ID_SandSmotheredBuffalo_Button3   236
#define ID_SandSmotheredBuffalo_Button4   237

void CreateSandCornDog(void);
#define ID_SandCornDog_Window1   238
#define ID_SandCornDog_Picture1   239
#define ID_SandCornDog_EditBox1   240
#define ID_SandCornDog_Button1   241
#define ID_SandCornDog_Button8   242
#define ID_SandCornDog_Button3   243
#define ID_SandCornDog_Button4   244

void CreateSandSteakInAWrap(void);
#define ID_SandSteakInAWrap_Window1   245
#define ID_SandSteakInAWrap_Picture1   246
#define ID_SandSteakInAWrap_EditBox1   247
#define ID_SandSteakInAWrap_Button1   248
#define ID_SandSteakInAWrap_Button8   249
#define ID_SandSteakInAWrap_Button3   250
#define ID_SandSteakInAWrap_Button4   251

void CreateSandGardenSandwich(void);
#define ID_SandGardenSandwich_Window1   252
#define ID_SandGardenSandwich_Picture1   253
#define ID_SandGardenSandwich_EditBox1   254
#define ID_SandGardenSandwich_Button1   255
#define ID_SandGardenSandwich_Button8   256
#define ID_SandGardenSandwich_Button3   257
#define ID_SandGardenSandwich_Button4   258

void CreateSandGrilledChicken(void);
#define ID_SandGrilledChicken_Window1   259
#define ID_SandGrilledChicken_Picture1   260
#define ID_SandGrilledChicken_EditBox1   261
#define ID_SandGrilledChicken_Button1   262
#define ID_SandGrilledChicken_Button8   263
#define ID_SandGrilledChicken_Button3   264
#define ID_SandGrilledChicken_Button4   265

void CreateSandCajun(void);
#define ID_SandCajun_Window1   266
#define ID_SandCajun_Picture1   267
#define ID_SandCajun_EditBox1   268
#define ID_SandCajun_Button1   269
#define ID_SandCajun_Button8   270
#define ID_SandCajun_Button3   271
#define ID_SandCajun_Button4   272

void CreateSandFriedStacker(void);
#define ID_SandFriedStacker_Window1   273
#define ID_SandFriedStacker_Picture1   274
#define ID_SandFriedStacker_EditBox1   275
#define ID_SandFriedStacker_Button1   276
#define ID_SandFriedStacker_Button8   277
#define ID_SandFriedStacker_Button3   278
#define ID_SandFriedStacker_Button4   279

void CreateSandGrilledStacker(void);
#define ID_SandGrilledStacker_Window1   280
#define ID_SandGrilledStacker_Picture1   281
#define ID_SandGrilledStacker_EditBox1   282
#define ID_SandGrilledStacker_Button1   283
#define ID_SandGrilledStacker_Button8   284
#define ID_SandGrilledStacker_Button3   285
#define ID_SandGrilledStacker_Button4   286

void CreateSandBlackenedTilapia(void);
#define ID_SandBlackenedTilapia_Window1   287
#define ID_SandBlackenedTilapia_Picture1   288
#define ID_SandBlackenedTilapia_EditBox1   289
#define ID_SandBlackenedTilapia_Button1   290
#define ID_SandBlackenedTilapia_Button8   291
#define ID_SandBlackenedTilapia_Button3   292
#define ID_SandBlackenedTilapia_Button4   293

void CreateSandVeggieMushroom(void);
#define ID_SandVeggieMushroom_Window1   294
#define ID_SandVeggieMushroom_Picture1   295
#define ID_SandVeggieMushroom_EditBox1   296
#define ID_SandVeggieMushroom_Button1   297
#define ID_SandVeggieMushroom_Button8   298
#define ID_SandVeggieMushroom_Button3   299
#define ID_SandVeggieMushroom_Button4   300

void CreateSandGrilledCheese(void);
#define ID_SandGrilledCheese_Window1   301
#define ID_SandGrilledCheese_Picture1   302
#define ID_SandGrilledCheese_EditBox1   303
#define ID_SandGrilledCheese_Button1   304
#define ID_SandGrilledCheese_Button8   305
#define ID_SandGrilledCheese_Button3   306
#define ID_SandGrilledCheese_Button4   307

void CreateBurgerList(void);
#define ID_BurgerList_Window1   308
#define ID_BurgerList_Button1   309
#define ID_BurgerList_Button3   310
#define ID_BurgerList_Button5   311
#define ID_BurgerList_Button7   312
#define ID_BurgerList_Button8   313
#define ID_BurgerList_Button9   314
#define ID_BurgerList_Button10   315
#define ID_BurgerList_Button12   316

void CreateBurgerCheese(void);
#define ID_BurgerCheese_Window1   317
#define ID_BurgerCheese_Picture1   318
#define ID_BurgerCheese_EditBox1   319
#define ID_BurgerCheese_Button1   320
#define ID_BurgerCheese_Button8   321
#define ID_BurgerCheese_Button3   322
#define ID_BurgerCheese_Button4   323

void CreateBurgerHam(void);
#define ID_BurgerHam_Window1   324
#define ID_BurgerHam_Picture1   325
#define ID_BurgerHam_EditBox1   326
#define ID_BurgerHam_Button1   327
#define ID_BurgerHam_Button8   328
#define ID_BurgerHam_Button3   329
#define ID_BurgerHam_Button4   330

void CreateBurgerPepper(void);
#define ID_BurgerPepper_Window1   331
#define ID_BurgerPepper_Picture1   332
#define ID_BurgerPepper_EditBox1   333
#define ID_BurgerPepper_Button1   334
#define ID_BurgerPepper_Button8   335
#define ID_BurgerPepper_Button3   336
#define ID_BurgerPepper_Button4   337

void CreateBurgerCajun(void);
#define ID_BurgerCajun_Window1   338
#define ID_BurgerCajun_Picture1   339
#define ID_BurgerCajun_EditBox1   340
#define ID_BurgerCajun_Button1   341
#define ID_BurgerCajun_Button8   342
#define ID_BurgerCajun_Button3   343
#define ID_BurgerCajun_Button4   344

void CreateBurgerMonster(void);
#define ID_BurgerMonster_Window1   345
#define ID_BurgerMonster_Picture1   346
#define ID_BurgerMonster_EditBox1   347
#define ID_BurgerMonster_Button1   348
#define ID_BurgerMonster_Button8   349
#define ID_BurgerMonster_Button3   350
#define ID_BurgerMonster_Button4   351

void CreateBurgerMushroom(void);
#define ID_BurgerMushroom_Window1   352
#define ID_BurgerMushroom_Picture1   353
#define ID_BurgerMushroom_EditBox1   354
#define ID_BurgerMushroom_Button1   355
#define ID_BurgerMushroom_Button8   356
#define ID_BurgerMushroom_Button3   357
#define ID_BurgerMushroom_Button4   358

void CreateSaladsList1(void);
#define ID_SaladsList1_Window1   359
#define ID_SaladsList1_Button1   360
#define ID_SaladsList1_Button3   361
#define ID_SaladsList1_Button4   362
#define ID_SaladsList1_Button5   363
#define ID_SaladsList1_Button7   364
#define ID_SaladsList1_Button8   365
#define ID_SaladsList1_Button9   366
#define ID_SaladsList1_Button10   367
#define ID_SaladsList1_Button12   368

void CreateSaladList2(void);
#define ID_SaladList2_Window1   369
#define ID_SaladList2_Button1   370
#define ID_SaladList2_Button3   371
#define ID_SaladList2_Button5   372
#define ID_SaladList2_Button7   373
#define ID_SaladList2_Button8   374
#define ID_SaladList2_Button9   375
#define ID_SaladList2_Button10   376
#define ID_SaladList2_Button12   377

void CreateSaladVegetable(void);
#define ID_SaladVegetable_Window1   378
#define ID_SaladVegetable_Picture1   379
#define ID_SaladVegetable_EditBox1   380
#define ID_SaladVegetable_Button1   381
#define ID_SaladVegetable_Button8   382
#define ID_SaladVegetable_Button3   383
#define ID_SaladVegetable_Button4   384

void CreateSaladSpicyVeg(void);
#define ID_SaladSpicyVeg_Window1   385
#define ID_SaladSpicyVeg_Picture1   386
#define ID_SaladSpicyVeg_EditBox1   387
#define ID_SaladSpicyVeg_Button1   388
#define ID_SaladSpicyVeg_Button8   389
#define ID_SaladSpicyVeg_Button3   390
#define ID_SaladSpicyVeg_Button4   391

void CreateSaladSupremeTaco(void);
#define ID_SaladSupremeTaco_Window1   392
#define ID_SaladSupremeTaco_Picture1   393
#define ID_SaladSupremeTaco_EditBox1   394
#define ID_SaladSupremeTaco_Button1   395
#define ID_SaladSupremeTaco_Button8   396
#define ID_SaladSupremeTaco_Button3   397
#define ID_SaladSupremeTaco_Button4   398

void CreateSaladLemonShrimp(void);
#define ID_SaladLemonShrimp_Window1   399
#define ID_SaladLemonShrimp_Picture1   400
#define ID_SaladLemonShrimp_EditBox1   401
#define ID_SaladLemonShrimp_Button1   402
#define ID_SaladLemonShrimp_Button8   403
#define ID_SaladLemonShrimp_Button3   404
#define ID_SaladLemonShrimp_Button4   405

void CreateSaladHam(void);
#define ID_SaladHam_Window1   406
#define ID_SaladHam_Picture1   407
#define ID_SaladHam_EditBox1   408
#define ID_SaladHam_Button1   409
#define ID_SaladHam_Button8   410
#define ID_SaladHam_Button3   411
#define ID_SaladHam_Button4   412

void CreateSaladFriedChicken(void);
#define ID_SaladFriedChicken_Window1   413
#define ID_SaladFriedChicken_Picture1   414
#define ID_SaladFriedChicken_EditBox1   415
#define ID_SaladFriedChicken_Button1   416
#define ID_SaladFriedChicken_Button8   417
#define ID_SaladFriedChicken_Button3   418
#define ID_SaladFriedChicken_Button4   419

void CreateSaladSteak(void);
#define ID_SaladSteak_Window1   420
#define ID_SaladSteak_Picture1   421
#define ID_SaladSteak_EditBox1   422
#define ID_SaladSteak_Button1   423
#define ID_SaladSteak_Button8   424
#define ID_SaladSteak_Button3   425
#define ID_SaladSteak_Button4   426

void CreateSaladFruit(void);
#define ID_SaladFruit_Window1   427
#define ID_SaladFruit_Picture1   428
#define ID_SaladFruit_EditBox1   429
#define ID_SaladFruit_Button1   430
#define ID_SaladFruit_Button8   431
#define ID_SaladFruit_Button3   432
#define ID_SaladFruit_Button4   433

void CreateSaladFetaFruit(void);
#define ID_SaladFetaFruit_Window1   434
#define ID_SaladFetaFruit_Picture1   435
#define ID_SaladFetaFruit_EditBox1   436
#define ID_SaladFetaFruit_Button1   437
#define ID_SaladFetaFruit_Button8   438
#define ID_SaladFetaFruit_Button3   439
#define ID_SaladFetaFruit_Button4   440

void CreateSaladBlackenedTil(void);
#define ID_SaladBlackenedTil_Window1   441
#define ID_SaladBlackenedTil_Picture1   442
#define ID_SaladBlackenedTil_EditBox1   443
#define ID_SaladBlackenedTil_Button1   444
#define ID_SaladBlackenedTil_Button8   445
#define ID_SaladBlackenedTil_Button3   446
#define ID_SaladBlackenedTil_Button4   447

void CreateSaladGarden(void);
#define ID_SaladGarden_Window1   448
#define ID_SaladGarden_Picture1   449
#define ID_SaladGarden_EditBox1   450
#define ID_SaladGarden_Button1   451
#define ID_SaladGarden_Button8   452
#define ID_SaladGarden_Button3   453
#define ID_SaladGarden_Button4   454

void CreateSaladBaconator(void);
#define ID_SaladBaconator_Window1   455
#define ID_SaladBaconator_Picture1   456
#define ID_SaladBaconator_EditBox1   457
#define ID_SaladBaconator_Button1   458
#define ID_SaladBaconator_Button8   459
#define ID_SaladBaconator_Button3   460
#define ID_SaladBaconator_Button4   461

#define	NUM_VGDD_SCREENS	62
#endif // ifndef _VGDD_SCREENS_H_
