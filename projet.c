#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "HX711.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);

const int LOADCELL_DOUT_PIN = 4;
const int LOADCELL_SCK_PIN = 5;
const int TARE_BUTTON = 3; 
const int TOGGLE_SWITCH = 6; // இது இப்போது உங்கள் On/Off சுவிட்ச்

HX711 scale;

// ECE மாணவர் என்பதால் கவனிக்கவும்: 
// Factor-ஐ 'int' ஆக வைப்பதை விட 'float' ஆக வைத்தால் துல்லியம் (Precision) அதிகமாக இருக்கும்.
float calibration_factor_50kg = 420.0; 
float calibration_factor_25kg = 525.0;  

void setup() {
  lcd.init();
  lcd.backlight();
  
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  
  pinMode(TARE_BUTTON, INPUT_PULLUP);
  pinMode(TOGGLE_SWITCH, INPUT_PULLUP); // சுவிட்ச் பின்

  scale.tare(); 
  lcd.clear();
}

void loop() {
  // Tare Button Logic
  if (digitalRead(TARE_BUTTON) == LOW) {
    scale.tare();
    lcd.setCursor(0, 1);
    lcd.print("Loading...");
    delay(500);
    lcd.clear();
  }

  // Switch Logic: சுவிட்ச் ஆன் ஆக இருந்தால் 50kg, ஆஃப் ஆக இருந்தால் 25kg
  if (digitalRead(TOGGLE_SWITCH) == LOW) {
    scale.set_scale(calibration_factor_50kg);
    lcd.setCursor(13, 0);
    lcd.print(""); // ஸ்கிரீனில் எந்த மோட் என்று காட்டும்
  } else {
    scale.set_scale(calibration_factor_25kg);
    lcd.setCursor(14, 0);
    lcd.print("");
  }

  float weight = scale.get_units(5);
  if (weight < 0) weight = 0.00;

  lcd.setCursor(0, 0);
  lcd.print("Weight:");
  
  lcd.setCursor(0, 1);
  lcd.print(weight, 2);
  lcd.print(" kg      ");
  
  delay(200);
}