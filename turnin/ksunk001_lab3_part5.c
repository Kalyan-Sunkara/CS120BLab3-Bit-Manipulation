/*	Author: ksunk001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *	count number of ones
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
        /* Insert DDR and PORT initializations */
	DDRD = 0x00;
	PORTD = 0xFF;
	DDRB = 0x01;
	PORTB = 0x00;
    /* Insert your solution below */
//	unsigned char total = 0;
	unsigned short weight  = 0;
    while (1) {
		weight = (PINB & 0x01) | (PIND << 1);
		if(weight >= 70){
			PORTB = 0x02;
		}
		else if(weight < 70 && weight > 5){
			PORTB = 0x04;
		}
		else{
			PORTB = 0x00;
		}		
	}		
    return 1;
}

