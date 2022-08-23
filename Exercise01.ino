int cnt=0;

void setup(){
  Serial.begin(9600);
}

void loop(){
  
  Serial.print("Count : ");
  Serial.println(cnt);
  cnt=cnt+1;
  delay(1000);
}
