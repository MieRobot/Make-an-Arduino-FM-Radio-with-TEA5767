// TEA5767 Example

#include <Wire.h>
#include <TEA5767Radio.h>

TEA5767Radio radio = TEA5767Radio();

void setup()
{ 
  Wire.begin();
  radio.setFrequency(91.9); // pick your own frequency 102.9 Vivid Bharati, 101.3 Air rainbow, 92.7 Big FM 91.1 RADIO city 91.9 radio indigo
}

void loop()
{
}
