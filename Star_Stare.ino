int potPin = A2;
int lightSense = A1;
int X;
int ledRED1 = 11;
int ledgreen1 = 10;

float ledRED2 = 9;   // select the pin for the LED
int ledGREEN2 = 6;

int ledBLUE3 = 5;
int ledRED3 = 3;

int val = 0;
int val2 = 0;

void setup() {
  Serial.begin(9600);
    pinMode(lightSense, INPUT);
    pinMode(potPin, INPUT);
  pinMode(ledRED1, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(ledgreen1, OUTPUT);  // declare the ledPin as an OUTPUT

  pinMode(ledRED2, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(ledGREEN2, OUTPUT);  // declare the ledPin as an OUTPUT

  pinMode(ledBLUE3, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(ledRED3, OUTPUT);  // declare the ledPin as an OUTPUT

}

void loop() {
  float counter = 1;
  float counter2 = 1;
  float counter3 = 1;
  float x = random(0, 255);
  float y = random(0, 255);
  float a;
  float b;
  float c;
  float d;
  float e;
  float f;
  float kill;
  float jack;
  float mom;
  float dad;
  float kek;
  float pog;
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue2 = 85 ; fadeValue2 >= 0; fadeValue2 --) {

      a = x / 255;
      b = y / 255;

      kill = x - (a * counter2);
      jack =  y - (b * counter2)  ;
      analogWrite(ledRED1, kill);
      analogWrite(ledgreen1, jack);
      counter2++;
      delay(10);

    }
    counter = 1;
    float z = random(0, 255);
    float h = random(0, 255);


  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue2 = 85; fadeValue2 >= 0; fadeValue2 --) {

      c = z / 255;
      d = h / 255;

      mom = z - (c * counter);
      dad =  h - (d * counter)  ;
      analogWrite(ledRED3, mom);
      analogWrite(ledBLUE3, dad);
      counter++;
      if (counter2 < 255) {
        a = x / 255;
        b = y / 255;
        kill = x - (a * counter2);
        jack =  y - (b * counter2)  ;
        analogWrite(ledRED1, kill);
        analogWrite(ledgreen1, jack);
        counter2++;
      }
      delay(10);
    }
    float honestly = random(0, 255);
    float idk = random(0, 10);
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue3 = 85; fadeValue3 >= 0; fadeValue3 --) {

      e = honestly / 255;
      f = idk*10 / 255;

      kek = honestly - (e * counter3);
      pog =  idk*10 - (f * counter3)  ;

      analogWrite(ledRED2, kek);
      analogWrite(ledGREEN2, pog);
      counter3++;

      if (counter < 255) {
        c = z / 255;
        d = h / 255;

        mom = z - (c * counter);
        dad =  h - (d * counter)  ;
        analogWrite(ledRED3, mom);
        analogWrite(ledBLUE3, dad);
        counter++;
      }

      if (counter2 < 255) {
        a = x / 255;
        b = y / 255;
        kill = x - (a * counter2);
        jack =  y - (b * counter2)  ;
        analogWrite(ledRED1, kill);
        analogWrite(ledgreen1, jack);
        counter2++;
      }
      delay(10);
    }
  
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue4 = 170; fadeValue4 >= 0; fadeValue4 --) {
if (counter3 < 255) {
      e = honestly / 255;
      f = idk*10 / 255;

      kek = honestly - (e * counter3);
      pog =  idk*10 - (f * counter3)  ;

      analogWrite(ledRED2, kek);
      analogWrite(ledGREEN2, pog);
      counter3++;
 Serial.println(counter3);
}
      if (counter < 255) {
        c = z / 255;
        d = h / 255;

        mom = z - (c * counter);
        dad =  h - (d * counter)  ;
        analogWrite(ledRED3, mom);
        analogWrite(ledBLUE3, dad);
        counter++;
      }
      delay(10);
    }
    }
    else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledRED1, 0);
    analogWrite(ledgreen1, 0);
    delay(10);
  }
    
}
else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledRED1, 0);
    analogWrite(ledgreen1, 0);
    delay(10);
  }
  }
  else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledRED1, 0);
    analogWrite(ledgreen1, 0);
    delay(10);
  }
}
      else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledRED1, 0);
    analogWrite(ledgreen1, 0);
    delay(10);
  }

}
