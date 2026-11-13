// ============================================================
//   User_Setup.h بۆ CYD وەشانی کۆن (ILI9341، 240x320)
//   شوێن: Documents\Arduino\libraries\TFT_eSPI\User_Setup.h
// ============================================================

#define USER_SETUP_ID 801

// ---------------------- درایڤەر ----------------------
// وەشانی کۆن ILI9341_2_DRIVER بەکاردەهێنێت
// ئەگەر شاشە ڕووناک بوو بەڵام هیچ داتایەک نەبوو، ST7789_DRIVER تاقی بکەرەوە (لە خوارەوە بگۆڕە)
#define ILI9341_2_DRIVER
// #define ST7789_DRIVER

// ---------------------- ئەندازەی شاشە ----------------------
#define TFT_WIDTH  240
#define TFT_HEIGHT 320

// ---------------------- پینەکانی پەیوەندی ----------------------
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC    2
#define TFT_RST  -1

// ---------------------- ڕووناکی پاشەوە ----------------------
#define TFT_BL   21
#define TFT_BACKLIGHT_ON HIGH

// ---------------------- ڕێکخستنی SPI ----------------------
// خێرایی زۆر بەرز لەوانەیە ببێتە هۆی نەبوونی داتا، سەرەتا 27MHz تاقی بکەرەوە
// #define SPI_FREQUENCY  55000000
#define SPI_FREQUENCY  27000000
#define SPI_READ_FREQUENCY  20000000

// ---------------------- فۆنت ----------------------
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// ---------------------- پەیوەندی دەستکەوتن ----------------------
// #define TOUCH_CS 33  // ئەگەر پێویستت بە دەستکەوتنە، ئەمە چالاک بکە