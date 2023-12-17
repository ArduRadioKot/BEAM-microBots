#define pin_moto  0
#define pin_led 1
int foto_state = 0;
int dayy = 600;
void setup() {
  // put your setup code here, to run once:
pinMode(pin_moto, OUTPUT);
pinMode(pin_led, OUTPUT);
}

void loop() {
 foto_slate = analogRead(A2);
 if(foto_state < dayy && > 300 ){
  nightlife();
 }
}
void nightlife(){
  map(foto_state ,0,1023,0,255);
  analogWrite(pin_led, foto_state);
  digitalWrite(pin_moto HIGH);
  delay(3000);
  analogWrite(pin_led, 0);
  digitalWrite(pin_moto, LOW);
}
