#include <FastLED.h>

#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 128
#define COL_NOR White
#define COL_OFF Black
#define BRIGHT 1 //numero entre 1 y 100: con 1% consume 130 MA. 10% - 250 mA (280mA ALL).50% - 720 mA (780mA ALL).100% - 950mA (1,050 ALL)

// For led chips like WS2812, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// Clock pin only needed for SPI based chipsets when not using hardware SPI
// more info in https://github.com/FastLED/FastLED/wiki/Controlling-leds
// https://github.com/FastLED/FastLED
//http://fastled.io/
#define DATA_PIN 28
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
    // Uncomment/edit one of the following lines for your leds arrangement.
    // ## Clockless types ##
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
    // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
    //FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
    // ## Clocked (SPI) types ##
    // FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
    // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
    // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
    FastLED.setBrightness(BRIGHT);
    //fill_solid(leds, NUM_LEDS, CRGB::COL_NOR);
    //FastLED.show();
    //delay(10000);
}

void loop() { 
  // Turn the LED on, then pause
  /*leds[0] = CRGB::White;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::White;
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  FastLED.show();
  delay(500); */

  /*
  for(int dot = 0; dot < NUM_LEDS; dot++) { 
      leds[dot] = CRGB::Blue;
      FastLED.show();
      // clear this led for the next time around the loop
      leds[dot] = CRGB::Black;
      delay(500);
  }*/
  leds[7]=CRGB::COL_OFF;leds[15]=CRGB::COL_NOR;leds[23]=CRGB::COL_NOR;leds[31]=CRGB::COL_NOR;leds[39]=CRGB::COL_NOR;leds[47]=CRGB::COL_NOR;leds[55]=CRGB::COL_NOR;leds[63]=CRGB::COL_OFF;
  leds[6]=CRGB::COL_NOR;leds[14]=CRGB::COL_NOR;leds[22]=CRGB::COL_NOR;leds[30]=CRGB::COL_NOR;leds[38]=CRGB::COL_NOR;leds[46]=CRGB::COL_NOR;leds[54]=CRGB::COL_NOR;leds[62]=CRGB::COL_NOR;
  leds[5]=CRGB::COL_NOR;leds[13]=CRGB::COL_NOR;leds[21]=CRGB::COL_NOR;leds[29]=CRGB::COL_NOR;leds[37]=CRGB::COL_NOR;leds[45]=CRGB::COL_NOR;leds[53]=CRGB::COL_NOR;leds[61]=CRGB::COL_NOR;
  leds[4]=CRGB::COL_NOR;leds[12]=CRGB::COL_NOR;leds[20]=CRGB::COL_NOR;leds[28]=CRGB::COL_OFF;leds[36]=CRGB::COL_OFF;leds[44]=CRGB::COL_NOR;leds[52]=CRGB::COL_NOR;leds[60]=CRGB::COL_NOR;
  leds[3]=CRGB::COL_NOR;leds[11]=CRGB::COL_NOR;leds[19]=CRGB::COL_NOR;leds[27]=CRGB::COL_OFF;leds[35]=CRGB::COL_OFF;leds[43]=CRGB::COL_NOR;leds[51]=CRGB::COL_NOR;leds[59]=CRGB::COL_NOR; 
  leds[2]=CRGB::COL_NOR;leds[10]=CRGB::COL_NOR;leds[18]=CRGB::COL_NOR;leds[26]=CRGB::COL_NOR;leds[34]=CRGB::COL_NOR;leds[42]=CRGB::COL_NOR;leds[50]=CRGB::COL_NOR;leds[58]=CRGB::COL_NOR;
  leds[1]=CRGB::COL_NOR; leds[9]=CRGB::COL_NOR;leds[17]=CRGB::COL_NOR;leds[25]=CRGB::COL_NOR;leds[33]=CRGB::COL_NOR;leds[41]=CRGB::COL_NOR;leds[49]=CRGB::COL_NOR;leds[57]=CRGB::COL_NOR;
  leds[0]=CRGB::COL_OFF; leds[8]=CRGB::COL_NOR;leds[16]=CRGB::COL_NOR;leds[24]=CRGB::COL_NOR;leds[32]=CRGB::COL_NOR;leds[40]=CRGB::COL_NOR;leds[48]=CRGB::COL_NOR;leds[56]=CRGB::COL_OFF;

  for(int i=0; i<(NUM_LEDS/2); i++) { leds[i+(NUM_LEDS/2)] = leds[i];}
 
  FastLED.show();
  //fill_solid( 0, 128 /*number of leds*/, CRGB( 255, 244, 221) ); // otra forma de escribir fdillsolid
  //fill_solid(leds, NUM_LEDS, CRGB::COL_NOR);
  //FastLED.show();
  delay(3000);
  
  leds[7]=CRGB::COL_OFF;leds[15]=CRGB::COL_OFF;leds[23]=CRGB::COL_OFF;leds[31]=CRGB::COL_OFF;leds[39]=CRGB::COL_OFF;leds[47]=CRGB::COL_OFF;leds[55]=CRGB::COL_OFF;leds[63]=CRGB::COL_OFF;
  leds[6]=CRGB::COL_OFF;leds[14]=CRGB::COL_OFF;leds[22]=CRGB::COL_NOR;leds[30]=CRGB::COL_NOR;leds[38]=CRGB::COL_NOR;leds[46]=CRGB::COL_NOR;leds[54]=CRGB::COL_OFF;leds[62]=CRGB::COL_OFF;
  leds[5]=CRGB::COL_OFF;leds[13]=CRGB::COL_NOR;leds[21]=CRGB::COL_NOR;leds[29]=CRGB::COL_NOR;leds[37]=CRGB::COL_NOR;leds[45]=CRGB::COL_NOR;leds[53]=CRGB::COL_NOR;leds[61]=CRGB::COL_OFF;
  leds[4]=CRGB::COL_NOR;leds[12]=CRGB::COL_NOR;leds[20]=CRGB::COL_NOR;leds[28]=CRGB::COL_NOR;leds[36]=CRGB::COL_NOR;leds[44]=CRGB::COL_NOR;leds[52]=CRGB::COL_NOR;leds[60]=CRGB::COL_NOR;
  leds[3]=CRGB::COL_NOR;leds[11]=CRGB::COL_NOR;leds[19]=CRGB::COL_NOR;leds[27]=CRGB::COL_NOR;leds[35]=CRGB::COL_NOR;leds[43]=CRGB::COL_NOR;leds[51]=CRGB::COL_NOR;leds[59]=CRGB::COL_NOR; 
  leds[2]=CRGB::COL_OFF;leds[10]=CRGB::COL_NOR;leds[18]=CRGB::COL_NOR;leds[26]=CRGB::COL_NOR;leds[34]=CRGB::COL_NOR;leds[42]=CRGB::COL_NOR;leds[50]=CRGB::COL_NOR;leds[58]=CRGB::COL_OFF;
  leds[1]=CRGB::COL_OFF; leds[9]=CRGB::COL_OFF;leds[17]=CRGB::COL_OFF;leds[25]=CRGB::COL_OFF;leds[33]=CRGB::COL_OFF;leds[41]=CRGB::COL_OFF;leds[49]=CRGB::COL_OFF;leds[57]=CRGB::COL_OFF;
  leds[0]=CRGB::COL_OFF; leds[8]=CRGB::COL_OFF;leds[16]=CRGB::COL_OFF;leds[24]=CRGB::COL_OFF;leds[32]=CRGB::COL_OFF;leds[40]=CRGB::COL_OFF;leds[48]=CRGB::COL_OFF;leds[56]=CRGB::COL_OFF;
  //FastLED.clear();// clear all pixel DATA. esta es la razon por la cual se requiere el comando FastLED.show despues
  for(int i=0; i<(NUM_LEDS/2); i++) { leds[i+(NUM_LEDS/2)] = leds[i];}
  FastLED.show();
  delay(100);
  //for(int i = 0; i < NUM_LEDS; i++) { leds[i] = CRGB::Red; FastLED.delay(33); leds[i] = CRGB::Black; }

  leds[7]=CRGB::COL_OFF;leds[15]=CRGB::COL_OFF;leds[23]=CRGB::COL_OFF;leds[31]=CRGB::COL_OFF;leds[39]=CRGB::COL_OFF;leds[47]=CRGB::COL_OFF;leds[55]=CRGB::COL_OFF;leds[63]=CRGB::COL_OFF;
  leds[6]=CRGB::COL_OFF;leds[14]=CRGB::COL_OFF;leds[22]=CRGB::COL_OFF;leds[30]=CRGB::COL_OFF;leds[38]=CRGB::COL_OFF;leds[46]=CRGB::COL_OFF;leds[54]=CRGB::COL_OFF;leds[62]=CRGB::COL_OFF;
  leds[5]=CRGB::COL_OFF;leds[13]=CRGB::COL_OFF;leds[21]=CRGB::COL_OFF;leds[29]=CRGB::COL_OFF;leds[37]=CRGB::COL_OFF;leds[45]=CRGB::COL_OFF;leds[53]=CRGB::COL_OFF;leds[61]=CRGB::COL_OFF;
  leds[4]=CRGB::COL_OFF;leds[12]=CRGB::COL_OFF;leds[20]=CRGB::COL_OFF;leds[28]=CRGB::COL_OFF;leds[36]=CRGB::COL_OFF;leds[44]=CRGB::COL_OFF;leds[52]=CRGB::COL_OFF;leds[60]=CRGB::COL_OFF;
  leds[3]=CRGB::COL_NOR;leds[11]=CRGB::COL_NOR;leds[19]=CRGB::COL_NOR;leds[27]=CRGB::COL_NOR;leds[35]=CRGB::COL_NOR;leds[43]=CRGB::COL_NOR;leds[51]=CRGB::COL_NOR;leds[59]=CRGB::COL_NOR; 
  leds[2]=CRGB::COL_NOR;leds[10]=CRGB::COL_NOR;leds[18]=CRGB::COL_NOR;leds[26]=CRGB::COL_NOR;leds[34]=CRGB::COL_NOR;leds[42]=CRGB::COL_NOR;leds[50]=CRGB::COL_NOR;leds[58]=CRGB::COL_NOR;
  leds[1]=CRGB::COL_OFF; leds[9]=CRGB::COL_OFF;leds[17]=CRGB::COL_OFF;leds[25]=CRGB::COL_OFF;leds[33]=CRGB::COL_OFF;leds[41]=CRGB::COL_OFF;leds[49]=CRGB::COL_OFF;leds[57]=CRGB::COL_OFF;
  leds[0]=CRGB::COL_OFF; leds[8]=CRGB::COL_OFF;leds[16]=CRGB::COL_OFF;leds[24]=CRGB::COL_OFF;leds[32]=CRGB::COL_OFF;leds[40]=CRGB::COL_OFF;leds[48]=CRGB::COL_OFF;leds[56]=CRGB::COL_OFF;
  //FastLED.clear();// clear all pixel DATA. esta es la razon por la cual se requiere el comando FastLED.show despues
  for(int i=0; i<(NUM_LEDS/2); i++) { leds[i+(NUM_LEDS/2)] = leds[i];}
  FastLED.show();
  delay(500);

  leds[7]=CRGB::COL_OFF;leds[15]=CRGB::COL_OFF;leds[23]=CRGB::COL_OFF;leds[31]=CRGB::COL_OFF;leds[39]=CRGB::COL_OFF;leds[47]=CRGB::COL_OFF;leds[55]=CRGB::COL_OFF;leds[63]=CRGB::COL_OFF;
  leds[6]=CRGB::COL_OFF;leds[14]=CRGB::COL_OFF;leds[22]=CRGB::COL_OFF;leds[30]=CRGB::COL_OFF;leds[38]=CRGB::COL_OFF;leds[46]=CRGB::COL_OFF;leds[54]=CRGB::COL_OFF;leds[62]=CRGB::COL_OFF;
  leds[5]=CRGB::COL_OFF;leds[13]=CRGB::COL_NOR;leds[21]=CRGB::COL_NOR;leds[29]=CRGB::COL_NOR;leds[37]=CRGB::COL_NOR;leds[45]=CRGB::COL_NOR;leds[53]=CRGB::COL_NOR;leds[61]=CRGB::COL_OFF;
  leds[4]=CRGB::COL_NOR;leds[12]=CRGB::COL_NOR;leds[20]=CRGB::COL_NOR;leds[28]=CRGB::COL_NOR;leds[36]=CRGB::COL_NOR;leds[44]=CRGB::COL_NOR;leds[52]=CRGB::COL_NOR;leds[60]=CRGB::COL_NOR;
  leds[3]=CRGB::COL_NOR;leds[11]=CRGB::COL_NOR;leds[19]=CRGB::COL_NOR;leds[27]=CRGB::COL_NOR;leds[35]=CRGB::COL_NOR;leds[43]=CRGB::COL_NOR;leds[51]=CRGB::COL_NOR;leds[59]=CRGB::COL_NOR; 
  leds[2]=CRGB::COL_OFF;leds[10]=CRGB::COL_NOR;leds[18]=CRGB::COL_NOR;leds[26]=CRGB::COL_NOR;leds[34]=CRGB::COL_NOR;leds[42]=CRGB::COL_NOR;leds[50]=CRGB::COL_NOR;leds[58]=CRGB::COL_OFF;
  leds[1]=CRGB::COL_OFF; leds[9]=CRGB::COL_OFF;leds[17]=CRGB::COL_OFF;leds[25]=CRGB::COL_OFF;leds[33]=CRGB::COL_OFF;leds[41]=CRGB::COL_OFF;leds[49]=CRGB::COL_OFF;leds[57]=CRGB::COL_OFF;
  leds[0]=CRGB::COL_OFF; leds[8]=CRGB::COL_OFF;leds[16]=CRGB::COL_OFF;leds[24]=CRGB::COL_OFF;leds[32]=CRGB::COL_OFF;leds[40]=CRGB::COL_OFF;leds[48]=CRGB::COL_OFF;leds[56]=CRGB::COL_OFF;
  //FastLED.clear();// clear all pixel DATA. esta es la razon por la cual se requiere el comando FastLED.show despues
  for(int i=0; i<(NUM_LEDS/2); i++) { leds[i+(NUM_LEDS/2)] = leds[i];}
  FastLED.show();
  delay(100);
/*  for(int i = 0; i < NUM_LEDS-1; i++) { leds(i,i+1) = CRGB::Red; FastLED.delay(33); leds(i,i+1) = CRGB::Black; }*/
}
/*
  leds[63]=CRGB::COL_NOR;leds[62]=CRGB::COL_NOR;leds[61]=CRGB::COL_NOR;leds[60]=CRGB::COL_NOR;leds[59]=CRGB::COL_NOR;leds[58]=CRGB::COL_NOR;leds[57]=CRGB::COL_NOR;leds[56]=CRGB::COL_NOR;
  leds[55]=CRGB::COL_NOR;leds[54]=CRGB::COL_NOR;leds[53]=CRGB::COL_NOR;leds[52]=CRGB::COL_NOR;leds[51]=CRGB::COL_NOR;leds[50]=CRGB::COL_NOR;leds[49]=CRGB::COL_NOR;leds[48]=CRGB::COL_NOR;
  leds[47]=CRGB::COL_NOR;leds[46]=CRGB::COL_NOR;leds[45]=CRGB::COL_NOR;leds[44]=CRGB::COL_NOR;leds[43]=CRGB::COL_NOR;leds[42]=CRGB::COL_NOR;leds[41]=CRGB::COL_NOR;leds[40]=CRGB::COL_NOR;
  leds[39]=CRGB::COL_NOR;leds[38]=CRGB::COL_NOR;leds[37]=CRGB::COL_NOR;leds[36]=CRGB::COL_NOR;leds[35]=CRGB::COL_NOR;leds[34]=CRGB::COL_NOR;leds[33]=CRGB::COL_NOR;leds[32]=CRGB::COL_NOR;
  leds[31]=CRGB::COL_NOR;leds[30]=CRGB::COL_NOR;leds[29]=CRGB::COL_NOR;leds[28]=CRGB::COL_NOR;leds[27]=CRGB::COL_NOR;leds[26]=CRGB::COL_NOR;leds[25]=CRGB::COL_NOR;leds[24]=CRGB::COL_NOR; 
  leds[23]=CRGB::COL_NOR;leds[22]=CRGB::COL_NOR;leds[21]=CRGB::COL_NOR;leds[20]=CRGB::COL_NOR;leds[19]=CRGB::COL_NOR;leds[18]=CRGB::COL_NOR;leds[17]=CRGB::COL_NOR;leds[16]=CRGB::COL_NOR;
  leds[15]=CRGB::COL_NOR;leds[14]=CRGB::COL_NOR;leds[13]=CRGB::COL_NOR;leds[12]=CRGB::COL_NOR;leds[11]=CRGB::COL_NOR;leds[10]=CRGB::COL_NOR;leds[9]=CRGB::COL_NOR; leds[8]=CRGB::COL_NOR;
  leds[7]=CRGB::COL_NOR; leds[6]=CRGB::COL_NOR; leds[5]=CRGB::COL_NOR; leds[4]=CRGB::COL_NOR; leds[3]=CRGB::COL_NOR; leds[2]=CRGB::COL_NOR; leds[1]=CRGB::COL_NOR; leds[0]=CRGB::COL_NOR;
  */
