/*
 * DigitlWrite.h
 *
 *  Created on: Aug 3, 2023
 *      Author: Abderrahmane Lahouasna
 */
#include "GPIO.h"
#include"RCC.h"
#ifndef Set_Reset_Pin_H_
#define Set_Reset_Pin_H_

#define GPIOAENR     (1U<<2)
#define GPIOBENR     (1U<<3)
#define GPIOCENR     (1U<<4)
#define HIGH          1
#define LOW           0
#define A0            0
#define A1            1
#define A2            2
#define A3            3
#define A4            4
#define A5            5
#define A6            6
#define A7            7
#define A8            8
#define A9            9
#define A10           10
#define A11           11
#define A12           12
#define A13           13
#define A14           14
#define A15           15
#define B0            16
#define B1            17
#define B2            18
#define B3            19
#define B4            20
#define B5            21
#define B6            22
#define B7            23
#define B8            24
#define B9            25
#define B10           26
#define B11           27
#define B12           28
#define B13           29
#define B14           30
#define B15           31
#define C13           32
#define C14           33
#define C15           34




void GPIO_init(void){



	RCC_APB2ENR |=GPIOBENR;
	RCC_APB2ENR |=GPIOCENR;





}
void Reset_Pin(unsigned char Pin){
 switch(Pin){
case 0://  PIN A0
GPIOA_ODR &=(1<<0);
break;    
case 1:// &PIN A1
GPIOA_ODR &=(1<<1);
break;    
case 2:// &PIN A2
GPIOA_ODR &=(1<<2);	
break;    
case 3:// &PIN A3
GPIOA_ODR &=(1<<3);
break;    
case 4:// &PIN A4
GPIOA_ODR &=(1<<4);
break;    
case 5:// &PIN A5
GPIOA_ODR &=(1<<5);
break;    
case 6:// &PIN A6
GPIOA_ODR &=(1<<6);
break;    
case 7:// &PIN A7
GPIOA_ODR &=(1<<7);
break;    
case 8:// &PIN A8
GPIOA_ODR &=(1<<8);
break;    
case 9:// &PIN A9
GPIOA_ODR &=(1<<9);
break;    
case 10://& PIN A10
GPIOA_ODR &=(1<<10);
break;    
case 11://&PIN A11
GPIOA_ODR &=(1<<11);
break;    
case 12://&PIN A12
GPIOA_ODR &=(1<<12);
break;  
case 13://&PIN A13
GPIOA_ODR &=(1<<13);
break;    
case 14://&PIN A14
GPIOA_ODR &=(1<<14);
break;    
case 15://&PIN A15
GPIOA_ODR &=(1<<15);
break;    
case 16://&PIN B0
GPIOB_ODR &=(1<<0);
break;    
case 17://&PIN B1
GPIOB_ODR &=(1<<1);
break;    
case 18://&PIN B2
GPIOB_ODR &=(1<<2);
break;    
case 19://&PIN B3
GPIOB_ODR &=(1<<3);
break;    
case 20://&PIN B4
GPIOB_ODR &=(1<<4);
break;    
case 21://&PIN B5
GPIOB_ODR &=(1<<5);
break;    
case 22://&PIN B6
GPIOB_ODR &=(1<<6);
break;    
case 23://&PIN B7
GPIOB_ODR &=(1<<7);
break;    
case 24://&PIN B8
GPIOB_ODR &=(1<<8);
break;    
case 25://&PIN B9
GPIOB_ODR &=(1<<9);
break;    
case 26://&PIN B10
GPIOB_ODR &=(1<<10);
break;    
case 27://&PIN B11
GPIOB_ODR &=(1<<11);
break;    
case 28://&PIN B12
GPIOB_ODR &=(1<<12);
break;    
case 29://&PIN B13
GPIOB_ODR &=(1<<13);
break;    
case 30://&PIN B14
GPIOB_ODR &=(1<<14);
break;    
case 31://&PIN B15
GPIOB_ODR &=(1<<15);
break;    
case 32://&PIN C13
GPIOC_ODR &=(1<<13);
break;    
case 33://&PIN C14
GPIOC_ODR &=(1<<14);
break;    
case 34://&PIN C15
GPIOC_ODR &=(1<<15);
break;
}
}

void Set_Pin(unsigned char Pin){
switch(Pin){
case 0:// PIN A0
GPIOA_ODR |=(1<<0);
break;
case 1:// PIN A1
GPIOA_ODR |=(1<<1);
break;
case 2:// PIN A2
GPIOA_ODR |=(1<<2);	
break;
case 3:// PIN A3
GPIOA_ODR |=(1<<3);
break;
case 4:// PIN A4
GPIOA_ODR |=(1<<4);
break;
case 5:// PIN A5
GPIOA_ODR |=(1<<5);
break;
case 6:// PIN A6
GPIOA_ODR |=(1<<6);
break;
case 7:// PIN A7
GPIOA_ODR |=(1<<7);
break;
case 8:// PIN A8
GPIOA_ODR |=(1<<8);
break;
case 9:// PIN A9
GPIOA_ODR |=(1<<9);
break;
case 10:// PIN A10
GPIOA_ODR |=(1<<10);
break;
case 11:// PIN A11
GPIOA_ODR |=(1<<11);
break;
case 12:// PIN A12
GPIOA_ODR |=(1<<12);
break;
case 13:// PIN A13
GPIOA_ODR |=(1<<13);
break;
case 14:// PIN A14
GPIOA_ODR |=(1<<14);
break;
case 15:// PIN A15
GPIOA_ODR |=(1<<15);
break;
case 16:// PIN B0
GPIOB_ODR |=(1<<0);
break;
case 17:// PIN B1
GPIOB_ODR |=(1<<1);
break;
case 18:// PIN B2
GPIOB_ODR |=(1<<2);
break;
case 19:// PIN B3
GPIOB_ODR |=(1<<3);
break;
case 20:// PIN B4
GPIOB_ODR |=(1<<4);
break;
case 21:// PIN B5
GPIOB_ODR |=(1<<5);
break;
case 22:// PIN B6
GPIOB_ODR |=(1<<6);
break;
case 23:// PIN B7
GPIOB_ODR |=(1<<7);
break;
case 24:// PIN B8
GPIOB_ODR |=(1<<8);
break;
case 25:// PIN B9
GPIOB_ODR |=(1<<9);
break;
case 26:// PIN B10
GPIOB_ODR |=(1<<10);
break;
case 27:// PIN B11
GPIOB_ODR |=(1<<11);
break;
case 28:// PIN B12
GPIOB_ODR |=(1<<12);
break;
case 29:// PIN B13
GPIOB_ODR |=(1<<13);
break;
case 30:// PIN B14
GPIOB_ODR |=(1<<14);
break;
case 31:// PIN B15
GPIOB_ODR |=(1<<15);
break;
case 32:// PIN C13
GPIOC_ODR |=(1<<13);
break;
case 33:// PIN C14
GPIOC_ODR |=(1<<14);
break;
case 34:// PIN C15
GPIOC_ODR |=(1<<15);
break;
}
}
#endif /* Set_Reset_Pin_H_ */
