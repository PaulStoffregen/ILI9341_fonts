/***************************************************
  This is our GFX example for the Adafruit ILI9341 Breakout and Shield
  ----> http://www.adafruit.com/products/1651

  Check out the links above for our tutorials and wiring diagrams
  These displays use SPI to communicate, 4 or 5 pins are required to
  interface (RST is optional)
  Adafruit invests time and resources providing this open source code,
  please support Adafruit and open-source hardware by purchasing
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.
  MIT license, all text above must be included in any redistribution
 ****************************************************/


#include "SPI.h"
#include "ILI9341_t3.h"
#include "font_Arial.h"
#include "font_ArialBold.h"
// ls -1 *.h | awk '{print "#include \"" $1 "\""}'

#include "font_ArialBlack.h"
#include "font_ArialBoldItalic.h"
#include "font_ArialItalic.h"
#include "font_AwesomeF000.h"
#include "font_AwesomeF080.h"
#include "font_AwesomeF100.h"
#include "font_AwesomeF180.h"
#include "font_AwesomeF200.h"
#include "font_ChanceryItalic.h"
#include "font_ComicSansMSBold.h"
#include "font_ComicSansMS.h"
#include "font_CourierNewBold.h"
#include "font_CourierNewBoldItalic.h"
#include "font_CourierNew.h"
#include "font_CourierNewItalic.h"
#include "font_GeorgiaBold.h"
#include "font_GeorgiaBoldItalic.h"
#include "font_Georgia.h"
#include "font_GeorgiaItalic.h"
#include "font_Impact.h"
#include "font_LiberationMonoBold.h"
#include "font_LiberationMonoBoldItalic.h"
#include "font_LiberationMono.h"
#include "font_LiberationMonoItalic.h"
#include "font_LiberationSansBold.h"
#include "font_LiberationSansBoldItalic.h"
#include "font_LiberationSans.h"
#include "font_LiberationSansItalic.h"
#include "font_LiberationSansNarrowBold.h"
#include "font_LiberationSansNarrowBoldItalic.h"
#include "font_LiberationSansNarrow.h"
#include "font_LiberationSansNarrowItalic.h"
#include "font_LiberationSerifBold.h"
#include "font_LiberationSerifBoldItalic.h"
#include "font_LiberationSerif.h"
#include "font_LiberationSerifItalic.h"
#include "font_TimesNewRomanBold.h"
#include "font_TimesNewRomanBoldItalic.h"
#include "font_TimesNewRoman.h"
#include "font_TimesNewRomanItalic.h"



// For the Adafruit shield, these are the default.
#define TFT_DC  9
#define TFT_CS 10

// Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC
ILI9341_t3 tft = ILI9341_t3(TFT_CS, TFT_DC);

void setup() {
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_YELLOW);
  //tft.setTextSize(2);
  //tft.println("Waiting for Arduino Serial Monitor...");
  

  Serial.begin(9600);
  //while (!Serial) ; // wait for Arduino Serial Monitor
  Serial.println("ILI9341 Test!"); 

  int xx = 50;
  tft.setFont(Arial_12);
  tft.println("Font-Awesome (F180)");
  tft.setFont(AwesomeF180_18);
  tft.setCursor(0, 12);
  for (int i=0; i < 128; i++) {
    if (i == 10) continue;
    tft.print((char)i);
  }

 // tft.setFont(TimesNewRoman_28_Bold_Italic);
//  tft.print("Times New Roman");
  //tft.fillScreen(ILI9341_BLACK);
 // tft.setCursor(0, 10);
  
  
  
  while (1) ;



}


void loop(void) {
}

