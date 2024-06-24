/*
 * seven_segment_and_binary_represntation.c
 *
 * Created: 6/22/2024 5:33:23 PM
 *  Author: PC
 */ 


#include <avr/io.h>
#include "seven_segment.h"
#include "led.h"
#include "push button.h"
#define F_CPU 8000000UL
#include <util/delay.h>
int main(void)
{
	
	seven_seg_init('D');
	seven_seg_init('A');
	for (int i=0;i<=4;i++)
	{
		led_init('B',i);
	}
	pushbutt_inti('C',0);
	unsigned char x,counter=0;
    while(1)
    {
		
		
		if (pushbutt_read('C',0)==1)
		{
			seven_seg_write('D',counter%10);
			seven_seg_write('A',counter/10);
			for (int i=4;i>=0;i--)
			{
				(counter&(1<<i))==0?led_off('B',i):led_on('B',i);
				
			}
			counter++;
		}
		if (counter >20)
		{
			counter=0;
		}
		_delay_ms(250);
        //TODO:: Please write your application code 
    }
}