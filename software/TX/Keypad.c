/*
 * Keypad.c
 *
 * Created: 6/11/2023 8:03:30 PM
 * Author : Kirollos Gerges
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
unsigned char keypad();    //prototype



int IMPLEMENT(void) //main function
{
	// DDRA |=(1<<0); 
	// PORTA &=(~(1<<0)); 
	unsigned char x;
	DDRA=0x0F;     
	_delay_ms(1);
	PORTA=0xF0;
		_delay_ms(1);
		PORTA=0x0F;
		_delay_ms(25);
		if(PINA!=0xF0)
		{
			x=keypad();
			
	
		}
		
	
	return x;
}

unsigned char keypad()
{
	
	//first row 
	PORTA=0b11111110;  //make it = 0
	if((PINA&(1<<PINA4))==0)
	{
		
		return'1';
	}
	else if((PINA&(1<<PINA5))==0)
	{
		return'2';
	}
	else if((PINA&(1<<PINA6))==0)
	{
		return'3';
	}
	
// second row 
	PORTA=0b11111101;  //make it = 0
	if((PINA&(1<<PINA4))==0)
	{
		return'4';
	}
	else if((PINA&(1<<PINA5))==0)
	{
				return'5';
	}
	else if((PINA&(1<<PINA6))==0)
	{
		return'6';
	}

	
	// Third row
	PORTA=0b1111011;  //make it = 0
	if((PINA&(1<<PINA4))==0)
	{
		
		return'7';
	}
	else if((PINA&(1<<PINA5))==0)
	{
		return'8';
	}
	else if((PINA&(1<<PINA6))==0)
	{
		return'9';
	}
	
		// Fourth row
		PORTA=0b11110111;  //make it = 0
		if((PINA&(1<<PINA4))==0)
		{
			return'*';
		}
		else if((PINA&(1<<PINA5))==0)
		{
			return'0';
		}
		else if((PINA&(1<<PINA6))==0)
		{
			return'#';
		}
		
		
	return 0;	
		}