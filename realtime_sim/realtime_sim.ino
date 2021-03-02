//-----------PROJECT TITLE: INTRUDER ALARM SYSTEM-----------
//--------------------CLASS: BENG 18 COE--------------------
//-------------------REG_NO: 160230220057-------------------
//---------------NAME: ALFRED MALENGO KONDORO---------------

//---------------------------------------------------------


//Inputs
#define snsone A0
#define snstwo A1
#define snsthr A2
#define snsfur A3
#define snsfiv A4
#define snssix A5

//Outputs
#define ledone 3
#define ledtwo 4
#define ledthr 5
#define ledfur 6
#define ledfiv 7
#define ledsix 8

#define buz 9

void setup() {
  pinMode(snsone, INPUT);
  pinMode(snstwo, INPUT);
  pinMode(snsthr, INPUT);
  pinMode(snsfur, INPUT);
  pinMode(snsfiv, INPUT);
  pinMode(snssix, INPUT);
  pinMode(ledone, OUTPUT);
  pinMode(ledtwo, OUTPUT);
  pinMode(ledthr, OUTPUT);
  pinMode(ledfur, OUTPUT);
  pinMode(ledfiv, OUTPUT);
  pinMode(ledsix, OUTPUT);
  pinMode(buz, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(snsone)){
    delay(1000);
    Serial.write(1);
    digitalWrite(ledone, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledone, LOW);
    
  }
    if(digitalRead(snstwo)){
    delay(1000);
    Serial.write(2);
    digitalWrite(ledtwo, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledtwo, LOW);
  }
    if(digitalRead(snsthr)){
    delay(1000);
    Serial.write(3);
    digitalWrite(ledthr, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledthr, LOW);
  }
    if(digitalRead(snsfur)){
    delay(1000);
    Serial.write(4);
    digitalWrite(ledfur, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledfur, LOW);
  }
    if(digitalRead(snsfiv)){
    delay(1000);
    Serial.write(5);
    digitalWrite(ledfiv, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledfiv, LOW);
  }
    if(digitalRead(snssix)){   
    delay(1000);
    Serial.write(6);
    digitalWrite(ledsix, HIGH);
    digitalWrite(buz,HIGH);
    delay(1000);
    digitalWrite(buz,LOW);
    digitalWrite(ledsix, LOW);
  }
}
