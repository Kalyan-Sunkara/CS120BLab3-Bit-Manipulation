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
    /* Insert your solution below */
//	unsigned char total = 0;
	unsigned char tmpA = 0;
	unsigned char tmpA4 = 0; //ignition
	unsigned char tmpA5 = 0; //seated
	unsigned char tmpA6 = 0; //seatbelt 
    while (1) {
	tmpA = PINA & 0x0F;
	tmpA4 = (PINA & 0x10) >> 3;
	tmpA5 = (PINA & 0x20) >> 4;
	tmpA6 = (PINA & 0x40) >> 5;
	if(tmpA == 0){
		PORTC = 0x40;
		if(!tmpA6 && tmpA5 && tmpA4){
			PORTC = PORTC | 0x80;
		}
	}
	else if(tmpA < 3){
		PORTC = 0x60;
		if(!tmpA6 && tmpA5 && tmpA4){
			PORTC = PORTC | 0x80;
		}
	}
	else if(tmpA < 5){
		PORTC = 0x70;
		if(!tmpA6 && tmpA5 && tmpA4){
                        PORTC = PORTC | 0x80;
                }
	}
	else if(tmpA < 7){
                PORTC = 0x38;
		if(!tmpA6 && tmpA5 && tmpA4){
                        PORTC = PORTC | 0x80;
                }
        }
	else if(tmpA < 10){
		PORTC = 0x3C;
		if(!tmpA6 && tmpA5 && tmpA4){
                        PORTC = PORTC | 0x80;
                }
	}
	else if(tmpA < 13){
		PORTC = 0x3E;
		if(!tmpA6 && tmpA5 && tmpA4){
                        PORTC = PORTC | 0x80;
                }
	}
	else{
		PORTC = 0x3F;
		if(!tmpA6 && tmpA5 && tmpA4){
                        PORTC = PORTC | 0x80;
                }
	}		
}	
    return 1;
}

