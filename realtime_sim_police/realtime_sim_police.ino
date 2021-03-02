#include <LiquidCrystal.h>

LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
char incomingByte = 0;

void setup() {
  Serial.begin(9600);
  
  lcd.begin(16, 4);  
  lcd.clear();      
  lcd.setCursor(0,0);
  lcd.print("INTRUDER SYS");

}

void loop() {
  if(Serial.available()>0){
    incomingByte = Serial.read();
    if(incomingByte == 1){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("MASTER WINDOW");
    }
    if(incomingByte == 2){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("FRONT WINDOW");
    }
    if(incomingByte == 3){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("FRONT DOOR");
    }
    if(incomingByte == 4){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("DINING WINDOW");
    }
    if(incomingByte == 5){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("GUEST WINDOW");
    }
    if(incomingByte == 6){
      lcd.setCursor(0,1);
      lcd.print("CALL INCOMING");
      lcd.setCursor(0,2);
      lcd.print("ALFRED HOUSE");
      lcd.setCursor(0,3);
      lcd.print("BACK DOOR");
    }
  }
}
