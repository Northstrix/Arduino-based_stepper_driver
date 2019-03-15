//THIS SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
//YOU CAN USE OR CHANGE ANY PART OF THIS CODE.
//Copyright (c) Maxim Bortnikov 2019
//https://github.com/Northstrix
 void setup() {
  pinMode(3,OUTPUT);  // initialize pin 3 as an output.
  pinMode(4,OUTPUT);  // initialize pin 4 as an output.
  pinMode(5,OUTPUT);  // initialize pin 5 as an output.
  pinMode(6,OUTPUT);  // initialize pin 6 as an output.
  pinMode(12,OUTPUT); // initialize pin 12 as an output. 
  pinMode(13,OUTPUT); // initialize pin 13 as an output.
}

void loop() {

 if (analogRead(A1) >900) // if S1 is pressed, then clockwise rotation
{

 float del, dela = analogRead(A0); // read the value from pin A0
 del = (dela/8)+2; // del is delay between the pulses
 digitalWrite(6,LOW); // the sequence of the pulses
 digitalWrite(3,HIGH);
 delay(del);
 digitalWrite(4,HIGH);
 digitalWrite(3,LOW);
 delay(del);
 digitalWrite(5,HIGH);
 digitalWrite(4,LOW);
 delay(del);
 digitalWrite(6,HIGH);
 digitalWrite(5,LOW);
 delay(del);
 digitalWrite(13,HIGH);
 digitalWrite(12,LOW);
}
else if (analogRead(A2)>900) // if S2 is pressed, then counter-clockwise rotation
{
 float del, dela = analogRead(A0); // the same as above
 del = (dela/8)+2;                //
 digitalWrite(3,LOW); // reverse sequence of the pulses
 digitalWrite(6,HIGH);
 delay(del);
 digitalWrite(5,HIGH);
 digitalWrite(6,LOW);
 delay(del);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
 delay(del);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 delay(del);
 digitalWrite(12,HIGH);
 digitalWrite(13,LOW);
}
else // if both buttons unpressed, then do nothing
{
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}

}

