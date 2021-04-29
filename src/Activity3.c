#include <avr/io.h>
#include<util/delay.h>
#include "Activity2.h"
#include "Activity3.h"



void initTimer(void){

TCCR0A|=(1<<COM0A1)|(1<<WGM00)|(1<<WGM01);
    // Insert code
TCCR0B|=(1<<CS01)|(1<<CS00);
DDRD|=(1<<PD6);


}


char output_pwm(uint16_t output_adc)
{

char data_uart;
if((output_adc>=0) && (output_adc<=209)){

        OCR1A = 205;    //20% duty cycle
        data_uart = 'A';

        _delay_ms(20);
    }
    else if((output_adc>=210) && (output_adc<=509)){

        OCR1A = 410;    //40% duty cycle
        data_uart = 'B';
        _delay_ms(20);
    }
    else if((output_adc>=510) && (output_adc<=709)){

        OCR1A = 717;    //70% duty cycle
        data_uart ='C';
        _delay_ms(20);
    }
    else if((output_adc>=710) && (output_adc<=1024)){

        OCR1A = 973;    //95% duty cycle
        data_uart = 'D';
        _delay_ms(20);
    }
    else{
        OCR1A = 0;  //0% output
        data_uart = "0";
    }
return data_uart;
}
