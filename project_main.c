#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{

    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD3);


    PORTD|=(1<<PD1);
    PORTD |=(1<<PD3);

    while(1)
    {
        if(!(PIND&(1<<PD1)) && !(PIND&(1<<PD3)))
        {
        PORTB|=(1<<PB0);
        _delay_ms(500);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(500);
        }
    }

    return 0;
}
