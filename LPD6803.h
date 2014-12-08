/*
  LEDPixels.cpp - A Library for use with LED Pixels using the LPD6803 Controller chip
  Copyright (c) 2010 Ben Moyes http:www.bliptronics.com  All right reserved.
  
  !!!  Adapted for Spark Core by Paul Kourany, Dec. 2014  !!!
  
  Portions of this library based on the TimerOne library by Michael Polli and Jesse Tane
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#if defined (SPARK)
#include "application.h"
#else
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#endif	//SPARK


class LPD6803 {
 private:
  uint8_t cpumax;

 public:
  LPD6803(uint16_t n, uint8_t dpin, uint8_t cpin);
  void begin();
  void show();
  void doSwapBuffersAsap(uint16_t idx);
  void setPixelColor(uint16_t n, uint8_t r, uint8_t g, uint8_t b);
  void setPixelColor(uint16_t n, uint16_t c);
  void setCPUmax(uint8_t m);
  uint16_t numPixels(void);
};
