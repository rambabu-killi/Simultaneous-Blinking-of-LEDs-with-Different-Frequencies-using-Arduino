# Simultaneous-Blinking-of-LEDs-with-Different-Frequencies-using-Arduino
This project involves creating a circuit with multiple LEDs blinking simultaneously at different frequencies using Arduino.

Here, if we use delay() function in Arduino, it blocks the code execution, which means it pauses all other tasks until the specified delay time elapses. To overcome this issue, the millis() function is employed. millis() returns the number of milliseconds since the Arduino board started running the current program. By storing the current time in variables and comparing it with predefined intervals, we can create non-blocking timing intervals for each LED.
