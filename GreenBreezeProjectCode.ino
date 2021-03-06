
      //LIBRARYS
//////////////////////////////////
                                //
#include <DHT.h>                //
#include <Adafruit_SSD1306.h>   //
#include <splash.h>             //
#include <SPI.h>                //
#include <Wire.h>               //
#include <Adafruit_GFX.h>       //
#include <U8glib.h>             //
                                //
//////////////////////////////////

          //INITIALIZING OLED SCREEN
////////////////////////////////////////////////////////////////////////////////
#define SCREEN_WIDTH 128 // OLED display width, in pixels                     //
#define SCREEN_HEIGHT 32 // OLED display height, in pixels                    //
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)        //
#define OLED_RESET     4 // Reset pin # (or -1 if sharing Arduino reset pin)  //
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);     //
////////////////////////////////////////////////////////////////////////////////

    //SETUP FOR LOGO BITMAP
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NO_ACK);  // Display which does not send ACK
const unsigned char GreenBreezelogoBitMap[] PROGMEM= {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xC0, 0x3F, 0xFC, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xC0, 0x1F, 0xF0, 0x03, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x07, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x00,
0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00,
0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00,
0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00,
0x03, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xC0,
0x1F, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x7F, 0xFE, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xF8,
0x7F, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFE,
0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFE,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1F, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x3F, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

        //INITIALIZING TEMP SENSOR
        //AND SETTING GLOBAL TEMP VARIABLE
///////////////////////////
#define type DHT11       //
const int dhtPin = 3;    //
DHT dht(dhtPin, type);   //
float tempf;             //
///////////////////////////


        //DEFINING PINOUT FOR INFARED SENSOR
//////////////////////////////////////////////////////////////////
const int IRSensor = 2; // connect ir sensor to arduino pin 2   //
const int LED = 13; // conect Led to arduino pin 13             //
//////////////////////////////////////////////////////////////////

        //TIME VARIABLES
////////////////////////////
unsigned long time;
unsigned long timeNow;
///////////////////////////////

        //FUNCTIONS FOR IR INTERFACE
//////////////////////////////
void displayIRsensor(int);
String readIRsensor(int);
//////////////////////////////

      //FUNCTIONS FOR DISPLAY SCREENS
/////////////////////////////////////////////////////
void sensorDisplayScreen(String , int , float );
void batteryDisplayScreen();
void drawLogo();
/////////////////////////////////////////////////////

      //VARIABLES FOR IR COUNTING
/////////////////////////////
int myRead[2] = {0,0};
int currentRead = 0;
int lastRead = 0;
int passes = 0;
int passCount = 0;
/////////////////////////



        //  SETUP FUNCTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void setup() {
   pinMode (IRSensor, INPUT); // sensor pin INPUT
   pinMode (LED, OUTPUT); // Led pin OUTPUT
   
   Serial.begin(9600);
   
   // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  // Show initial display buffer contents on the screen --
  // the library initializes this with an Adafruit splash screen.
  display.display();

  //starting first timestamp 
  time = millis();
  
 //begin temp sensor
 dht.begin();
  
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of setup


      //LOOP FUNCTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop() {
  
  tempf = dht.readTemperature(true); //setting vaariable for temperature in ferenhiegt

  timeNow = millis();   //timecheck for current time
  
  int statusSensor = digitalRead(IRSensor);   //getting int output from infared sensor

  //displayIRsensor(statusSensor);      //calling a function to check infared output in serial monitor
  String irSensor = readIRsensor(statusSensor);     //setting variable for current infared status


  //failed attempt to count how many times the infared sensor changes state
  myRead[0] = statusSensor;
  
  if(myRead[0] == !myRead[1]){
    passes = passes + 1;
    }
  else if(myRead[0] == myRead[1]){
    passes = passes;
    }
  passCount = passes/2;

  Serial.println("ir data: " + String(passCount));  
  Serial.println("my read 0: "+String(myRead[0])+"   my read 1: "+ String(myRead[1]));
  

  
  //Serial.println("current Read: " + currentRead);
  //Serial.println("Last Read: " + lastRead);
  Serial.println("passes: " + passes);
  //Serial.println("passes so Far: " + passCount);

  //trying to get a loading screen to function
  //if(time < 5000){
   // draw();
  //  }
 // else{
  sensorDisplayScreen(irSensor, passCount, tempf);      //sets screen to display sensor data
  //}

  
 myRead[1] = myRead[0]; 
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of loop



        //DISPLAY LOGO TO SCREEN
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void drawLogo(){
  u8g.drawBitmapP( 0, 0, 16, 64, GreenBreezelogoBitMap);
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of logo display

void draw(){
  u8g.firstPage();  
  do {
    drawLogo();
  } while( u8g.nextPage() );
  }


       //DISPLAY BATTERY DATA TO LED SCREEN
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void batteryDisplayScreen(){
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("     Battey Data");      //print title to display
  display.println("Voltage: " );        //print battery voltage to display
  display.println("Current: ");    //print battery current to display
  display.println("Percent charged");      //print battery stauts to display
  display.display();    //set display
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of Battery display


        //DISPLAY SENSOR DATA TO LED SCREEN
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void sensorDisplayScreen(String irSensor, int passCount, float tempf){
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("     Sensor Data");      //print title to display
  display.println("IR Sensor: " + irSensor);        //print infared sensor state to display
  display.println("IR Count: " + String(passCount));    //print how many times the infared state has changed to display
  display.println("Temp Sensor: " + String(tempf) + (char)247+ "F");      //print temperature to display
  display.display();    //set display
  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of sensor display


      //SERIAL FEEDBACK FOR INFARED SENSOR
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void displayIRsensor(int state){
  if (state == 1){
    digitalWrite(LED, LOW); // LED LOW
    Serial.println("IR Sensor: 0");//print to seral monitor
  }
  else{
    digitalWrite(LED, HIGH); // LED High
    Serial.println("IR Sensor: 1");//print to seral monitor
  }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of infared serial print


        //LOOKS FOR INT OUTPUT FROM INFARED SENSOR AND RETURNS STRING EQUIVALENT
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
String readIRsensor(int state){
  String str ;      //define return variable
  if (state == 1){    //check for infared output
    str = "LOW";     //set return varaible
  }
  else{
    str = "HIGH";   //set return varaible
  }
  return str;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//end of reading infared sensor and returning string
