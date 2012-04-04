#ifndef	_VGDD_SCREENS_H_
#define	 _VGDD_SCREENS_H_
WORD VGDD_MenuScreens_MsgCallback(WORD objMsg, OBJ_HEADER *pObj, GOL_MSG *pMsg);
WORD VGDD_MenuScreens_DrawCallback(void);
extern GOL_SCHEME* GOLScheme_ButtonTx;
void CreateScheme_ButtonTx(void);
extern GOL_SCHEME* GOLScheme_WinSch;
void CreateScheme_WinSch(void);
extern GOL_SCHEME* GOLScheme_DescText;
void CreateScheme_DescText(void);
extern GOL_SCHEME* GOLScheme_MainName;
void CreateScheme_MainName(void);
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
extern const IMAGE_EXTERNAL bmpendofuni;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Title\endofuni.bmp 388x264 24BPP
void CreateMainMenu(void);
#define ID_MainMenu_Picture1   1
#define ID_MainMenu_Button1   2
#define ID_MainMenu_Button2   3
#define ID_MainMenu_EditBox1   4
#define ID_MainMenu_Button3   5
#define ID_MainMenu_StaticText1   6
#define ID_MainMenu_EditBox2   7
#define ID_MainMenu_StaticText2   8

void CreateFoodMenu(void);
#define ID_FoodMenu_Window1   9
#define ID_FoodMenu_Button1   10
#define ID_FoodMenu_Button2   11
#define ID_FoodMenu_Button3   12
#define ID_FoodMenu_Button4   13
#define ID_FoodMenu_Button5   14
#define ID_FoodMenu_Button6   15
#define ID_FoodMenu_Button7   16
#define ID_FoodMenu_Button8   17
#define ID_FoodMenu_Button9   18

void CreateAppetizerList(void);
#define ID_AppetizerList_Window1   19
#define ID_AppetizerList_Button1   20
#define ID_AppetizerList_Button2   21
#define ID_AppetizerList_Button3   22
#define ID_AppetizerList_Button4   23
#define ID_AppetizerList_Button5   24
#define ID_AppetizerList_Button6   25
#define ID_AppetizerList_Button7   26
#define ID_AppetizerList_Button8   27
#define ID_AppetizerList_Button9   28
#define ID_AppetizerList_Button10   29
#define ID_AppetizerList_Button11   30
#define ID_AppetizerList_Button12   31

void CreateSoupList(void);
#define ID_SoupList_Window1   32
#define ID_SoupList_Button1   33
#define ID_SoupList_Button2   34
#define ID_SoupList_Button3   35
#define ID_SoupList_Button4   36
#define ID_SoupList_Button5   37
#define ID_SoupList_Button6   38
#define ID_SoupList_Button7   39
#define ID_SoupList_Button8   40
#define ID_SoupList_Button9   41
#define ID_SoupList_Button10   42
#define ID_SoupList_Button11   43
#define ID_SoupList_Button12   44

void CreateSoupChickenNoodle(void);
#define ID_SoupChickenNoodle_Window1   45
#define ID_SoupChickenNoodle_Picture1   46
#define ID_SoupChickenNoodle_EditBox1   47
#define ID_SoupChickenNoodle_Button1   48
#define ID_SoupChickenNoodle_Button8   49
#define ID_SoupChickenNoodle_Button3   50
#define ID_SoupChickenNoodle_Button4   51
#define ID_SoupChickenNoodle_Button5   52
#define ID_SoupChickenNoodle_Button6   53

void CreateSoupJambalaya(void);
#define ID_SoupJambalaya_Window1   54
#define ID_SoupJambalaya_Picture1   55
#define ID_SoupJambalaya_EditBox1   56
#define ID_SoupJambalaya_Button1   57
#define ID_SoupJambalaya_Button8   58
#define ID_SoupJambalaya_Button3   59
#define ID_SoupJambalaya_Button4   60
#define ID_SoupJambalaya_Button5   61
#define ID_SoupJambalaya_Button6   62

void CreateSoupSpicyVegetable(void);
#define ID_SoupSpicyVegetable_Window1   63
#define ID_SoupSpicyVegetable_Picture1   64
#define ID_SoupSpicyVegetable_EditBox1   65
#define ID_SoupSpicyVegetable_Button1   66
#define ID_SoupSpicyVegetable_Button8   67
#define ID_SoupSpicyVegetable_Button3   68
#define ID_SoupSpicyVegetable_Button4   69
#define ID_SoupSpicyVegetable_Button5   70
#define ID_SoupSpicyVegetable_Button6   71

void CreateSoupsCheesyBroccoli(void);
#define ID_SoupsCheesyBroccoli_Window1   72
#define ID_SoupsCheesyBroccoli_Picture1   73
#define ID_SoupsCheesyBroccoli_EditBox1   74
#define ID_SoupsCheesyBroccoli_Button1   75
#define ID_SoupsCheesyBroccoli_Button8   76
#define ID_SoupsCheesyBroccoli_Button3   77
#define ID_SoupsCheesyBroccoli_Button4   78
#define ID_SoupsCheesyBroccoli_Button5   79
#define ID_SoupsCheesyBroccoli_Button6   80

void CreateSoupCreamyTomato(void);
#define ID_SoupCreamyTomato_Window1   81
#define ID_SoupCreamyTomato_Picture1   82
#define ID_SoupCreamyTomato_EditBox1   83
#define ID_SoupCreamyTomato_Button1   84
#define ID_SoupCreamyTomato_Button8   85
#define ID_SoupCreamyTomato_Button3   86
#define ID_SoupCreamyTomato_Button4   87
#define ID_SoupCreamyTomato_Button5   88
#define ID_SoupCreamyTomato_Button6   89

void CreateSoupBean(void);
#define ID_SoupBean_Window1   90
#define ID_SoupBean_Picture1   91
#define ID_SoupBean_EditBox1   92
#define ID_SoupBean_Button1   93
#define ID_SoupBean_Button8   94
#define ID_SoupBean_Button3   95
#define ID_SoupBean_Button4   96
#define ID_SoupBean_Button5   97
#define ID_SoupBean_Button6   98

void CreateSoupItalianWedding(void);
#define ID_SoupItalianWedding_Window1   99
#define ID_SoupItalianWedding_Picture1   100
#define ID_SoupItalianWedding_EditBox1   101
#define ID_SoupItalianWedding_Button1   102
#define ID_SoupItalianWedding_Button8   103
#define ID_SoupItalianWedding_Button3   104
#define ID_SoupItalianWedding_Button4   105
#define ID_SoupItalianWedding_Button5   106
#define ID_SoupItalianWedding_Button6   107

void CreateGumboSoup(void);
#define ID_GumboSoup_Window1   108
#define ID_GumboSoup_Picture1   109
#define ID_GumboSoup_EditBox1   110
#define ID_GumboSoup_Button1   111
#define ID_GumboSoup_Button8   112
#define ID_GumboSoup_Button3   113
#define ID_GumboSoup_Button4   114
#define ID_GumboSoup_Button5   115
#define ID_GumboSoup_Button6   116

void CreateSoupFish(void);
#define ID_SoupFish_Window1   117
#define ID_SoupFish_Picture1   118
#define ID_SoupFish_EditBox1   119
#define ID_SoupFish_Button1   120
#define ID_SoupFish_Button8   121
#define ID_SoupFish_Button3   122
#define ID_SoupFish_Button4   123
#define ID_SoupFish_Button5   124
#define ID_SoupFish_Button6   125

void CreateSoupCreamyMushroom(void);
#define ID_SoupCreamyMushroom_Window1   126
#define ID_SoupCreamyMushroom_Picture1   127
#define ID_SoupCreamyMushroom_EditBox1   128
#define ID_SoupCreamyMushroom_Button1   129
#define ID_SoupCreamyMushroom_Button8   130
#define ID_SoupCreamyMushroom_Button3   131
#define ID_SoupCreamyMushroom_Button4   132
#define ID_SoupCreamyMushroom_Button5   133
#define ID_SoupCreamyMushroom_Button6   134

void CreateSandwichesList(void);
#define ID_SandwichesList_Window1   135
#define ID_SandwichesList_Button1   136
#define ID_SandwichesList_Button3   137
#define ID_SandwichesList_Button4   138
#define ID_SandwichesList_Button5   139
#define ID_SandwichesList_Button6   140
#define ID_SandwichesList_Button7   141
#define ID_SandwichesList_Button8   142
#define ID_SandwichesList_Button9   143
#define ID_SandwichesList_Button10   144
#define ID_SandwichesList_Button12   145

void CreateSandwichesList2(void);
#define ID_SandwichesList2_Window1   146
#define ID_SandwichesList2_Button1   147
#define ID_SandwichesList2_Button3   148
#define ID_SandwichesList2_Button5   149
#define ID_SandwichesList2_Button6   150
#define ID_SandwichesList2_Button7   151
#define ID_SandwichesList2_Button8   152
#define ID_SandwichesList2_Button9   153
#define ID_SandwichesList2_Button10   154
#define ID_SandwichesList2_Button12   155
#define ID_SandwichesList2_Button11   156
#define ID_SandwichesList2_Button4   157

void CreateAppetFriedPickles(void);
#define ID_AppetFriedPickles_Window1   158
#define ID_AppetFriedPickles_Picture1   159
#define ID_AppetFriedPickles_EditBox1   160
#define ID_AppetFriedPickles_Button1   161
#define ID_AppetFriedPickles_Button8   162
#define ID_AppetFriedPickles_Button3   163
#define ID_AppetFriedPickles_Button4   164
#define ID_AppetFriedPickles_Button5   165
#define ID_AppetFriedPickles_Button6   166

void CreateAppetCheeseStick(void);
#define ID_AppetCheeseStick_Window1   167
#define ID_AppetCheeseStick_AppetCheeseSticks   168
#define ID_AppetCheeseStick_EditBox1   169
#define ID_AppetCheeseStick_Button1   170
#define ID_AppetCheeseStick_Button8   171
#define ID_AppetCheeseStick_Button3   172
#define ID_AppetCheeseStick_Button4   173
#define ID_AppetCheeseStick_Button5   174
#define ID_AppetCheeseStick_Button6   175

void CreateAppetChiliFrie(void);
#define ID_AppetChiliFrie_Window1   176
#define ID_AppetChiliFrie_AppetChiliFries   177
#define ID_AppetChiliFrie_EditBox1   178
#define ID_AppetChiliFrie_Button1   179
#define ID_AppetChiliFrie_Button8   180
#define ID_AppetChiliFrie_Button3   181
#define ID_AppetChiliFrie_Button4   182
#define ID_AppetChiliFrie_Button5   183
#define ID_AppetChiliFrie_Button6   184

void CreateAppetFairFrie(void);
#define ID_AppetFairFrie_Window1   185
#define ID_AppetFairFrie_AppetFairFries   186
#define ID_AppetFairFrie_EditBox1   187
#define ID_AppetFairFrie_Button1   188
#define ID_AppetFairFrie_Button8   189
#define ID_AppetFairFrie_Button3   190
#define ID_AppetFairFrie_Button4   191
#define ID_AppetFairFrie_Button5   192
#define ID_AppetFairFrie_Button6   193

void CreateAppetGarlicFairFries(void);
#define ID_AppetGarlicFairFries_Window1   194
#define ID_AppetGarlicFairFries_Picture1   195
#define ID_AppetGarlicFairFries_EditBox1   196
#define ID_AppetGarlicFairFries_Button1   197
#define ID_AppetGarlicFairFries_Button8   198
#define ID_AppetGarlicFairFries_Button3   199
#define ID_AppetGarlicFairFries_Button4   200
#define ID_AppetGarlicFairFries_Button5   201
#define ID_AppetGarlicFairFries_Button6   202

void CreateAppetCarrotFries(void);
#define ID_AppetCarrotFries_Window1   203
#define ID_AppetCarrotFries_Picture1   204
#define ID_AppetCarrotFries_EditBox1   205
#define ID_AppetCarrotFries_Button1   206
#define ID_AppetCarrotFries_Button8   207
#define ID_AppetCarrotFries_Button3   208
#define ID_AppetCarrotFries_Button4   209
#define ID_AppetCarrotFries_Button5   210
#define ID_AppetCarrotFries_Button6   211

void CreateAppetFriedGreenBeans(void);
#define ID_AppetFriedGreenBeans_Window1   212
#define ID_AppetFriedGreenBeans_Picture1   213
#define ID_AppetFriedGreenBeans_EditBox1   214
#define ID_AppetFriedGreenBeans_Button1   215
#define ID_AppetFriedGreenBeans_Button8   216
#define ID_AppetFriedGreenBeans_Button3   217
#define ID_AppetFriedGreenBeans_Button4   218
#define ID_AppetFriedGreenBeans_Button5   219
#define ID_AppetFriedGreenBeans_Button6   220

void CreateAppetMexicanNachos(void);
#define ID_AppetMexicanNachos_Window1   221
#define ID_AppetMexicanNachos_Picture1   222
#define ID_AppetMexicanNachos_EditBox1   223
#define ID_AppetMexicanNachos_Button1   224
#define ID_AppetMexicanNachos_Button8   225
#define ID_AppetMexicanNachos_Button3   226
#define ID_AppetMexicanNachos_Button4   227
#define ID_AppetMexicanNachos_Button5   228
#define ID_AppetMexicanNachos_Button6   229

void CreateAppetSpicyNachos(void);
#define ID_AppetSpicyNachos_Window1   230
#define ID_AppetSpicyNachos_Picture1   231
#define ID_AppetSpicyNachos_EditBox1   232
#define ID_AppetSpicyNachos_Button1   233
#define ID_AppetSpicyNachos_Button8   234
#define ID_AppetSpicyNachos_Button3   235
#define ID_AppetSpicyNachos_Button4   236
#define ID_AppetSpicyNachos_Button5   237
#define ID_AppetSpicyNachos_Button6   238

void CreateAppetORings(void);
#define ID_AppetORings_Window1   239
#define ID_AppetORings_Picture1   240
#define ID_AppetORings_EditBox1   241
#define ID_AppetORings_Button1   242
#define ID_AppetORings_Button8   243
#define ID_AppetORings_Button3   244
#define ID_AppetORings_Button4   245
#define ID_AppetORings_Button5   246
#define ID_AppetORings_Button6   247

void CreateSandTurkeyClub(void);
#define ID_SandTurkeyClub_Window1   248
#define ID_SandTurkeyClub_Picture1   249
#define ID_SandTurkeyClub_EditBox1   250
#define ID_SandTurkeyClub_Button8   251
#define ID_SandTurkeyClub_Button3   252
#define ID_SandTurkeyClub_Button4   253
#define ID_SandTurkeyClub_Button5   254
#define ID_SandTurkeyClub_Button6   255

void CreateSandReuben(void);
#define ID_SandReuben_Window1   256
#define ID_SandReuben_Picture1   257
#define ID_SandReuben_EditBox1   258
#define ID_SandReuben_Button8   259
#define ID_SandReuben_Button3   260
#define ID_SandReuben_Button4   261
#define ID_SandReuben_Button5   262
#define ID_SandReuben_Button6   263

void CreateSandVeggieReuben(void);
#define ID_SandVeggieReuben_Window1   264
#define ID_SandVeggieReuben_Picture1   265
#define ID_SandVeggieReuben_EditBox1   266
#define ID_SandVeggieReuben_Button8   267
#define ID_SandVeggieReuben_Button3   268
#define ID_SandVeggieReuben_Button4   269
#define ID_SandVeggieReuben_Button5   270
#define ID_SandVeggieReuben_Button6   271

void CreateSandSmothered(void);
#define ID_SandSmothered_Window1   272
#define ID_SandSmothered_Picture1   273
#define ID_SandSmothered_EditBox1   274
#define ID_SandSmothered_Button8   275
#define ID_SandSmothered_Button3   276
#define ID_SandSmothered_Button4   277
#define ID_SandSmothered_Button5   278
#define ID_SandSmothered_Button6   279

void CreateSandSmotheredBuffalo(void);
#define ID_SandSmotheredBuffalo_Window1   280
#define ID_SandSmotheredBuffalo_Picture1   281
#define ID_SandSmotheredBuffalo_EditBox1   282
#define ID_SandSmotheredBuffalo_Button8   283
#define ID_SandSmotheredBuffalo_Button3   284
#define ID_SandSmotheredBuffalo_Button4   285
#define ID_SandSmotheredBuffalo_Button5   286
#define ID_SandSmotheredBuffalo_Button6   287

void CreateSandCornDog(void);
#define ID_SandCornDog_Window1   288
#define ID_SandCornDog_Picture1   289
#define ID_SandCornDog_EditBox1   290
#define ID_SandCornDog_Button8   291
#define ID_SandCornDog_Button3   292
#define ID_SandCornDog_Button4   293
#define ID_SandCornDog_Button5   294
#define ID_SandCornDog_Button6   295

void CreateSandSteakInAWrap(void);
#define ID_SandSteakInAWrap_Window1   296
#define ID_SandSteakInAWrap_Picture1   297
#define ID_SandSteakInAWrap_EditBox1   298
#define ID_SandSteakInAWrap_Button8   299
#define ID_SandSteakInAWrap_Button3   300
#define ID_SandSteakInAWrap_Button4   301
#define ID_SandSteakInAWrap_Button5   302
#define ID_SandSteakInAWrap_Button6   303

void CreateSandGardenSandwich(void);
#define ID_SandGardenSandwich_Window1   304
#define ID_SandGardenSandwich_Picture1   305
#define ID_SandGardenSandwich_EditBox1   306
#define ID_SandGardenSandwich_Button8   307
#define ID_SandGardenSandwich_Button3   308
#define ID_SandGardenSandwich_Button4   309
#define ID_SandGardenSandwich_Button5   310
#define ID_SandGardenSandwich_Button6   311

void CreateSandGrilledChicken(void);
#define ID_SandGrilledChicken_Window1   312
#define ID_SandGrilledChicken_Picture1   313
#define ID_SandGrilledChicken_EditBox1   314
#define ID_SandGrilledChicken_Button8   315
#define ID_SandGrilledChicken_Button3   316
#define ID_SandGrilledChicken_Button4   317
#define ID_SandGrilledChicken_Button5   318
#define ID_SandGrilledChicken_Button6   319

void CreateSandCajun(void);
#define ID_SandCajun_Window1   320
#define ID_SandCajun_Picture1   321
#define ID_SandCajun_EditBox1   322
#define ID_SandCajun_Button8   323
#define ID_SandCajun_Button3   324
#define ID_SandCajun_Button4   325
#define ID_SandCajun_Button5   326
#define ID_SandCajun_Button6   327

void CreateSandFriedStacker(void);
#define ID_SandFriedStacker_Window1   328
#define ID_SandFriedStacker_Picture1   329
#define ID_SandFriedStacker_EditBox1   330
#define ID_SandFriedStacker_Button8   331
#define ID_SandFriedStacker_Button3   332
#define ID_SandFriedStacker_Button4   333
#define ID_SandFriedStacker_Button5   334
#define ID_SandFriedStacker_Button6   335

void CreateSandGrilledStacker(void);
#define ID_SandGrilledStacker_Window1   336
#define ID_SandGrilledStacker_Picture1   337
#define ID_SandGrilledStacker_EditBox1   338
#define ID_SandGrilledStacker_Button8   339
#define ID_SandGrilledStacker_Button3   340
#define ID_SandGrilledStacker_Button4   341
#define ID_SandGrilledStacker_Button5   342
#define ID_SandGrilledStacker_Button6   343

void CreateSandBlackenedTilapia(void);
#define ID_SandBlackenedTilapia_Window1   344
#define ID_SandBlackenedTilapia_Picture1   345
#define ID_SandBlackenedTilapia_EditBox1   346
#define ID_SandBlackenedTilapia_Button8   347
#define ID_SandBlackenedTilapia_Button3   348
#define ID_SandBlackenedTilapia_Button4   349
#define ID_SandBlackenedTilapia_Button5   350
#define ID_SandBlackenedTilapia_Button6   351

void CreateSandVeggieMushroom(void);
#define ID_SandVeggieMushroom_Window1   352
#define ID_SandVeggieMushroom_Picture1   353
#define ID_SandVeggieMushroom_EditBox1   354
#define ID_SandVeggieMushroom_Button8   355
#define ID_SandVeggieMushroom_Button3   356
#define ID_SandVeggieMushroom_Button4   357
#define ID_SandVeggieMushroom_Button5   358
#define ID_SandVeggieMushroom_Button6   359

void CreateSandGrilledCheese(void);
#define ID_SandGrilledCheese_Window1   360
#define ID_SandGrilledCheese_Picture1   361
#define ID_SandGrilledCheese_EditBox1   362
#define ID_SandGrilledCheese_Button8   363
#define ID_SandGrilledCheese_Button3   364
#define ID_SandGrilledCheese_Button4   365
#define ID_SandGrilledCheese_Button5   366
#define ID_SandGrilledCheese_Button6   367

void CreateBurgerList(void);
#define ID_BurgerList_Window1   368
#define ID_BurgerList_Button1   369
#define ID_BurgerList_Button3   370
#define ID_BurgerList_Button5   371
#define ID_BurgerList_Button7   372
#define ID_BurgerList_Button8   373
#define ID_BurgerList_Button9   374
#define ID_BurgerList_Button10   375
#define ID_BurgerList_Button12   376

void CreateBurgerCheese(void);
#define ID_BurgerCheese_Window1   377
#define ID_BurgerCheese_Picture1   378
#define ID_BurgerCheese_EditBox1   379
#define ID_BurgerCheese_Button8   380
#define ID_BurgerCheese_Button3   381
#define ID_BurgerCheese_Button4   382
#define ID_BurgerCheese_Button5   383
#define ID_BurgerCheese_Button6   384

void CreateBurgerHam(void);
#define ID_BurgerHam_Window1   385
#define ID_BurgerHam_Picture1   386
#define ID_BurgerHam_EditBox1   387
#define ID_BurgerHam_Button8   388
#define ID_BurgerHam_Button3   389
#define ID_BurgerHam_Button4   390
#define ID_BurgerHam_Button5   391
#define ID_BurgerHam_Button6   392

void CreateBurgerPepper(void);
#define ID_BurgerPepper_Window1   393
#define ID_BurgerPepper_Picture1   394
#define ID_BurgerPepper_EditBox1   395
#define ID_BurgerPepper_Button8   396
#define ID_BurgerPepper_Button3   397
#define ID_BurgerPepper_Button4   398
#define ID_BurgerPepper_Button5   399
#define ID_BurgerPepper_Button6   400

void CreateBurgerCajun(void);
#define ID_BurgerCajun_Window1   401
#define ID_BurgerCajun_Picture1   402
#define ID_BurgerCajun_EditBox1   403
#define ID_BurgerCajun_Button8   404
#define ID_BurgerCajun_Button3   405
#define ID_BurgerCajun_Button4   406
#define ID_BurgerCajun_Button5   407
#define ID_BurgerCajun_Button6   408

void CreateBurgerMonster(void);
#define ID_BurgerMonster_Window1   409
#define ID_BurgerMonster_Picture1   410
#define ID_BurgerMonster_EditBox1   411
#define ID_BurgerMonster_Button8   412
#define ID_BurgerMonster_Button3   413
#define ID_BurgerMonster_Button4   414
#define ID_BurgerMonster_Button5   415
#define ID_BurgerMonster_Button6   416

void CreateBurgerMushroom(void);
#define ID_BurgerMushroom_Window1   417
#define ID_BurgerMushroom_Picture1   418
#define ID_BurgerMushroom_EditBox1   419
#define ID_BurgerMushroom_Button8   420
#define ID_BurgerMushroom_Button3   421
#define ID_BurgerMushroom_Button4   422
#define ID_BurgerMushroom_Button5   423
#define ID_BurgerMushroom_Button6   424

void CreateSaladsList1(void);
#define ID_SaladsList1_Window1   425
#define ID_SaladsList1_Button1   426
#define ID_SaladsList1_Button3   427
#define ID_SaladsList1_Button4   428
#define ID_SaladsList1_Button5   429
#define ID_SaladsList1_Button7   430
#define ID_SaladsList1_Button8   431
#define ID_SaladsList1_Button9   432
#define ID_SaladsList1_Button10   433
#define ID_SaladsList1_Button12   434

void CreateSaladList2(void);
#define ID_SaladList2_Window1   435
#define ID_SaladList2_Button1   436
#define ID_SaladList2_Button3   437
#define ID_SaladList2_Button5   438
#define ID_SaladList2_Button7   439
#define ID_SaladList2_Button8   440
#define ID_SaladList2_Button9   441
#define ID_SaladList2_Button10   442
#define ID_SaladList2_Button12   443
#define ID_SaladList2_Button4   444

void CreateSaladVegetable(void);
#define ID_SaladVegetable_Window1   445
#define ID_SaladVegetable_Picture1   446
#define ID_SaladVegetable_EditBox1   447
#define ID_SaladVegetable_Button8   448
#define ID_SaladVegetable_Button3   449
#define ID_SaladVegetable_Button4   450
#define ID_SaladVegetable_Button5   451
#define ID_SaladVegetable_Button6   452

void CreateSaladSpicyVeg(void);
#define ID_SaladSpicyVeg_Window1   453
#define ID_SaladSpicyVeg_Picture1   454
#define ID_SaladSpicyVeg_EditBox1   455
#define ID_SaladSpicyVeg_Button8   456
#define ID_SaladSpicyVeg_Button3   457
#define ID_SaladSpicyVeg_Button4   458
#define ID_SaladSpicyVeg_Button5   459
#define ID_SaladSpicyVeg_Button6   460

void CreateSaladSupremeTaco(void);
#define ID_SaladSupremeTaco_Window1   461
#define ID_SaladSupremeTaco_Picture1   462
#define ID_SaladSupremeTaco_EditBox1   463
#define ID_SaladSupremeTaco_Button8   464
#define ID_SaladSupremeTaco_Button3   465
#define ID_SaladSupremeTaco_Button4   466
#define ID_SaladSupremeTaco_Button5   467
#define ID_SaladSupremeTaco_Button6   468

void CreateSaladLemonShrimp(void);
#define ID_SaladLemonShrimp_Window1   469
#define ID_SaladLemonShrimp_Picture1   470
#define ID_SaladLemonShrimp_EditBox1   471
#define ID_SaladLemonShrimp_Button8   472
#define ID_SaladLemonShrimp_Button3   473
#define ID_SaladLemonShrimp_Button4   474
#define ID_SaladLemonShrimp_Button5   475
#define ID_SaladLemonShrimp_Button6   476

void CreateSaladHam(void);
#define ID_SaladHam_Window1   477
#define ID_SaladHam_Picture1   478
#define ID_SaladHam_EditBox1   479
#define ID_SaladHam_Button8   480
#define ID_SaladHam_Button3   481
#define ID_SaladHam_Button4   482
#define ID_SaladHam_Button5   483
#define ID_SaladHam_Button6   484

void CreateSaladFriedChicken(void);
#define ID_SaladFriedChicken_Window1   485
#define ID_SaladFriedChicken_Picture1   486
#define ID_SaladFriedChicken_EditBox1   487
#define ID_SaladFriedChicken_Button8   488
#define ID_SaladFriedChicken_Button3   489
#define ID_SaladFriedChicken_Button4   490
#define ID_SaladFriedChicken_Button5   491
#define ID_SaladFriedChicken_Button6   492

void CreateSaladSteak(void);
#define ID_SaladSteak_Window1   493
#define ID_SaladSteak_Picture1   494
#define ID_SaladSteak_EditBox1   495
#define ID_SaladSteak_Button8   496
#define ID_SaladSteak_Button3   497
#define ID_SaladSteak_Button4   498
#define ID_SaladSteak_Button5   499
#define ID_SaladSteak_Button6   500

void CreateSaladFruit(void);
#define ID_SaladFruit_Window1   501
#define ID_SaladFruit_Picture1   502
#define ID_SaladFruit_EditBox1   503
#define ID_SaladFruit_Button8   504
#define ID_SaladFruit_Button3   505
#define ID_SaladFruit_Button4   506
#define ID_SaladFruit_Button5   507
#define ID_SaladFruit_Button6   508

void CreateSaladFetaFruit(void);
#define ID_SaladFetaFruit_Window1   509
#define ID_SaladFetaFruit_Picture1   510
#define ID_SaladFetaFruit_EditBox1   511
#define ID_SaladFetaFruit_Button8   512
#define ID_SaladFetaFruit_Button3   513
#define ID_SaladFetaFruit_Button4   514
#define ID_SaladFetaFruit_Button5   515
#define ID_SaladFetaFruit_Button6   516

void CreateSaladBlackenedTil(void);
#define ID_SaladBlackenedTil_Window1   517
#define ID_SaladBlackenedTil_Picture1   518
#define ID_SaladBlackenedTil_EditBox1   519
#define ID_SaladBlackenedTil_Button8   520
#define ID_SaladBlackenedTil_Button3   521
#define ID_SaladBlackenedTil_Button4   522
#define ID_SaladBlackenedTil_Button5   523
#define ID_SaladBlackenedTil_Button6   524

void CreateSaladGarden(void);
#define ID_SaladGarden_Window1   525
#define ID_SaladGarden_Picture1   526
#define ID_SaladGarden_EditBox1   527
#define ID_SaladGarden_Button8   528
#define ID_SaladGarden_Button3   529
#define ID_SaladGarden_Button4   530
#define ID_SaladGarden_Button5   531
#define ID_SaladGarden_Button6   532

void CreateSaladBaconator(void);
#define ID_SaladBaconator_Window1   533
#define ID_SaladBaconator_Picture1   534
#define ID_SaladBaconator_EditBox1   535
#define ID_SaladBaconator_Button8   536
#define ID_SaladBaconator_Button3   537
#define ID_SaladBaconator_Button4   538
#define ID_SaladBaconator_Button5   539
#define ID_SaladBaconator_Button6   540

#define	NUM_VGDD_SCREENS	62
#endif // ifndef _VGDD_SCREENS_H_
