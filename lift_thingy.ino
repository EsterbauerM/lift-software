#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>

#define SCREEN_WIDTH 128 // OLED display width,  in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET -1
#define i2c_Address 0x3c

Adafruit_SH1106G display = Adafruit_SH1106G(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// 'up', 13x64px
const unsigned char ArrowUpup [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00
};
// 'up2', 13x64px
const unsigned char ArrowUpup2 [] PROGMEM = {
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up4', 13x64px
const unsigned char ArrowUpup4 [] PROGMEM = {
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up6', 13x64px
const unsigned char ArrowUpup6 [] PROGMEM = {
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up8', 13x64px
const unsigned char ArrowUpup8 [] PROGMEM = {
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up10', 13x64px
const unsigned char ArrowUpup10 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up12', 13x64px
const unsigned char ArrowUpup12 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00
};
// 'up14', 13x64px
const unsigned char ArrowUpup14 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 
  0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0
};
// 'up16', 13x64px
const unsigned char ArrowUpup16 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 
  0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 
  0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70, 0x60, 0x30, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x00, 0x0f, 0x80, 0x1d, 0xc0, 0x38, 0xe0, 0x70, 0x70
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1296)
const int ArrowUpallArray_LEN = 9;
const unsigned char* ArrowUpallArray[9] = {
  ArrowUpup,
  ArrowUpup2,
  ArrowUpup4,
  ArrowUpup6,
  ArrowUpup8,
  ArrowUpup10,
  ArrowUpup12,
  ArrowUpup14,
  ArrowUpup16
};



// 'up', 13x64px
const unsigned char ArrowDownup [] PROGMEM = {
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up2', 13x64px
const unsigned char ArrowDownup2 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00
};
// 'up4', 13x64px
const unsigned char ArrowDownup4 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80
};
// 'up6', 13x64px
const unsigned char ArrowDownup6 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0
};
// 'up8', 13x64px
const unsigned char ArrowDownup8 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30
};
// 'up10', 13x64px
const unsigned char ArrowDownup10 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up12', 13x64px
const unsigned char ArrowDownup12 [] PROGMEM = {
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up14', 13x64px
const unsigned char ArrowDownup14 [] PROGMEM = {
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'up16', 13x64px
const unsigned char ArrowDownup16 [] PROGMEM = {
  0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 0x1d, 0xc0, 0x0f, 0x80, 
  0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x30, 0x70, 0x70, 0x38, 0xe0, 
  0x1d, 0xc0, 0x0f, 0x80, 0x07, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 1296)
const int ArrowDownallArray_LEN = 9;
const unsigned char* ArrowDownallArray[9] = {
  ArrowDownup,
  ArrowDownup2,
  ArrowDownup4,
  ArrowDownup6,
  ArrowDownup8,
  ArrowDownup10,
  ArrowDownup12,
  ArrowDownup14,
  ArrowDownup16
};


//=========================================================================================================================

const int E1_PIN = 3;
const int E2_PIN = 5;
const int E3_PIN = 6;

int lastFloor = 0;
int calledFloor;
int goTime;





void setup() {
  pinMode(E1_PIN, INPUT_PULLUP);
  pinMode(E2_PIN, INPUT_PULLUP);
  pinMode(E3_PIN, INPUT_PULLUP);

  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);

  Serial.begin(9600);

  delay(250);
  display.begin(i2c_Address, true);
  display.display();
  delay(2000);

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(SH110X_WHITE);
  oledDisplayCenter("Welcome!");
  delay(3000);
  display.clearDisplay();
  display.display();
  
  display.setTextSize(1);
  currentFloorStatus(); 
  
}

//------------------------------------------------------------------------------

void loop() {
  int floorState = -1;
  String callouts;

  while(floorState!=calledFloor){
    if(!digitalRead(E1_PIN)){
      calledFloor = 0;
      floorState = calledFloor;
    }
    else if(!digitalRead(E2_PIN)){
      calledFloor = 1;
      floorState = calledFloor;
    }
    else if(!digitalRead(E3_PIN)){
      calledFloor = 2;
      floorState = calledFloor;
    }
  }

  if(calledFloor != lastFloor){
    onMyWay();
    lastFloor = calledFloor;
  }
  if(calledFloor == lastFloor){
    lastFloor = calledFloor;
    floorState = arrived();
  }
}

//------------------------------------------------------------------------------

void onMyWay(){
  
  digitalWrite(11,LOW);
  display.clearDisplay();
  digitalWrite(12,HIGH);
  anim();

  digitalWrite(12,LOW);
  display.clearDisplay();
  display.display();
}

//------------------------------------------------------------------------------

int arrived(){
  display.clearDisplay();
  oledDisplayCenter("I'm here!");
  currentFloorStatus();  
  digitalWrite(11,HIGH);
  delay(1000);
  display.clearDisplay();
  display.display();
  currentFloorStatus();  
  
  return -1;
}

//------------------------------------------------------------------------------

void anim(){
  
  int offset;
  int setting = calledFloor-lastFloor; //do it go up or down ? (negative -> down)
  uint16_t width;
  uint16_t height;
  const int speed = 10;  //speed at which the arrows are moving
  int frame = 0;

  
  int notch = 0;

  if(setting == 2 || setting== -2)   //goTime change
    goTime=1000;

  else 
    goTime=500;
  
  display.setTextSize(2);

  display.clearDisplay();
  display.display();

  offset = 0;
  notch = 0;
  
  if(setting > 0){
    
    
    long timeDif = millis();
    while(goTime>millis()-timeDif){
      if(millis()-timeDif < notch)
        delay(notch-(millis()-timeDif));
        
      if(frame==(ArrowUpallArray_LEN ))
        frame = 0;
          
      display.drawBitmap((SCREEN_WIDTH - width)/2,0,ArrowUpallArray[frame],13,64,SH110X_WHITE);
      display.display();
      display.clearDisplay();
      frame++;
      notch += speed;
    }
  }

  else if(setting < 0){

    long timeDif = millis();
    
    while(goTime>millis()-timeDif){
      if(millis()-timeDif < notch)
        delay(notch-(millis()-timeDif));
        
      if(frame==(ArrowDownallArray_LEN ))
        frame = 0;
        
      display.drawBitmap((SCREEN_WIDTH - width)/2,0,ArrowDownallArray[frame],13,64,SH110X_WHITE);
      display.display();
      display.clearDisplay();
      frame++;
      notch += speed;
    }
  }
  
  
  display.setTextSize(1);
}

//------------------------------------------------------------------------------

void currentFloorStatus(){

  display.setCursor(2,2);
  switch(lastFloor){
    case 0:display.println("EG");
    break;
    case 1:display.println("1. Stock");
    break;
    case 2:display.println("2. Stock");
    break;
  }
  display.display();
}

//------------------------------------------------------------------------------

void oledDisplayCenter(String text) {
  int16_t x1;
  int16_t y1;
  uint16_t width;
  uint16_t height;

  display.getTextBounds(text, 0, 0, &x1, &y1, &width, &height);

  // display on horizontal and vertical center
  display.clearDisplay(); // clear display
  display.display();
  display.setCursor((SCREEN_WIDTH - width) / 2, (SCREEN_HEIGHT - height) / 2);
  display.println(text); // text to display
  display.display();
}

//------------------------------------------------------------------------------
