#include <avr/io.h>
#define F_CPU 1600000UL
#include<util/delay.h>

#include "Activity2.h"
#include "Activity3.h"



void initTimer(void){

TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
DDRB|=(1<<PB1);


}


char output_pwm(uint16_t output_adc)
{

char data_uart;
if((output_adc>=0) && (output_adc<=209)){

        OCR1A = 205;    //20% duty cycle
        data_uart = 'A';

        _delay_ms(2000);
    }
    else if((output_adc>=210) && (output_adc<=509)){

        OCR1A = 410;    //40% duty cycle
        data_uart = 'B';
        _delay_ms(2000);
    }
    else if((output_adc>=510) && (output_adc<=709)){

        OCR1A = 717;    //70% duty cycle
        data_uart ='C';
        _delay_ms(2000);
    }
    else if((output_adc>=710) && (output_adc<=1024)){

        OCR1A = 973;    //95% duty cycle
        data_uart = 'D';
        _delay_ms(2000);
    }
    else{
        OCR1A = 0;  //0% output
        
    }
return data_uart;
}
