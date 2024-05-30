const int button_1_pin = 10;
const int button_2_pin = 9;
const int led_pin = 11;

void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_1_pin, INPUT);
  pinMode(button_2_pin, INPUT);

}

void loop() {
  if(digitalRead(button_1_pin) == HIGH && digitalRead(button_2_pin) == HIGH){
    analogWrite(led_pin, 64);
    } else if(digitalRead(button_1_pin) == HIGH){
    analogWrite(led_pin, 191);
    } else if(digitalRead(button_2_pin) == HIGH){
    analogWrite(led_pin, 127);
    }else{
      analogWrite(led_pin, 255);
      }

}
