#include<SoftwareSerial.h>

SoftwareSerial bt(5,6);

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = 0;
  while(bt.available() > 0 )
  {
    data = bt.read();

    if(data == '1')
    {
      digitalWrite(led1, HIGH);
    }
    if(data == '3')
    {
      digitalWrite(led2, HIGH);
    }
    if(data == '5')
    {
      digitalWrite(led3, HIGH);
    }
    if(data == '7')
    {
      digitalWrite(led4, HIGH);
    }
    if(data == '2')
    {
      digitalWrite(led1, LOW);
    }
    if(data == '4')
    {
      digitalWrite(led2, LOW);
    }
    if(data == '6')
    {
      digitalWrite(led3, LOW);
    }
    if(data == '8')
    {
      digitalWrite(led4, LOW);
    }
    if(data == '9')
    {
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
    }
    if(data == '0')
    {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      digitalWrite(led4, LOW);
    }
  }
}

