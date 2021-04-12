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
	DDRB = 0x00;
	PORTB = 0xFF;
	DDRC = 0xFF;
	PORTC = 0x00;
    /* Insert your solution below */
	unsigned char total = 0;
	unsigned char tmpA = 0;
	unsigned char tmpB = 0;
	unsigned char iterator = 0;
    while (1) {
	tmpA = PINA;
	tmpB = PINB;
	total = 0;	
	for(iterator = 7; iterator > 0; iterator = iterator - 1){
		if((tmpA >> iterator) & 0x01){
			total++;
		}
		if((tmpB >> iterator) & 0x01){
                        total++;
                }		
	}
	if(tmpA & 0x01){
		total++;
	}
	if(tmpB & 0x01){
		total++;
	}
	PORTC = total;	
    }
    return 1;
}
