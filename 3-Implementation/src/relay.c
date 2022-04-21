/**
 * @file relay.c
 * @author Rishad Rahi
 */

#include <avr/io.h>
#include"checkswitch.h"
#include"relay.h"


void relay(void)
{

	DDRB |= (1<<1); 

	PORTB &= ~(1<<1);

}