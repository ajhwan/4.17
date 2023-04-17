void setup() {
  // put your setup code here, to run once:
  DDRD |= 0x40;        
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD |= 0x40;        
  delay(1000);          
  PORTD &= ~0x40;       
  delay(1000);         
}