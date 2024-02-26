/*
 * RX.c
 *
 * Created: 2/26/2024 12:20:14 PM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "UART.h"

int main(void)
{
	UART_init();
    /* Replace with your application code */
	
	DDRC=0xFF;
	PORTC=0x00;
    while (1) 
    {
		int	value= UART_recieveByte();
		if(value=='1')
		{
			PORTC=0x01;
		}
		else if(value=='2')
		{
			PORTC=0x03;
		}
		else if(value=='3')
		{
			PORTC=0x07;
		}
		else if(value=='4')
		{
			PORTC=0x0F;
		}
		else if(value=='5')
		{
			PORTC=0x1F;
		}
		else if(value=='6')
		{
			PORTC=0x3F;
		}
		else if(value=='7')
		{
			PORTC=0x7F;
		}
		else if(value=='8')
		{
			PORTC=0xFF;
		}
		
		else if (value =='0')
		{
			PORTC=0x00;
		}
    }
}

