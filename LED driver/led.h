/*
 * led.h
 *
 * Created: 6/18/2024 7:25:44 PM
 *  Author: PC
 */ 


#ifndef LED_H_
#define LED_H_

void led_init(char port , char pin);
void led_on(char port,char pin);
void led_off(char port , char pin );
void tog_led(char port , char pin);
char led_read(char port , char pin);


#endif /* LED_H_ */