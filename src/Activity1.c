/**
 * @file Activity1.c
 * @author 255974 (you@domain.com)
 * @brief LED PORTS
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#define F_CPU 1600000UL
#include <util/delay.h>

#include "Activity1.h"


void ports(void)
{
DDRB|=(1<<PB0);

DDRD&=~(1<<PD0);
PORTD|=(1<<PD0);
DDRD&=~(1<<PD1);
PORTD|=(1<<PD1);

}