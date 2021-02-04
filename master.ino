#include <Wire.h>                  // Include Wire library (required for I2C devices)
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x38, 16, 2);

int C1=12;
int C2=11;

int b1=2;

int in=LOW;
int led=LOW;

void setup() {
  lcd.init();

pinMode(b1,INPUT);


  pinMode(C1,OUTPUT);
  pinMode(C2,INPUT);
  digitalWrite(C1,LOW);
}


void comienzo()
{
lcd.setCursor(0,0);
lcd.print(" Arduino 1ro ");

in=digitalRead(b1);

if(in==HIGH)
 {led=1;
 while(led==HIGH)
 {
digitalWrite(C1,HIGH);
int in1=digitalRead(C2);






if(in1==HIGH)
{
  while(led==HIGH)
 {led=1;
  digitalWrite(C1,LOW);
  comienzo();}
}
  
 }
 
}


}


void loop() {

lcd.setCursor(0,0);
lcd.print(" Arduino 1ro ");
digitalWrite(C1,LOW);
int in=digitalRead(b1);

if(in==HIGH)
 {led=1;
 while(led==HIGH)
 {
  
digitalWrite(C1,HIGH);
int in1=digitalRead(C2);


if(in1==HIGH)
{
  while(led==HIGH)
 {led=1;
  digitalWrite(C1,LOW);
  comienzo();}
}
  
 }
}


}
