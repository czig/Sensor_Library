/************************************
 * Author: C2C Caleb Ziegler
 * Date: 07 DEC 13
 * Description: Stores digital signal
 * received from ADC of left sensor in
 * variable named Left_Sensor_Digital.
 ***********************************/

#include <msp430.h> 
#include "sensor.h"

unsigned char Left_Sensor_Digital = 0;

void main(void) {
    WDTCTL = WDTPW | WDTHOLD;	// Stop watchdog timer
	
    initSensors();
    while(1)
    {
    	Left_Sensor_Digital = getLeftSensor();
    }


}
