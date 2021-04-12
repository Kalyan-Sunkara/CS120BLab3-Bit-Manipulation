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
	DDRA = 0x00;
	PORTA = 0xFF;
	DDRC = 0xFF;
	PORTC = 0x00;
	DDRB = 0xFF;
        PORTB = 0x00;
    /* Insert your solution below */
//	unsigned char total = 0; 
    while (1) {
	PORTB = ((PINA & 0xF0) >> 4);
	PORTC = ((PINA & 0x0F) << 4);   
	}	
    return 1;
}

