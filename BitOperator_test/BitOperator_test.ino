int a =  92;  // 0101 1100
int b = 101;  // 0110 0101
int c = a & b;  // 0100 0100 
int d = a | b;
int e = a ^ b;
int f = ~a;
int g = a << 3;
int h = b >> 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("AND : ");
  Serial.println(c);
  Serial.print("OR : ");
  Serial.println(d);
  Serial.print("XOR : ");
  Serial.println(e);
  Serial.print("NOT : ");
  Serial.println(f);
  Serial.print("SHIFT : ");
  Serial.println(g);
  Serial.print("SHIFT : ");
  Serial.println(h);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println(c);
  // delay(500);
}