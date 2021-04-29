#include <avr/io.h>
#define F_CPU 1600000UL
#include <util/delay.h>



void ports(void)
{
DDRB|=(1<<PB0);

DDRD&=~(1<<PD0);
PORTD|=(1<<PD0);
DDRD&=~(1<<PD1);
PORTD|=(1<<PD1);

}