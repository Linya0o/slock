/* user and group to drop privileges to */
static const char *user  = "john";
static const char *group = "users";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "black",     /* after initialization */
	[INPUT]  = "#647c64",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS]   = "#005577",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* time in seconds before the monitor shuts down */
static const int monitortime = 60;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * font_name = "lucidasans-bolditalic-24";

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 15;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x    y       w       h */
	{ 0,    3,      1,      3 },
	{ 1,    3,      2,      1 },
	{ 0,    5,      8,      1 },
	{ 3,    0,      1,      5 },
	{ 5,    3,      1,      2 },
	{ 7,    3,      1,      2 },
	{ 8,    3,      4,      1 },
	{ 9,    4,      1,      2 },
	{ 11,   4,      1,      2 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
// #define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=0;
