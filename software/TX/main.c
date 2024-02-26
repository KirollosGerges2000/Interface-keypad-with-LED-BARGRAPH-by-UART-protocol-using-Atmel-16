/*
 * TX.c
 *
 * Created: 2/26/2024 11:29:09 AM
 * Author : Kirollos
 */ 

#include <avr/io.h>
#include "Keypad.h"
#include "MACROS.h"
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
	int	value=IMPLEMENT();
	if(value=='1')
	{
		UART_sendByte('1');
    }
	else if(value=='2')
	{
		UART_sendByte('2');
}
	else if(value=='3')
	{
		UART_sendByte('3');
	}
		else if(value=='4')
		{
			UART_sendByte('4');

		}
			else if(value=='5')
			{
				UART_sendByte('5');
			}
				else if(value=='6')
				{
					UART_sendByte('6');

				}
					else if(value=='7')
					{
						UART_sendByte('7');
					}
						else if(value=='8')
						{
							UART_sendByte('8');
			
						}
						
						else if (value =='0')
						{
							UART_sendByte('0');
					
						}
}

}