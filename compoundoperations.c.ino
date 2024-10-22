void setup() {
  Serial.begin(9600);
  int a,b,c,d,e,f,g;
  a=5,b=7;
  a+=b;
  Serial.println(a);
  Serial.println(b);
  a-=b;
  Serial.println(a);
  Serial.println(b);
  a*=b;
  Serial.println(a);
  Serial.println(b);
}

void loop() {
}
