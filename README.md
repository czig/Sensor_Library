Sensor Library
====

Library for Operating Sensors on Robot

This library includes the files main.c, sensor.h, and sensor.c, which allow the MSP430 to interface with the left, right, and center sensors on the robot to perform various functions. Sensor.h provides the functions required to interface with left, right, and center sensors, while sensor.c contains the implementations of those functions. 


##Operation: 

 - This library uses the code provided along with the MSP430 and the robot to operate the sensors on the robot. The code uses the MSP430 to perform analong-to-digital conversion on the analog signals received from the sensors, which produces a digital signal that can be used in various functions. The ADC is performed in the getLeftSensor(), getRightSensor(), and getCenterSensor() functions, and these functions return the digital signal/value when called. The pins on the MSP430 used to perform the ADC are P1.3 for the left sensor, P1.4 for the right sensor, and P1.5 for the center sensor. 

 - The example.c code provided stores a digital signal/value in a variable after ADC is performed. 


##Hardware Needed:

 - MSP430
 - Robot issued by United States Air Force Academy Department of Electrical and Computer Engineering
 - LDV33 3.3V Regulator
 - 100 Micro Farad Capacitor


##Functions: 

All functions pertaining to the operation of the motor and movement of the robot are shown below.

```
void initSensors(void);
```
 - Initializes the sensors on the robot to allow sensing for the left, right, and center sensors. The left sensor uses A3 (P1.3), the right sensor uses A4 (P1.4), and the center sensor uses A5 (P1.5) to perform ADC on the sensor analog signals in the MSP430.

```
unsigned int getLeftSensor();
```
 - Returns the reading from the left sensor after the analog output signal from the left sensor is passed through the ADC. Again uses A3 (P1.3).

```
unsigned int getRightSensor();
```
 - Returns the reading from the right sensor after the analog output signal from the right sensor is passed through the ADC. Again uses A4 (P1.4).

```
unsigned int getCenterSensor();
```
 - Returns the reading from the center sensor after the analog output signal from the center sensor is passed through the ADC. Again uses A5 (P1.5).


##Documentation
 
 - C2C Jason Mossing helped me get voltage readings from my sensors and troubleshoot loading problems.

 - Captain Branchflower helped me toubleshoot problems with my code. He told me that I needed to disable the ENC bit (disable the core) in order to make changes to the ADC. Also, he showed me how to clear the input channel with INCH_15. Moreover, he recommended making an initSensors() function to make my code more modular. Additionally, he recommended having my getLeftSensor(), getRightSensor(), and getCenterSensor() functions return ADC10MEM in order to make the code function better as a library. Furthermore, he suggested putting the LED operation in main.c to make sensor.c function better as a library. 


##Licensing

 - Anyone is free to use and modify this code for any reason as long as it is documented. In other words, give credit where credit is due.