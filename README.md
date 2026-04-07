# simple-marquee
A simple NeoPixel test program using non-blocking timers.
This is a simple marquee program used to test a WS2812 LED module. It makes each LED light up in turn and loops continuously. The program does not use a "for" loop, but instead uses a "non-blocking timer" check to accumulate values, in order to avoid blocking the main loop.

# Installation
This is a PlatformIO project. Please refer to the [platformio.ini](https://github.com/study-gowin100/simple-marquee/blob/main/platformio.ini) file for details.

# Credits
The project uses the [Adafruit NeoPixel Library](https://github.com/adafruit/adafruit_neopixel).

# License
The [original license of Adafruit NeoPixel Library](https://github.com/adafruit/adafruit_neopixel?tab=LGPL-3.0-1-ov-file).
