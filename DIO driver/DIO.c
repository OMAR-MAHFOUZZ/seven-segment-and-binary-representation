/*
 * CFile1.c
 *
 * Created: 6/17/2024 6:18:32 PM
 *  Author: omar mahfouz
 */ 
#include <avr/io.h>
#include "STD_MACROS.h"
void DIO_SETPIN_DIR(char port,char pin , char dir)
{
	switch (port)
{	
	case 'A':
	case 'a':
	if (dir==1)
	{
		SET_BIT(DDRA,pin);
	}
	else 
	{
		CLR_BIT(DDRA,pin);
	}
	break;
	case 'B':
	case 'b':
	if (dir==1)
	{
		SET_BIT(DDRB,pin);
	}
	else
	{
		CLR_BIT(DDRB,pin);
	}
	break;
	case 'C':
	case 'c':
	if (dir==1)
	{
		SET_BIT(DDRC,pin);
	}
	else
	{
		CLR_BIT(DDRC,pin);
	}
	break;
	case 'D':
	case 'd':
	if (dir==1)
	{
		SET_BIT(DDRD,pin);
	}
	else
	{
		CLR_BIT(DDRD,pin);
	}
	break;
	default:break;
}	
}
void DIO_WRITE(char port,char pin , char val)
{
	switch (port)
	{
	case 'A':
	case 'a':
	if (val==1)
	{
		SET_BIT(PORTA,pin);
	}
	else
	{
		CLR_BIT(PORTA,pin);
	}
	break;
	case 'B':
	case 'b':
	if (val==1)
	{
		SET_BIT(PORTB,pin);
	}
	else
	{
		CLR_BIT(PORTB,pin);
	}
	break;
	case 'C':
	case 'c':
	if (val==1)
	{
		SET_BIT(PORTC,pin);
	}
	else
	{
		CLR_BIT(PORTC,pin);
	}
	break;
	case 'D':
	case 'd':
	if (val==1)
	{
		SET_BIT(PORTD,pin);
	}
	else
	{
		CLR_BIT(PORTD,pin);
	}
	break;
	default:break;
	}	
}
void DIO_TOGGLE_BIT(char port , char pin )
{
	switch(port)
	{
		case 'A':
		case 'a':
			TOG_BIT(DDRA,pin);
			break;
		case 'B':
		case 'b':
			TOG_BIT(DDRB,pin);
			break;
		case 'C':
		case 'c':
			TOG_BIT(DDRC,pin);
			break;
		case 'D':
		case 'd':
			TOG_BIT(DDRD,pin);
			break;
	}
}
char DIO_READ(char port , char pin )
{
	unsigned char val;
	switch(port)
	{
		case 'A':
		case 'a':
		 val=READ_BIT(PINA,pin);
		break;
		case 'B':
		case 'b':
		val=READ_BIT(PINB,pin);
		break;
		case 'C':
		case 'c':
		val=READ_BIT(PINC,pin);
		break;
		case 'D':
		case 'd':
		val=READ_BIT(PIND,pin);
		break;
		default:break;
	}
	return val;
}
void DIO_SETPORT_DIR(char port, char dir)
{
	switch(port)
	{
		case 'A':
		case 'a':
			DDRA=dir;
		break;
		case 'B':
		case 'b':
		DDRB=dir;
		break;
		case 'C':
		case 'c':
		DDRC=dir;
		break;
		case 'D':
		case 'd':
		DDRD=dir;
		break;
	}
}
void DIO_TOGGLE_PORT(char port)
{
	switch (port)
	{
		case 'A':
			PORTA ^= 0xFF;
		break;
			
		case 'B':
		PORTA ^= 0xFF;
		break;
		case 'C':
		PORTA ^= 0xFF;
		break;
		case 'D':
		PORTA ^= 0xFF;
		break;
		default:break;
			
		
	}
}
void DIO_write_port(char port , char val)
{
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA=val;
		break;
		case 'B':
		case 'b':
		PORTB=val;
		break;
		case 'C':
		case 'c':
		PORTC=val;
		break;
		case 'D':
		case 'd':
		PORTD=val;
		break;
	}
}