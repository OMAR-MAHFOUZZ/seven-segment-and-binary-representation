/*
 * DIO.h
 *
 * Created: 6/17/2024 6:26:07 PM
 *  Author: omar mahfouz
 */ 


#ifndef DIO_H_
#define DIO_H_
void DIO_SETPIN_DIR(char port,char pin , char dir);
void DIO_WRITE(char port,char pin , char val);
void DIO_TOGGLE_BIT(char port , char pin );
char DIO_READ(char port , char pin );
void DIO_SETPORT_DIR(char port, char dir);
void DIO_TOGGLE_PORT(char port);
void seven_seg_write(char port,char number);
void seven_seg_init(char port);


#endif /* DIO_H_ */