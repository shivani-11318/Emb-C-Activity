#include <avr/io.h>
#define F_CPU 1600000UL
#include<util/delay.h>
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

int main(void)
{
    initADC();
    ports();
    initTimer();
    uint16_t output_adc;
    char data_uart;

    while(1)
    {
      if((!(PIND&(1<<PD0)))&&((!(PIND&(1<<PD1)))))
      {

        PORTB|=(1<<PB0);
        output_adc = readADC(0);
        data_uart = output_pwm(output_adc);
        writeCharUART(data_uart);


      }
          else
          {
          PORTB&=~(1<<PB0);
         _delay_ms(200);
          }
     
    }

    return 0;
}