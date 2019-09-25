
#ifndef _BarGraphH_
#define _BarGraphH_

// #include "TFT_eSPI.h"
#include <Arduino.h>
#include "Adafruit_ILI9341.h" // Library Manager

#define SCALECOLOR 0xFFFF

class BarGraph
{
	using adafruit_tft = Adafruit_ILI9341;
  public:
	adafruit_tft *_tft;
    BarGraph();
	void begin(int l, int u, int x, int y, adafruit_tft* tft);
	void setColor(int bar, int back);
    void drawBar(int nPer);
	void drawScale();
	void drawText(String s) ;
	void drawText(char* s) ;
	void drawText(int v) ;
	void drawText(float v, int p) ;
  private:
     int _lastPercent;
	 int _upper;
	 int _lower;
	 int _barColor;
	 int _backColor;
	 int _x;
	 int _y;
};

#endif