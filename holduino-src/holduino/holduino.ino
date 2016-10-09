#include <Servo.h>

#include <MyoController.h>

#define FIST_PIN 9
#define REST_PIN 12
#define WAVEOUT_PIN 10
//#define FINGERSSPREAD_PIN 10
#define DOUBLETAP_PIN 11
#define CLOSE   0
#define REST    1
#define OPEN    2

MyoController myo = MyoController();
Servo myServo;
int delayT;
int angleMod; //must be [0,90]

void setup() {

  pinMode(FIST_PIN, OUTPUT);
  pinMode(REST_PIN, OUTPUT);
  pinMode(WAVEOUT_PIN, OUTPUT);
  //pinMode(FINGERSSPREAD_PIN, OUTPUT);
  pinMode(DOUBLETAP_PIN, OUTPUT);
  myServo.attach(6);
  angleMod = 90;
  delayT = 250*(angleMod/45);
  
  myo.initMyo();

}

void loop()
{
   myo.updatePose();
   switch ( myo.getCurrentPose() ) {
    case rest:
      digitalWrite(FIST_PIN,LOW); 
      digitalWrite(REST_PIN,HIGH);
      digitalWrite(WAVEOUT_PIN,LOW);
      //digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,LOW);
      if(REST*angleMod != myServo.read()){
        myServo.write(REST*angleMod);
        //delay(delayT);
      }
      break;
    case fist:
      digitalWrite(FIST_PIN,HIGH); 
      digitalWrite(REST_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,LOW);
      //digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,LOW);
      if(CLOSE != myServo.read()){
        myServo.write(CLOSE);
        delay(delayT);
      }
      break;
//    case waveIn:
//      digitalWrite(WAVEIN_PIN,HIGH);
//      break;
    case waveOut:
      digitalWrite(FIST_PIN,LOW); 
      digitalWrite(REST_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,HIGH);
      //digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,LOW);
      if(OPEN*angleMod != myServo.read()){
        //Serial.write("fingers spread");
        myServo.write(OPEN*angleMod);
        delay(delayT);
      }
      break;
    case fingersSpread:
      digitalWrite(FIST_PIN,LOW); 
      digitalWrite(REST_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,HIGH);
      //digitalWrite(FINGERSSPREAD_PIN,HIGH);
      digitalWrite(DOUBLETAP_PIN,LOW);
      if(OPEN*angleMod != myServo.read()){
        myServo.write(OPEN*angleMod);
        delay(delayT);
      }
      break;
    case doubleTap:
      digitalWrite(FIST_PIN,LOW); 
      digitalWrite(REST_PIN,LOW);
      digitalWrite(WAVEOUT_PIN,LOW);
      //digitalWrite(FINGERSSPREAD_PIN,LOW);
      digitalWrite(DOUBLETAP_PIN,HIGH);
      myServo.write(CLOSE*angleMod);
      delay(delayT);
      myServo.write(REST*angleMod);
      delay(delayT);
      myServo.write(CLOSE*angleMod);
      delay(delayT);
      myServo.write(REST*angleMod);
      break;
   } 
   delay(50);
}
