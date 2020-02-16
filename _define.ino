#include <JPEGDecoder.h>  // JPEG decoder library
#include <UTFT.h>
#include <URTouch.h>

#include <TimeLib.h>
#include <UTFT_Buttons.h>
#include <EEPROM.h>
extern unsigned short sms[4096];
UTFT myGLCD(ILI9341_S5P,11,13,10,6,9);
URTouch  myTouch( 4, 3, 2, 22, 23);
UTFT_Buttons  myButtons(&myGLCD, &myTouch);

#define BLACK           0x0000
#define WHITE           0xFFFF
#define BLUE            0x001F
#define RED             0xF800
#define GREEN           0x2685
#define CYAN            0x07FF
#define LIME            0x5FE0
#define MAGENTA         0xF81F
#define YELLOW          0xFFE0
#define TURQUOISE       0x0F1B
#define ORANGE          0xFBA0
#define PINK            0xF813
#define SKY             0x667F        // nice light blue
#define GREY            0xE73C
#define DarkTURQUOISE   0x3491
#define DarkGREY        0x39C7
#define DarkRED         0x8986
#define DarkGREEN       0x3446
#define DarkMAGENTA     0x612F
#define DarkBLUE        0x298B
#define DarkYELLOW      0x83E5
#define DarkORANGE      0xA347
#define DarkPINK        0xA1EF
#define GOLD            0xF3FF00      //  nice yellow
#define SALMON          0xFB2C        //  nice red

extern uint8_t SmallFont[];
extern uint8_t BigFont[];
extern uint8_t hallfetica_normal[];
extern uint8_t Grotesk24x48[];
extern uint8_t Ubuntu[];
extern uint8_t nadianne[];

/*  Store Menu Variables  */
String CurrentPage;
String PrevPage;                      //  remember previous page
int StatusBarColor     =  SKY;        //  default color for the StatusBar
int MenuColor;
int TextColor          =  WHITE;      //  default text color
int BtnBorderColor;           
int MenuInfo           =  0;          //  0 = OFF, 1 = ON

/*  LED Brightness control  */
int backlight = 20;
int backlightbox;
int blv;
int barv;

/*  LED Timer control  */
unsigned long LedTimer;
int sleepnever;
int esleep ;
unsigned long awakeend;

unsigned long sleeptime;
int sleep = 0;

unsigned long currenttime;
unsigned long ssitime;

int i = 0;
int but1, but2, but3, but4, but5, but6,but7, pressed_button;

 boolean default_colors = true;



int long  val = 80;
int tempC;
int pinLM35 = 28;
int led_red = 24;
int led_yallow = 25;
int led_blue = 26;
int led_green = 27;
int hot = 30;
int motor = 33;
int led = led_red;
int led_back = 20;
int gsmon= 18;
int pw= 19;
int pwf= 5;

int val_stop= 80;


 
