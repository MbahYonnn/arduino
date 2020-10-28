void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
Serial.println("counter");
}
int i;

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i+1;i++){
    i++;
    Serial.println(i);
    }
}
