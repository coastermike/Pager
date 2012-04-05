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
extern const IMAGE_EXTERNAL cheesest;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\cheesest. 110x110 24BPP
extern const IMAGE_EXTERNAL chiliche;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\chiliche. 110x110 24BPP
extern const IMAGE_EXTERNAL friedGre;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\friedGre. 110x110 24BPP
extern const IMAGE_EXTERNAL friedpic;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\friedpic. 110x110 24BPP
extern const IMAGE_EXTERNAL garlicfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\garlicfr. 110x110 24BPP
extern const IMAGE_EXTERNAL nachos;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\nachos. 110x110 24BPP
extern const IMAGE_EXTERNAL spicynac;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\spicynac. 110x110 24BPP
extern const IMAGE_EXTERNAL jambalay;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\jambalay. 110x110 24BPP
extern const IMAGE_EXTERNAL spicyVeg;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\spicyVeg. 110x110 24BPP
extern const IMAGE_EXTERNAL broccoli;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\broccoli. 110x110 24BPP
extern const IMAGE_EXTERNAL HamandBe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\HamandBe. 110x110 24BPP
extern const IMAGE_EXTERNAL gumbol;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\gumbol. 110x110 24BPP
extern const IMAGE_EXTERNAL TurkeyCl;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\TurkeyCl. 110x110 24BPP
extern const IMAGE_EXTERNAL Reuben;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\Reuben. 110x110 24BPP
extern const IMAGE_EXTERNAL veggieRe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\veggieRe. 110x110 24BPP
extern const IMAGE_EXTERNAL smothere;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\smothere. 110x110 24BPP
extern const IMAGE_EXTERNAL cajunChi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\cajunChi. 110x110 24BPP
extern const IMAGE_EXTERNAL friedsta;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\friedsta. 110x110 24BPP
extern const IMAGE_EXTERNAL grilledS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\grilledS. 110x110 24BPP
extern const IMAGE_EXTERNAL cheesebu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\cheesebu. 110x110 24BPP
extern const IMAGE_EXTERNAL hamburge;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\hamburge. 110x110 24BPP
extern const IMAGE_EXTERNAL pepperja;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\pepperja. 110x110 24BPP
extern const IMAGE_EXTERNAL Mushroom;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\Mushroom. 110x110 24BPP
extern const IMAGE_EXTERNAL lemonshr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\lemonshr. 110x110 24BPP
extern const IMAGE_EXTERNAL friedchi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\friedchi. 110x110 24BPP
extern const IMAGE_EXTERNAL steaksal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\steaksal. 110x110 24BPP
extern const IMAGE_EXTERNAL FruitSal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\FruitSal. 110x110 24BPP
extern const IMAGE_EXTERNAL GardenBu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\GardenBu. 110x110 24BPP
extern const IMAGE_EXTERNAL ChickenS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\ChickenS. 110x110 24BPP
extern const IMAGE_EXTERNAL tomatoSp;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\tomatoSp. 110x110 24BPP
extern const IMAGE_EXTERNAL ItalianS;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\ItalianS. 110x110 24BPP
extern const IMAGE_EXTERNAL Fishsoup;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\Fishsoup. 110x110 24BPP
extern const IMAGE_EXTERNAL misomush;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Soups\misomush. 110x110 24BPP
extern const IMAGE_EXTERNAL onirings;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\onirings. 110x110 24BPP
extern const IMAGE_EXTERNAL frenchfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\frenchfr. 110x110 24BPP
extern const IMAGE_EXTERNAL carrotfr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Appetizers\carrotfr. 110x110 24BPP
extern const IMAGE_EXTERNAL GrillChe;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\GrillChe. 110x110 24BPP
extern const IMAGE_EXTERNAL buffaloc;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\buffaloc. 110x110 24BPP
extern const IMAGE_EXTERNAL corndog;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\corndog. 110x110 24BPP
extern const IMAGE_EXTERNAL steakwra;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\steakwra. 110x110 24BPP
extern const IMAGE_EXTERNAL Gardensw;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\Gardensw. 110x110 24BPP
extern const IMAGE_EXTERNAL grillChi;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\grillChi. 110x110 24BPP
extern const IMAGE_EXTERNAL CajunBur;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\CajunBur. 110x110 24BPP
extern const IMAGE_EXTERNAL blackene;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\blackene. 110x110 24BPP
extern const IMAGE_EXTERNAL fetafruc;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\fetafruc. 110x110 24BPP
extern const IMAGE_EXTERNAL Vegsalad;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\Vegsalad. 110x110 24BPP
extern const IMAGE_EXTERNAL tacosald;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\tacosald. 110x110 24BPP
extern const IMAGE_EXTERNAL hamsalad;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\hamsalad. 110x110 24BPP
extern const IMAGE_EXTERNAL baconSal;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Salads\baconSal. 110x110 24BPP
extern const IMAGE_EXTERNAL veggiemu;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\veggiemu. 110x110 24BPP
extern const IMAGE_EXTERNAL MonsterC;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Burger\MonsterC. 110x110 24BPP
extern const IMAGE_EXTERNAL BlackTil;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sandwiches\BlackTil. 110x110 24BPP
extern const IMAGE_EXTERNAL endofuni;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Title\endofuni. 388x264 24BPP
extern const IMAGE_EXTERNAL apple;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\apple. 110x110 24BPP
extern const IMAGE_EXTERNAL blueberr;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\blueberr. 110x110 24BPP
extern const IMAGE_EXTERNAL Brownie;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\Brownie. 110x110 24BPP
extern const IMAGE_EXTERNAL Mousse;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\Mousse. 110x110 24BPP
extern const IMAGE_EXTERNAL peanut;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\peanut. 110x110 24BPP
extern const IMAGE_EXTERNAL redvel;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\redvel. 110x110 24BPP
extern const IMAGE_EXTERNAL Strawb;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\Strawb. 110x110 24BPP
extern const IMAGE_EXTERNAL Sundae;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Desserts\Sundae. 110x110 24BPP
extern const IMAGE_EXTERNAL cabbage;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\cabbage. 110x110 24BPP
extern const IMAGE_EXTERNAL VegPizza;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\VegPizza. 110x110 24BPP
extern const IMAGE_EXTERNAL MPizza;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\MPizza. 110x110 24BPP
extern const IMAGE_EXTERNAL Quesd;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\Quesd. 110x110 24BPP
extern const IMAGE_EXTERNAL spagmeat;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\spagmeat. 110x110 24BPP
extern const IMAGE_EXTERNAL Steak;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\Steak. 110x110 24BPP
extern const IMAGE_EXTERNAL Tilipia;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\Tilipia. 110x110 24BPP
extern const IMAGE_EXTERNAL Lasagna;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\Lasagna. 110x110 24BPP
extern const IMAGE_EXTERNAL GrChx;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\GrChx. 110x110 24BPP
extern const IMAGE_EXTERNAL FrChx;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Dinners\FrChx. 110x110 24BPP
extern const IMAGE_EXTERNAL Coleslaw;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\Coleslaw. 110x110 24BPP
extern const IMAGE_EXTERNAL Baked;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\Baked. 110x110 24BPP
extern const IMAGE_EXTERNAL BBroccol;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\BBroccol. 110x110 24BPP
extern const IMAGE_EXTERNAL Fries;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\Fries. 110x110 24BPP
extern const IMAGE_EXTERNAL fruit;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\fruit. 110x110 24BPP
extern const IMAGE_EXTERNAL mashed;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\mashed. 110x110 24BPP
extern const IMAGE_EXTERNAL onion;	// C:\Users\Michael\Pager\Menu Screens VGDD\Menu Screens VGDD\..\Pictures\Sides\onion. 110x110 24BPP
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

void CreateDessApple(void);
#define ID_DessApple_Window1   541
#define ID_DessApple_Picture1   542
#define ID_DessApple_EditBox1   543
#define ID_DessApple_Button8   544
#define ID_DessApple_Button3   545
#define ID_DessApple_Button4   546
#define ID_DessApple_Button5   547
#define ID_DessApple_Button6   548

void CreateDessertsList(void);
#define ID_DessertsList_Window1   549
#define ID_DessertsList_Button1   550
#define ID_DessertsList_Button2   551
#define ID_DessertsList_Button3   552
#define ID_DessertsList_Button5   553
#define ID_DessertsList_Button7   554
#define ID_DessertsList_Button8   555
#define ID_DessertsList_Button9   556
#define ID_DessertsList_Button10   557
#define ID_DessertsList_Button11   558
#define ID_DessertsList_Button12   559

void CreateDessBlue(void);
#define ID_DessBlue_Window1   560
#define ID_DessBlue_Picture1   561
#define ID_DessBlue_EditBox1   562
#define ID_DessBlue_Button8   563
#define ID_DessBlue_Button3   564
#define ID_DessBlue_Button4   565
#define ID_DessBlue_Button5   566
#define ID_DessBlue_Button6   567

void CreateDessBrownie(void);
#define ID_DessBrownie_Window1   568
#define ID_DessBrownie_Picture1   569
#define ID_DessBrownie_EditBox1   570
#define ID_DessBrownie_Button8   571
#define ID_DessBrownie_Button3   572
#define ID_DessBrownie_Button4   573
#define ID_DessBrownie_Button5   574
#define ID_DessBrownie_Button6   575

void CreateDessMousse(void);
#define ID_DessMousse_Window1   576
#define ID_DessMousse_Picture1   577
#define ID_DessMousse_EditBox1   578
#define ID_DessMousse_Button8   579
#define ID_DessMousse_Button3   580
#define ID_DessMousse_Button4   581
#define ID_DessMousse_Button5   582
#define ID_DessMousse_Button6   583

void CreateDessPeanut(void);
#define ID_DessPeanut_Window1   584
#define ID_DessPeanut_Picture1   585
#define ID_DessPeanut_EditBox1   586
#define ID_DessPeanut_Button8   587
#define ID_DessPeanut_Button3   588
#define ID_DessPeanut_Button4   589
#define ID_DessPeanut_Button5   590
#define ID_DessPeanut_Button6   591

void CreateDessRedVel(void);
#define ID_DessRedVel_Window1   592
#define ID_DessRedVel_Picture1   593
#define ID_DessRedVel_EditBox1   594
#define ID_DessRedVel_Button8   595
#define ID_DessRedVel_Button3   596
#define ID_DessRedVel_Button4   597
#define ID_DessRedVel_Button5   598
#define ID_DessRedVel_Button6   599

void CreateDessStraw(void);
#define ID_DessStraw_Window1   600
#define ID_DessStraw_Picture1   601
#define ID_DessStraw_EditBox1   602
#define ID_DessStraw_Button8   603
#define ID_DessStraw_Button3   604
#define ID_DessStraw_Button4   605
#define ID_DessStraw_Button5   606
#define ID_DessStraw_Button6   607

void CreateDessSundae(void);
#define ID_DessSundae_Window1   608
#define ID_DessSundae_Picture1   609
#define ID_DessSundae_EditBox1   610
#define ID_DessSundae_Button8   611
#define ID_DessSundae_Button3   612
#define ID_DessSundae_Button4   613
#define ID_DessSundae_Button5   614
#define ID_DessSundae_Button6   615

void CreateDinCornBeef(void);
#define ID_DinCornBeef_Window1   616
#define ID_DinCornBeef_Picture1   617
#define ID_DinCornBeef_EditBox1   618
#define ID_DinCornBeef_Button8   619
#define ID_DinCornBeef_Button3   620
#define ID_DinCornBeef_Button4   621
#define ID_DinCornBeef_Button5   622
#define ID_DinCornBeef_Button6   623

void CreateDinnerList(void);
#define ID_DinnerList_Window1   624
#define ID_DinnerList_Button1   625
#define ID_DinnerList_Button2   626
#define ID_DinnerList_Button3   627
#define ID_DinnerList_Button4   628
#define ID_DinnerList_Button5   629
#define ID_DinnerList_Button6   630
#define ID_DinnerList_Button7   631
#define ID_DinnerList_Button8   632
#define ID_DinnerList_Button9   633
#define ID_DinnerList_Button10   634
#define ID_DinnerList_Button11   635
#define ID_DinnerList_Button12   636

void CreateDinFriedChiken(void);
#define ID_DinFriedChiken_Window1   637
#define ID_DinFriedChiken_Picture1   638
#define ID_DinFriedChiken_EditBox1   639
#define ID_DinFriedChiken_Button8   640
#define ID_DinFriedChiken_Button3   641
#define ID_DinFriedChiken_Button4   642
#define ID_DinFriedChiken_Button5   643
#define ID_DinFriedChiken_Button6   644

void CreateDinGrilledChicken(void);
#define ID_DinGrilledChicken_Window1   645
#define ID_DinGrilledChicken_Picture1   646
#define ID_DinGrilledChicken_EditBox1   647
#define ID_DinGrilledChicken_Button8   648
#define ID_DinGrilledChicken_Button3   649
#define ID_DinGrilledChicken_Button4   650
#define ID_DinGrilledChicken_Button5   651
#define ID_DinGrilledChicken_Button6   652

void CreateDinLasagna(void);
#define ID_DinLasagna_Window1   653
#define ID_DinLasagna_Picture1   654
#define ID_DinLasagna_EditBox1   655
#define ID_DinLasagna_Button8   656
#define ID_DinLasagna_Button3   657
#define ID_DinLasagna_Button4   658
#define ID_DinLasagna_Button5   659
#define ID_DinLasagna_Button6   660

void CreateDinMarPizza(void);
#define ID_DinMarPizza_Window1   661
#define ID_DinMarPizza_Picture1   662
#define ID_DinMarPizza_EditBox1   663
#define ID_DinMarPizza_Button8   664
#define ID_DinMarPizza_Button3   665
#define ID_DinMarPizza_Button4   666
#define ID_DinMarPizza_Button5   667
#define ID_DinMarPizza_Button6   668

void CreateDinQuesadilla(void);
#define ID_DinQuesadilla_Window1   669
#define ID_DinQuesadilla_Picture1   670
#define ID_DinQuesadilla_EditBox1   671
#define ID_DinQuesadilla_Button8   672
#define ID_DinQuesadilla_Button3   673
#define ID_DinQuesadilla_Button4   674
#define ID_DinQuesadilla_Button5   675
#define ID_DinQuesadilla_Button6   676

void CreateDinSpaghetti(void);
#define ID_DinSpaghetti_Window1   677
#define ID_DinSpaghetti_Picture1   678
#define ID_DinSpaghetti_EditBox1   679
#define ID_DinSpaghetti_Button8   680
#define ID_DinSpaghetti_Button3   681
#define ID_DinSpaghetti_Button4   682
#define ID_DinSpaghetti_Button5   683
#define ID_DinSpaghetti_Button6   684

void CreateDinSteak(void);
#define ID_DinSteak_Window1   685
#define ID_DinSteak_Picture1   686
#define ID_DinSteak_EditBox1   687
#define ID_DinSteak_Button8   688
#define ID_DinSteak_Button3   689
#define ID_DinSteak_Button4   690
#define ID_DinSteak_Button5   691
#define ID_DinSteak_Button6   692

void CreateDinTilapia(void);
#define ID_DinTilapia_Window1   693
#define ID_DinTilapia_Picture1   694
#define ID_DinTilapia_EditBox1   695
#define ID_DinTilapia_Button8   696
#define ID_DinTilapia_Button3   697
#define ID_DinTilapia_Button4   698
#define ID_DinTilapia_Button5   699
#define ID_DinTilapia_Button6   700

void CreateDinVegPizza(void);
#define ID_DinVegPizza_Window1   701
#define ID_DinVegPizza_Picture1   702
#define ID_DinVegPizza_EditBox1   703
#define ID_DinVegPizza_Button8   704
#define ID_DinVegPizza_Button3   705
#define ID_DinVegPizza_Button4   706
#define ID_DinVegPizza_Button5   707
#define ID_DinVegPizza_Button6   708

void CreateSidesList(void);
#define ID_SidesList_Window1   709
#define ID_SidesList_Button1   710
#define ID_SidesList_Button3   711
#define ID_SidesList_Button5   712
#define ID_SidesList_Button6   713
#define ID_SidesList_Button7   714
#define ID_SidesList_Button8   715
#define ID_SidesList_Button9   716
#define ID_SidesList_Button10   717
#define ID_SidesList_Button12   718

void CreateSidesBakedPot(void);
#define ID_SidesBakedPot_Window1   719
#define ID_SidesBakedPot_Picture1   720
#define ID_SidesBakedPot_EditBox1   721
#define ID_SidesBakedPot_Button8   722
#define ID_SidesBakedPot_Button3   723
#define ID_SidesBakedPot_Button4   724
#define ID_SidesBakedPot_Button5   725
#define ID_SidesBakedPot_Button6   726

void CreateSidesBroccoli(void);
#define ID_SidesBroccoli_Window1   727
#define ID_SidesBroccoli_Picture1   728
#define ID_SidesBroccoli_EditBox1   729
#define ID_SidesBroccoli_Button8   730
#define ID_SidesBroccoli_Button3   731
#define ID_SidesBroccoli_Button4   732
#define ID_SidesBroccoli_Button5   733
#define ID_SidesBroccoli_Button6   734

void CreateSidesFries(void);
#define ID_SidesFries_Window1   735
#define ID_SidesFries_Picture1   736
#define ID_SidesFries_EditBox1   737
#define ID_SidesFries_Button8   738
#define ID_SidesFries_Button3   739
#define ID_SidesFries_Button4   740
#define ID_SidesFries_Button5   741
#define ID_SidesFries_Button6   742

void CreateSidesFruit(void);
#define ID_SidesFruit_Window1   743
#define ID_SidesFruit_Picture1   744
#define ID_SidesFruit_EditBox1   745
#define ID_SidesFruit_Button8   746
#define ID_SidesFruit_Button3   747
#define ID_SidesFruit_Button4   748
#define ID_SidesFruit_Button5   749
#define ID_SidesFruit_Button6   750

void CreateSidesMashed(void);
#define ID_SidesMashed_Window1   751
#define ID_SidesMashed_Picture1   752
#define ID_SidesMashed_EditBox1   753
#define ID_SidesMashed_Button8   754
#define ID_SidesMashed_Button3   755
#define ID_SidesMashed_Button4   756
#define ID_SidesMashed_Button5   757
#define ID_SidesMashed_Button6   758

void CreateSidesORings(void);
#define ID_SidesORings_Window1   759
#define ID_SidesORings_Picture1   760
#define ID_SidesORings_EditBox1   761
#define ID_SidesORings_Button8   762
#define ID_SidesORings_Button3   763
#define ID_SidesORings_Button4   764
#define ID_SidesORings_Button5   765
#define ID_SidesORings_Button6   766

void CreateSidesSlaw(void);
#define ID_SidesSlaw_Window1   767
#define ID_SidesSlaw_Picture1   768
#define ID_SidesSlaw_EditBox1   769
#define ID_SidesSlaw_Button8   770
#define ID_SidesSlaw_Button3   771
#define ID_SidesSlaw_Button4   772
#define ID_SidesSlaw_Button5   773
#define ID_SidesSlaw_Button6   774

#define	NUM_VGDD_SCREENS	90
#endif // ifndef _VGDD_SCREENS_H_
