#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    291 // only 291 without first led
#define BRIGHTNESS  90
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

// white to GND, red to 5V, yellow/green to 7

void setup() {
    delay( 1000 ); // power-up safety delay
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    FastLED.setBrightness(BRIGHTNESS);
}


void loop()
{
  //these stay on for the entire first part
  leds[50] = CRGB::White;
  leds[51] = CRGB::White;
  leds[54] = CRGB::White;
  leds[55] = CRGB::White;
  leds[90] = CRGB::White;
  leds[168] = CRGB::White;
  leds[170] = CRGB::White;
  leds[180] = CRGB::White;
  leds[182] = CRGB::White;
  leds[201] = CRGB::White;
  leds[202] = CRGB::White;
  leds[203] = CRGB::White;
  leds[204] = CRGB::White;
  FastLED.show();

  leds[0] = CRGB::White;
  FastLED.show();
  delay(600);
  leds[0] = CRGB::Black;

  leds[10] = CRGB::White;
  FastLED.show();
  delay(650);
  leds[10] = CRGB::Black;

  leds[30] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[30] = CRGB::Black;

  leds[289] = CRGB::White;
  FastLED.show();
  delay(310);
  leds[289] = CRGB::Black;

  leds[290] = CRGB::White;
  FastLED.show();
  delay(550);
  leds[290] = CRGB::Black;

  leds[291] = CRGB::White;
  FastLED.show();
  delay(300);
  leds[291] = CRGB::Black;

  leds[100] = CRGB::White;
  leds[101] = CRGB::White;
  leds[102] = CRGB::White;
  leds[103] = CRGB::White;
  leds[104] = CRGB::White;
  leds[105] = CRGB::White;
  leds[106] = CRGB::White;
  FastLED.show();
  delay(600);
  leds[100] = CRGB::Black;
  leds[101] = CRGB::Black;
  leds[102] = CRGB::Black;
  leds[103] = CRGB::Black;
  leds[104] = CRGB::Black;
  leds[105] = CRGB::Black;
  leds[106] = CRGB::Black;

  leds[30] = CRGB::White;
  FastLED.show();
  delay(600);
  leds[30] = CRGB::Black;

  leds[0] = CRGB::White;
  leds[61] = CRGB::White;
  leds[64] = CRGB::White;
  leds[65] = CRGB::White;
  leds[67] = CRGB::White;
  leds[80] = CRGB::White;
  leds[107] = CRGB::White;
  leds[108] = CRGB::White;
  leds[109] = CRGB::White;
  leds[110] = CRGB::White;
  leds[128] = CRGB::White;
  leds[139] = CRGB::White;
  leds[149] = CRGB::White;
  leds[153] = CRGB::White;
  leds[273] = CRGB::White;
  leds[279] = CRGB::White;
  leds[280] = CRGB::White;
  leds[281] = CRGB::White;
  leds[282] = CRGB::White;
  leds[283] = CRGB::White;
  leds[285] = CRGB::White;
  leds[286] = CRGB::White;
  FastLED.show();
  delay(450);
  leds[0] = CRGB::Black;
  leds[61] = CRGB::Black;
  leds[64] = CRGB::Black;
  leds[65] = CRGB::Black;
  leds[67] = CRGB::Black;
  leds[80] = CRGB::Black;
  leds[107] = CRGB::Black;
  leds[108] = CRGB::Black;
  leds[109] = CRGB::Black;
  leds[110] = CRGB::Black;
  leds[128] = CRGB::Black;
  leds[139] = CRGB::Black;
  leds[149] = CRGB::Black;
  leds[153] = CRGB::Black;
  leds[273] = CRGB::Black;
  leds[279] = CRGB::Black;
  leds[280] = CRGB::Black;
  leds[281] = CRGB::Black;
  leds[282] = CRGB::Black;
  leds[283] = CRGB::Black;
  leds[285] = CRGB::Black;
  leds[286] = CRGB::Black;

  leds[90] = CRGB::White;
  FastLED.show();
  delay(650);
  leds[90] = CRGB::Black;

  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;

  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;

  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;
  
  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;
  
  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;

  leds[223] = CRGB::White;
  FastLED.show();
  delay(400);
  leds[223] = CRGB::Black;

  //just add stuff to above this until you get the desired time
  
      for(int led = 0; led < NUM_LEDS; led = led + 1) {
      leds[led] = CRGB::Black;
      FastLED.show();
     }

  
     for(int led = 0; led < NUM_LEDS; led = led + 1) {
      leds[led] = CRGB::MediumBlue;
      FastLED.show();
      delay(25);
     }

     //add loops to go to music idk how to do this efficiently so good luck!!!
     // also, I don't know how to do it so that it's not going one by one without calling each
     // individual led (even without a delay, it still calls each led one by one :()
     for(int led = 0; led < 28; led = led + 1) {
      leds[led] = CRGB::Black;
      FastLED.show();
     }

     delay(1000);

      for(int led = 0; led < 28; led = led + 1) {
      leds[led] = CRGB::MediumBlue;
      FastLED.show();
     }

      for(int led = NUM_LEDS; led >= 0; led = led -1 ) {
      leds[led] = CRGB::Black;
      FastLED.show();
      delay(25);
     }

     delay(10000);
}

