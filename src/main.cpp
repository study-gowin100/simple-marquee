/* 
  SPDX-FileCopyrightText: 2026 study-gowin100
  SPDX-License-Identifier: MIT  

  A simple NeoPixel test program using non-blocking timers.
  This is a simple marquee program used to test a WS2812 LED module. It makes each LED light up in turn and loops continuously. The program does not use a "for" loop, but instead uses a "non-blocking timer" check to accumulate values, in order to avoid blocking the main loop.
*/
#include <Arduino.h>
#include <Adafruit_NeoPixel.h> //Add the library to your project by including it in your platformio.ini file under the "lib_deps" section.
#define LED_PIN 14             // the A0 pin
#define LED_COUNT 8            // WS2812 with 8 leds
#define MAX_BRIGHTNESS 150
#define DELAYVAL 250
Adafruit_NeoPixel pixels(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

// put variable declarations here:
uint32_t rgbColor;
int color = MAX_BRIGHTNESS;
int ledId = 0;
int timer;
int delayCount = DELAYVAL;

// put function declarations here:
void simpleChase();

void setup()
{
  // put your setup code here, to run once:
  pixels.begin();
  pixels.clear();
  rgbColor = pixels.Color(color, color, color);
}

void loop()
{
  // put your main code here, to run repeatedly:
  simpleChase();
}

// put function definitions here:
void simpleChase()
{
  if (timer >= delayCount)
  {
    timer = 0;
    if (ledId >= LED_COUNT)
    {
      ledId = 0;
    }
    pixels.clear();

    pixels.setPixelColor(ledId++, rgbColor);

    pixels.show();
  }
  else
  {
    timer++;
    delay(1);
  }
}
