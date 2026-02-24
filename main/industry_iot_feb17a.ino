#include "arduino_secrets.h"
#include "thingProperties.h"

void setup() {

  Serial.begin(9600);
  delay(1500); 

  
  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop() {
  ArduinoCloud.update();
  // Your code here  
}



void onFanChange()  {
  
  if(fan)
  {
    Serial.write('A');
  }
  else
  {
    Serial.write('a');
  }
}


void onLightChange()  {
  // Add your code here to act upon Light change
  if(light)
  {
    Serial.write('B');
  }
  else
  {
    Serial.write('b');
  }
}


void onBuzzerChange()  {
  // Add your code here to act upon Buzzer change
  if(buzzer)
  {
    Serial.write('C');
  }
  else
  {
    Serial.write('c');
  }
}

/*
  Since Conveyor is READ_WRITE variable, onConveyorChange() is
  executed every time a new value is received from IoT Cloud.
*/
void onConveyorChange()  {
  // Add your code here to act upon Conveyor change
  if(conveyor)
  {
    Serial.write('D');
  }
  else
  {
    Serial.write('d');
  }
}
