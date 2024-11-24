#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;			// Create LCD object

int colorR = 0; 		// Set RGB colors,
int colorG = 255;		// initial state is green
int colorB = 0;

int buttonState = 0;		// Variable for reading the pushbutton status
const int buttonPin = 4;	// The number for the pushbutton pin

void setup() 
{
  pinMode(buttonPin, INPUT); 		// Initialize the pushbutton pin as an input
  lcd.begin(16, 2); 			// Initialize the LCD object with 16 columns and 2 rows
    
  lcd.setRGB(colorR, colorG, colorB); 	// Set the RGB color of the LCD to green
  lcd.print("CMPE453-2024F"); 		// Print the text on the LCD

  delay(3000);				// Wait for 3 seconds
}

void loop() 
{
  buttonState = digitalRead(buttonPin); // Read the state of the pushbutton value

  if (buttonState == HIGH) { 		// Check if the pushbutton is pressed
    
    colorR = 128; 			// RGB color for purple
    colorG = 0;
    colorB = 128;

    lcd.setRGB(colorR, colorG, colorB); // Set the RGB color of the LCD

    lcd.setCursor(0, 0); 		// Set the cursor to the first column and first row
    lcd.print("Welcome to Class"); 	// Print the text on the LCD

    lcd.setCursor(0, 1);		// Set the cursor to the first column and second row
    lcd.print("Button is ON");		// Print the text on the LCD

  }

  else { 				// If the pushbutton is not pressed
    
    colorR = 0;				// RGB color for green
    colorG = 255;
    colorB = 0;

    lcd.setRGB(colorR, colorG, colorB); // Set the RGB color of the LCD

    lcd.setCursor(0, 0);		// Set the cursor to the first column and first row
    lcd.print("GoodBye to Class");	// Print the text on the LCD

    lcd.setCursor(0, 1);		// Set the cursor to the first column and second row
    lcd.print("                "); 	// Print empty text on the LCD to clear the previous text

  } 
}