#include <Wire.h>                  // Include Wire library (required for I2C devices)
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x38, 16, 2);

int C1=7;
int C2=6;

int B2=2;
int Read=LOW;
int led=1;

void setup() {
  delay(1000);
lcd.init();
  pinMode(C1,INPUT);
  pinMode(C2,OUTPUT);
  
  pinMode(B2,INPUT);
}


void comienzo()
{
Read=digitalRead(C1);

 if(Read==HIGH)
 {
  
lcd.setCursor(0,0);
lcd.print(" Arduino 2do ");
 
int in=digitalRead(B2);
if(in==HIGH)
 {led=1;
 while(led==1)
 {
  
digitalWrite(C2,HIGH);
int in1=digitalRead(C1);

if(in1==HIGH)
{led=1;
 while(led==1)
 {
  digitalWrite(C2,LOW);
  comienzo();
}
 
 }}}}}


void loop() {
int Read=digitalRead(C1);
digitalWrite(C2,LOW);



 if(Read==HIGH)
 {led=1;
 while(led==1)
 {
lcd.setCursor(0,0);
lcd.print(" Arduino 2do ");


int in=digitalRead(B2);
if(in==HIGH)
 {led=1;
 while(led==1)
 {
  
digitalWrite(C2,HIGH);
int in1=digitalRead(C1);

if(in1==HIGH)
{led=1;
 while(led==1)
 {
  digitalWrite(C2,LOW);
  comienzo();
}
 
 }}}

 
}

}}
