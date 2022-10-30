int potPin = A2; //changes light sensitivity
int lightSense = A1; //photoresistor 
int X;
int ledBLUE1 = 11; // green-blue LED
int ledGREEN1 = 10;

float ledRED2 = 9; //red-yellow LED
int ledGREEN2 = 6;

int ledBLUE3 = 5; //blue-purple LED
int ledRED3 = 3;

int val = 0;
int val2 = 0;

void setup() {
  Serial.begin(9600);
    pinMode(lightSense, INPUT);
    pinMode(potPin, INPUT);
  pinMode(ledBLUE1, OUTPUT);  // declare the ledPin as an OUTPUT
  pinMode(ledGREEN1, OUTPUT);  

  pinMode(ledRED2, OUTPUT);  
  pinMode(ledGREEN2, OUTPUT); 

  pinMode(ledBLUE3, OUTPUT);  
  pinMode(ledRED3, OUTPUT); 

}

void loop() {
  float counter3 = 1;
  float counter1 = 1;
  float counter2 = 1;
  float x = random(0, 255);
  float y = random(0, 255);
  float z = random(0, 255);
  float h = random(0, 255);
  float w = random(0, 255);
  float k = random(0, 10);
  float a;
  float b;
  float c;
  float d;
  float e;
  float f;
  float BLUE1val;
  float GREEN1val;
  float RED3val;
  float BLUE3val;
  float RED2val;
  float GREEN2val;
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){ //if photoresistor receives more light than pot specified 
    for (int fadeValue2 = 85 ; fadeValue2 >= 0; fadeValue2 --) {

      a = x / 255; //determines intensity of blue 
      b = y / 255; //determines intensity of green 

      BLUE1val = x - (a * counter1); //blue and green value grow smaller and smaller until 0
      GREEN1val =  y - (b * counter1);
      analogWrite(ledBLUE1, BLUE1val);
      analogWrite(ledGREEN1, GREEN1val);
      counter1++;
      delay(10); 

    }
//blue-green led first cycle
//after 85 cycles, move on to next fade

  if (val2>val){ //checking for photoresistor
    for (int fadeValue2 = 85; fadeValue2 >= 0; fadeValue2 --) {

      c = z / 255; //determines intensity of red 
      d = h / 255; //determines intensity of blue 

      RED3val = z - (c * counter3);
      BLUE3val =  h - (d * counter3);
      analogWrite(ledRED3, RED3val);
      analogWrite(ledBLUE3, BLUE3val);
      counter3++; //red-blue led first cycle
      if (counter1 < 255) {
        a = x / 255;
        b = y / 255;
        BLUE1val = x - (a * counter1);
        GREEN1val =  y - (b * counter1);
        analogWrite(ledBLUE1, BLUE1val);
        analogWrite(ledGREEN1, GREEN1val);
        counter1++; //blue-green led second cycle
      }
      delay(10);
    }
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue3 = 85; fadeValue3 >= 0; fadeValue3 --) {

      e = w / 255;
      f = w*10 / 255; //green is adjusted to make it more prominent

      RED2val = w - (e * counter2);
      GREEN2val =  w*10 - (f * counter2)  ;

      analogWrite(ledRED2, RED2val);
      analogWrite(ledGREEN2, GREEN2val);
      counter2++; //red-green led first cycle

      if (counter3 < 255) {
        c = z / 255;
        d = h / 255;

        RED3val = z - (c * counter3);
        BLUE3val =  h - (d * counter3)  ;
        analogWrite(ledRED3, RED3val);
        analogWrite(ledBLUE3, BLUE3val);
        counter3++; //red-blue led second cycle
      }

      if (counter1 < 255) {
        a = x / 255;
        b = y / 255;
        BLUE1val = x - (a * counter1);
        GREEN1val =  y - (b * counter1)  ;
        analogWrite(ledBLUE1, BLUE1val);
        analogWrite(ledGREEN1, GREEN1val);
        counter1++; //blue-green led last cycle
      }
      delay(10);
    }
  
  val = analogRead(potPin);
  val2 = analogRead(lightSense);


  if (val2>val){
    for (int fadeValue4 = 170; fadeValue4 >= 0; fadeValue4 --) {
      if (counter2 < 255) {
      e = w / 255;
      f = w*10 / 255;

      RED2val = w - (e * counter2);
      GREEN2val =  w*10 - (f * counter2)  ;

      analogWrite(ledRED2, RED2val);
      analogWrite(ledGREEN2, GREEN2val);
      counter2++; //red-green led second/final cycle
}
      if (counter3 < 255) {
        c = z / 255;
        d = h / 255;

        RED3val = z - (c * counter3);
        BLUE3val =  h - (d * counter3)  ;
        analogWrite(ledRED3, RED3val);
        analogWrite(ledBLUE3, BLUE3val);
        counter3++; //red-blue led final cycle
      }
      delay(10);
    }
    }
    else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledBLUE1, 0);
    analogWrite(ledGREEN1, 0);
    delay(10);
  }
    
}
else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledBLUE1, 0);
    analogWrite(ledGREEN1, 0);
    delay(10);
  }
  }
  else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledBLUE1, 0);
    analogWrite(ledGREEN1, 0);
    delay(10);
  }
}
      else {
    analogWrite(ledRED2, 0);
    analogWrite(ledGREEN2, 0);
    analogWrite(ledRED3, 0);
    analogWrite(ledBLUE3, 0);
    analogWrite(ledBLUE1, 0);
    analogWrite(ledGREEN1, 0);
    delay(10);
  }

}
