/**
 * @file Activity2.c
 * @author 255974 (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#define F_CPU 1600000UL
#include <util/delay.h>

#include "Activity1.h"
#include "Activity2.h"

void initADC()
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);

}
uint16_t readADC(uint8_t ch)
{
    //select ADC channel ch must be 0-7
    ADMUX&=0xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    //start single conversion
    ADCSRA|=(1<<ADSC);

    //wait for conversation to complete
    while(!(ADCSRA & (1<<ADIF)));

    //clear ADIF by writing one to it
    ADCSRA|=(1<<ADIF);
    return(ADC);
}