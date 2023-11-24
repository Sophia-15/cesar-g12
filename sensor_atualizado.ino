int sensor = 8;
int status;
int led = 12;

void setup (){

  pinMode(status, INPUT);
  Serial.begin(9600);

}

void loop (){

  status = digitalRead(sensor);
  if (status){
    digitalWrite(led, HIGH);

  }else{
    digitalWrite(led, LOW);
    Serial.println("abre");
    delay(500);
  }

}

