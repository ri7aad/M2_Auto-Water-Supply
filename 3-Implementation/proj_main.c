/**
 * @file main.c
 * @author Rishad Rahi
 */
#define F_CPU 16000000

#include <avr/io.h>
#include"checkswitch.h"
#include"relay.h"

uint8_t top_switch_state;
uint8_t bottom_switch_state;

int main(void)
{
    checkwitch();
    relay();
	
    while (1)
	{			
	
		top_switch_state = PIND & (1<<0);
		if (top_switch_state == 0)
		{
			PORTB &= ~(1<<PORTB1);	
		}
	
		bottom_switch_state = PIND & (1<<1);
		if (bottom_switch_state == (1<<1))
		{
			PORTB |= (1<<PORTB1);
		}
	}
}
