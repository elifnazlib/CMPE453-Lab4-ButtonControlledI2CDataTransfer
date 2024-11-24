# CMPE453 Embedded Systems

## Lab 4 - Button Controlled I2C Data Transfer

In this lab, you will use

![Figure 1](https://github.com/elifnazlib/CMPE453-Lab4-ButtonControlledI2CDataTransfer/blob/main/figure.png)

1) Connect Arduino Base Shield to Arduino Uno.
2) Grove Button should be connected to any digital interface of base shield.
3) Grove LCD Screen communicates with Arduino Uno via I2C.

> [!TIP]
> [Code snippet for the Grove LCD](https://wiki.seeedstudio.com/Grove-LCD_RGB_Backlight/) and the [code snippet for the Grove Button](https://wiki.seeedstudio.com/Grove-Button/) can be useful.

Program	the	microcontroller	by using C programming on Arduino IDE. When	your program runs, it should do	the	following task.

1) At the beginning "CMPE453-2024F" message should be displayed on the LCD Screen and wait 3 seconds. LCD Screen color should be green at first.

2) When you press the button, “Welcome to Class” message should be displayed in the first line and in the second line “Button is ON” message should be displayed and LCD screen color should be purple, even if you hold it pressed.

3) Similarly, when the button is released, “GoodBye to Class” message should be displayed on LCD in the first line and LCD screen color should be green again.
