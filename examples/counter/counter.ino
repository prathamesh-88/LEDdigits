#include<LEDdigits.h>

LEDdigits led(COMMON_ANODE,7, 3, 4, 5, 6, 2, 8, 13, 9, 10, 11, 12);
void setup() {
  // put your setup code here, to run once:
  led.setPins(4);
}

void loop() {
  // put your main code here, to run repeatedly:
  led.display(1);
  for (int i = 9; i >= 0 ; i--) {
    led.digit(i);
    delay(1000);
  }
}
