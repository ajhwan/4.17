void setup() {
  // put your setup code here, to run once:
  DDRD = 0x40;
  DDRB = 0x06;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (PIND & 0x80) {
    PORTD |= 0x40;        
    delay(1000);
    PORTB |= 0x02;        
    delay(1000);
    PORTB |= 0x04;        
    delay(1000);      
  }
  else {
    PORTD &= ~0x40; 
    PORTB &= ~0x02; 
    PORTB &= ~0x04;     
    delay(1000);
  }         
}