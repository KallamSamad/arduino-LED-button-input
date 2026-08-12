#define BUTTON_PIN 2
#define LED_PIN 12
void setup() {
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

 
}

void loop() {
  if(digitalRead(BUTTON_PIN) == HIGH){
    Serial.println("Button is pressed!");
    digitalWrite(LED_PIN,HIGH);

  }
  else{
    Serial.println("Button is not pressed");
    digitalWrite(LED_PIN,LOW);
  

  }
  // put your main code here, to run repeatedly:
  delay(100);
}
