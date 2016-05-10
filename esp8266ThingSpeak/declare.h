#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

#define NUMFLAKES 10
#define XPOS 0
#define YPOS 1
#define DELTAY 2

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

int ledState = LOW;  
int showState = LOW; 
int lp = 0;
int imode = 0;
int buttonState = 0;         // variable for reading the pushbutton status

boolean cloop = true;

unsigned long previousMillis = 0;
unsigned long previousMillis_led = 0;
const long interval = 5000;
const long interval_led = 200;

const int output1 =  13;  
const int output2 =  15;

String strData;
String url;

MDNSResponder mdns;
ESP8266WebServer server(80);




