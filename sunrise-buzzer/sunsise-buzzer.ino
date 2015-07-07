bool wakeyMode = false;
int wakey(String data) {
    wakeyMode=true;
    return 0;
}
void ringBells(){
    for (int i=0; i <= 10; i++){
    delay(1000);
    analogWrite(A0, 1000);
    digitalWrite(D0, LOW);
    delay(500);
    analogWrite(A0, 0);
    digitalWrite(D0, HIGH);
    }
}
void setup() {
  pinMode(A0, OUTPUT);
  pinMode(D0, OUTPUT);
  Spark.function("wakey", wakey);
}
void loop() {
    if (wakeyMode) {
        ringBells();
        delay(180000);
    }
    else {
        digitalWrite(D0, LOW);
    }
    wakeyMode = false;

}
