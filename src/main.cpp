#include <M5Stack.h>

void setup() {
  // put your setup code here, to run once:
  M5.begin();
  M5.Lcd.fillScreen(TFT_WHITE);
}

void loop() {
  // put your main code here, to run repeatedly:
  M5.update();
  if (M5.BtnA.isPressed()){
    M5.Lcd.fillScreen(TFT_OLIVE);
  }
}
