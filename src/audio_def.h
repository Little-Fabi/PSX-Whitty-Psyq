#define XA_LENGTH(x) (((u64)(x) * 75) / 100 * IO_SECT_SIZE) //Centiseconds to sectors in bytes (w)

typedef struct
{
	XA_File file;
	u32 length;
} XA_TrackDef;

static const XA_TrackDef xa_tracks[] = {
	//MENU.XA
	{XA_Menu, XA_LENGTH(11300)}, //XA_GettinFreaky
	{XA_Menu, XA_LENGTH(3800)},  //XA_GameOver
	//1.XA
	{XA_1, XA_LENGTH(11200)}, //XA_LoFight
	{XA_1, XA_LENGTH(12700)}, //XA_Overhead
	//2.XA
	{XA_2, XA_LENGTH(15300)}, //XA_Ballistic
	{XA_2, XA_LENGTH(16000)}, //XA_BallisticRemix
	//3.XA
	{XA_3, XA_LENGTH(12700)}, //XA_Underground
	{XA_3, XA_LENGTH(11800)}, //XA_Lowrise
	//4.XA
	{XA_4, XA_LENGTH(5800)}, //XA_Hungry
	{XA_4, XA_LENGTH(11100)}, //XA_LoFightHQ
	//5.XA
	{XA_5, XA_LENGTH(12300)}, //XA_OverheadHQ
	{XA_5, XA_LENGTH(14700)}, //XA_BallisticHQ
	//6.XA
	{XA_6, XA_LENGTH(15300)}, //XA_BallisticBetaMix
	{XA_6, XA_LENGTH(13800)}, //XA_UndergroundHQ
	//7.XA
	{XA_7, XA_LENGTH(10500)}, //XA_UndergroundInGameMix
	{XA_7, XA_LENGTH(11900)}, //XA_LowRiseHQ
	//8.XA
	{XA_8, XA_LENGTH(10200)}, //XA_HungryHQ
	{XA_8, XA_LENGTH(7600)}, //XA_Faucet
	//9.XA
	{XA_9, XA_LENGTH(7900)}, //XA_FaucetHQ
};
static const char *xa_paths[] = {
	"\\MUSIC\\MENU.XA;1",
	"\\MUSIC\\1.XA;1",
	"\\MUSIC\\2.XA;1",
	"\\MUSIC\\3.XA;1",
	"\\MUSIC\\4.XA;1",
	"\\MUSIC\\5.XA;1",
	"\\MUSIC\\6.XA;1",
	"\\MUSIC\\7.XA;1",
	"\\MUSIC\\8.XA;1",
	"\\MUSIC\\9.XA;1",
	NULL,
};

typedef struct
{
	const char *name;
	boolean vocal;
} XA_Mp3;

static const XA_Mp3 xa_mp3s[] = {
    //MENU.XA
    {"freaky", false},
    {"gameover", false},
    //1.XA
    {"lofight", true},
    {"overhead", true},
    //2.XA
    {"ballistic", true},
    {"ballisticremix", true},
    //3.XA
    {"underground", true},
    {"lowrise", true},
    //4.XA
    {"hungry", true},
    {"lofighthq", true},
    //5.XA
    {"overheadhq", true},
    {"ballistichq", true},
    //6.XA
    {"ballisticbetamix", true},
    {"undergroundhq", true},
    //7.XA
    {"undergroundingamemix", true},
    {"lowrisehq", true},
    //8.XA
    {"hungryhq", true},
    {"faucet", true},
    //9.XA
    {"faucethq", true},
	
	{NULL, false}
};
