/*
 * GPIO_interface.h
 *
 *  Created on: Jul 15, 2024
 *      Author: Ahmed
 */

#include "BIT_Calc.h"
#include "STD_Types.h"


#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

// PIN Direction
#define DIO_u8PIN_OUTPUT 1
#define DIO_u8PIN_INPUT  0

//PIN Value
#define DIO_u8PIN_HIGH  1
#define DIO_u8PIN_LOW   0

//NAMING PORTS

#define DIO_u8PORTA  0
#define DIO_u8PORTB  1
#define DIO_u8PORTC  2
#define DIO_u8PORTD  3


//NAMING PINS
#define DIO_u8PIN0  0
#define DIO_u8PIN1  1
#define DIO_u8PIN2  2
#define DIO_u8PIN3  3
#define DIO_u8PIN4  4
#define DIO_u8PIN5  5
#define DIO_u8PIN6  6
#define DIO_u8PIN7  7

//LET DIRECTION OF ALL THE PORT THE SAME
#define DIO_u8PORT_OUTPUT 0xFF
#define DIO_u8PORT_INPUT 0

//LET VALUE OF ALL THE PORT THE SAME
#define DIO_u8PORT_HIGH 0xFF
#define DIO_u8PORT_LOW 0
#define NULL 0

u8 DIO_u8SetPinDirection (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Direction);

u8 DIO_u8GetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8* Copy_pu8Value);

u8 DIO_u8SetPinValue (u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);

u8 DIO_u8SetPortValue (u8 Copy_u8Port, u8 Copy_u8Value);

u8 DIO_u8SetPortDirection(u8 Copy_u8Port, u8 Copy_u8Direction);


#endif /* GPIO_INTERFACE_H_ */
