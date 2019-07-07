#define sensor    A2
int gasLevel = 0;
String quality = "";

void setup() {
  Serial.begin(9600);
  pinMode(sensor,INPUT);
}

void loop() {

  gasLevel = analogRead(sensor);
  
  if(gasLevel < 175){
      quality = "GOOD!";
    }
  else if (gasLevel > 175 && gasLevel < 225){
      quality = "Slightly polluted";
    }
  else if(gasLevel > 225 && gasLevel < 300){
      quality = "POLLUTED!";
    }
  else if(gasLevel > 300){
      quality = "HIGHLY POLLUTED";
    }
//Serial.println(gasLevel);
Serial.println(quality);
}

/*
 * vcc to 5v line
 * mq gnd to arduino gnd line
 * mq A0 to arduino A2
 */
