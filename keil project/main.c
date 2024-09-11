#include "uart.h"
#include "mcu_definitions.h"

void mainUI(void);

void main(void)
{
		// This is needed for the "tuner" relay to work
		P4SW = 0x70;
	    
		// Set AMP Channel relay pin to push-pull mode
    	P3M0 = 0x04;
    	P3M1 = 0x00; 

		mainUI();	
}
