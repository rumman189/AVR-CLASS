/*
 * GccApplication1.c
 *
 * Created: 10/18/2017 11:45:39 AM
 * Author : user-5
 */ 

#define F_CPU 8000000UL//
#include <avr/io.h>
#include <util/delay.h>


void delay_ms(unsigned int ms)
{
	
	while (ms)
	{
		_delay_ms(1.000);
		ms--;
	}
}


int main(void)
{
    DDRD = 0xff;  /* Replace with your application code */
    while (1) 
    {
		for (int b=0; b<8; b++)
		{
			PORTD |= (1<<b);
			delay_ms(1000);
			PORTD &= (0<<b);
			delay_ms(1000);
		}
    }
	return 0;
}

