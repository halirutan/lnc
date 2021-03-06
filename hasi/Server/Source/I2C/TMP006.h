#pragma once

#ifndef TMP006_H
#define TMP006_H

#include "I2CMember.h"
#include "IAnalogIn.h"
#include <array>

namespace I2C {

class TMP006 : public I2CMember, public IAnalogIn {
public:
  TMP006(uint8_t busID, uint8_t i2cAddress,
          const std::string& devID,
          const std::string& hrname,
          const HAS::HASConfigPtr config,
          std::shared_ptr<I2CBusManager> busManager);
  virtual void init();
  virtual std::string getDesc() const;


  // IAnalogIn Interface
  virtual uint8_t getAnalogInChannelCount() const {return 2;}
  virtual uint32_t pollAnalogIn();
  virtual float getAnalog(uint8_t iChannel);
  virtual std::string getAnalogChannelDesc(uint8_t iChannel) const;
  virtual std::string getAnalogChannelUnit(uint8_t iChannel) const;

private:
  double readDieTempC();
  double readObjTempC();

  int16_t readRawDieTemperature();
  int16_t readRawVoltage();

  uint16_t read16(uint8_t reg);
  void write16BE(uint8_t reg, uint16_t value);

};

}

#endif // TMP006_H

/*
   The MIT License

   Copyright (c) 2016 Jens Krueger

   Permission is hereby granted, free of charge, to any person obtaining a
   copy of this software and associated documentation files (the "Software"),
   to deal in the Software without restriction, including without limitation
   the rights to use, copy, modify, merge, publish, distribute, sublicense,
   and/or sell copies of the Software, and to permit persons to whom the
   Software is furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
   OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
   DEALINGS IN THE SOFTWARE.
*/

