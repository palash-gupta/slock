/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#51576D",     /* after initialization */
	[INPUT] =  "#8CAAEE",   /* during input */
	[FAILED] = "#E78284",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter Password to Unlock";

/* text color */
static const char * text_color = "#E5C890";

/* text size (must be a valid size) */
static const char * font_name = "mtx";

/* Background image path, should be available to the user above */
static const char* background_image = "/tmp/evening-sky.png";
