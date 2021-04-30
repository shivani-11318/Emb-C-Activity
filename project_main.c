#include <avr/io.h>
#define F_CPU 1600000UL
#include <util/delay.h>
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

int main(void)
{

    ports();

    /*Configure ADC registers and pins*/
    initADC();

    /*Configure PWM registers and pins*/
    initTimer();

    /*Configure UART serial communication pin*/
    initUART(103);
    
    uint16_t volatile output_adc;
    char data_uart;

    while(1)
    {
      if((!(PIND&(1<<PD0)))&&((!(PIND&(1<<PD1))))) //Both sensor and heater are on 
      {

        PORTB|=(1<<PB0); // LED is on

        output_adc = readADC(0); 
        _delay_ms(200);

        data_uart = output_pwm(output_adc);
        _delay_ms(200);

        writeCharUART(data_uart);


      }
          else
          {
          PORTB&=~(1<<PB0); //LED is off
         _delay_ms(200);
          }
     
    }

    return 0;
}