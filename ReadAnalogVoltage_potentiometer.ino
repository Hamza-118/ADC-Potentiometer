void setup() {
Serial.begin(9600);
}
void loop() {
  int x = analogRead(A1);
  float V = (5.0 / 1023.0) * x;
  Serial.println(V);
}
