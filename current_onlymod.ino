#include "EmonLib.h"
EnergyMonitor emon1;

void setup()
{
  Serial.begin(9600);
  pinMode(A1, INPUT);
  ///analogReference(EXTERNAL);
  emon1.current(A1, 28.5);
}

void loop()
{
  double Irms = emon1.calcIrms(1500);

  /*if(Irms<=0.1 && Irms>0.01)
  {
    Irms-=(Irms-0.01);
  }*/
  Serial.println(Irms);
}
