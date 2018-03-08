#include "Arduino.h"
#include "Blink.h"

Blink::Blink(int num){
  pinMode(num, OUTPUT);
  _num = num;
}

void Blink::on(int t){
  digitalWrite(_num, HIGH);
  delay(t);
}
void Blink::off(int t){
  digitalWrite(_num, LOW);
  delay(t);
}
