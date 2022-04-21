/**
 * @file checkswitch.c
 * @author Rishad Rahi
 */

#include <avr/io.h>
#include"checkswitch.h"
#include"relay.h"

void checkswitch(void)
{

	DDRD &= ~(1<<0);
	PORTD |= (1<<0);
	
	
	DDRD &= ~(1<<1);
	PORTD |= (1<<1);
}
