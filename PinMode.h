/*
 * PinMode.h
 *
 *  Created on: Aug 4, 2023
 *      Author: Lahouasna Abderrahmane
 */

#ifndef PINMODE_H_
#define PINMODE_H_
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
#define Input_mode                          0
#define Output_mode_max_speed_10_MHz        1
#define Output_mode_max_speed_2_MHz         2
#define Output_mode_max_speed_50_MHz        3
#define General_purpose_output_push_pull    0
#define General_purpose_output_open_drain   1
#define Alternate_function_output_push_pull 2
#define Alternate_function_output_open_drain 3
#define Analog_mode                         0
#define Floating_input                      1
#define Input_with_pull_up_pull_down        2


void PinMode(unsigned char Pin,unsigned char Mode,unsigned char Input_Output_mode);
void PinMode(unsigned char Pin,unsigned char Mode,unsigned char Input_Output_mode){
switch(Mode){
   case 0:// input
      switch(Input_Output_mode){
           case 0:// Analog mode
        	   switch(Pin){
        	        case 0:// PIN A0
			        GPIOA_CRL &=~(1<<0);
					GPIOA_CRL &=~(1<<1);
                    GPIOA_CRL &=~(1<<2);
                    GPIOA_CRL &=~(1<<3);
					break;
					case 1:// PIN A1
					GPIOA_CRL &=~(1<<4);
					GPIOA_CRL &=~(1<<5);
					GPIOA_CRL &=~(1<<6);
				    GPIOA_CRL &=~(1<<7);
        	        break;
                    case 2:// PIN A2
                    GPIOA_CRL &=~(1<<8);
                    GPIOA_CRL &=~(1<<9);
                    GPIOA_CRL &=~(1<<10);
                    GPIOA_CRL &=~(1<<11);
                    break;
					case 3:// PIN A3
					GPIOA_CRL &=~(1<<12);
                    GPIOA_CRL &=~(1<<13);
                    GPIOA_CRL &=~(1<<14);
                    GPIOA_CRL &=~(1<<15);
					break;
					case 4:// PIN A4
					GPIOA_CRL &=~(1<<16);
					GPIOA_CRL &=~(1<<17);
					GPIOA_CRL &=~(1<<18);
					GPIOA_CRL &=~(1<<19);
					break;
					case 5:// PIN A5
					GPIOA_CRL &=~(1<<20);
					GPIOA_CRL &=~(1<<21);
					GPIOA_CRL &=~(1<<22);
					GPIOA_CRL &=~(1<<23);
					break;
					case 6:// PIN A6
					GPIOA_CRL &=~(1<<24);
					GPIOA_CRL &=~(1<<25);
					GPIOA_CRL &=~(1<<26);
					GPIOA_CRL &=~(1<<27);
					break;
					case 7:// PIN A7
					GPIOA_CRL &=~(1<<28);
					GPIOA_CRL &=~(1<<29);
					GPIOA_CRL &=~(1<<30);
					GPIOA_CRL &=~(1<<31);
					break;
					case 8:// PIN A8
					GPIOA_CRH &=~(1<<0);
					GPIOA_CRH &=~(1<<1);
					GPIOA_CRH &=~(1<<2);
					GPIOA_CRH &=~(1<<3);
					break;
					case 9:// PIN A9
					GPIOA_CRH &=~(1<<4);
					GPIOA_CRH &=~(1<<5);
					GPIOA_CRH &=~(1<<6);
					GPIOA_CRH &=~(1<<7);
					break;
					case 10:// PIN A10
					GPIOA_CRH &=~(1<<8);
					GPIOA_CRH &=~(1<<9);
					GPIOA_CRH &=~(1<<10);
					GPIOA_CRH &=~(1<<11);
					break;
					case 11:// PIN A11
					GPIOA_CRH &=~(1<<12);
					GPIOA_CRH &=~(1<<13);
					GPIOA_CRH &=~(1<<14);
					GPIOA_CRH &=~(1<<15);
					break;
					case 12:// PIN A8
					GPIOA_CRH &=~(1<<16);
					GPIOA_CRH &=~(1<<17);
					GPIOA_CRH &=~(1<<18);
					GPIOA_CRH &=~(1<<19);
					break;
					case 13:// PIN A13
					GPIOA_CRH &=~(1<<20);
					GPIOA_CRH &=~(1<<21);
					GPIOA_CRH &=~(1<<22);
					GPIOA_CRH &=~(1<<23);
					break;
					case 14:// PIN A8
					GPIOA_CRH &=~(1<<24);
					GPIOA_CRH &=~(1<<25);
					GPIOA_CRH &=~(1<<26);
					GPIOA_CRH &=~(1<<27);
					break;
					case 15:// PIN A15
					GPIOA_CRH &=~(1<<28);
					GPIOA_CRH &=~(1<<29);
					GPIOA_CRH &=~(1<<30);
					GPIOA_CRH &=~(1<<31);
					break;
					case 16:// PIN B0
					GPIOB_CRL &=~(1<<0);
					GPIOB_CRL &=~(1<<1);
					GPIOB_CRL &=~(1<<2);
					GPIOB_CRL &=~(1<<3);
					break;
					case 17:// PIN B1
					GPIOB_CRL &=~(1<<4);
					GPIOB_CRL &=~(1<<5);
					GPIOB_CRL &=~(1<<6);
					GPIOB_CRL &=~(1<<7);
					break;
					case 18:// PIN B2
					GPIOB_CRL &=~(1<<8);
					GPIOB_CRL &=~(1<<9);
					GPIOB_CRL &=~(1<<10);
					GPIOB_CRL &=~(1<<11);
					break;
					case 19:// PIN B3
					GPIOB_CRL &=~(1<<12);
					GPIOB_CRL &=~(1<<13);
					GPIOB_CRL &=~(1<<14);
					GPIOB_CRL &=~(1<<15);
					break;
					case 20:// PIN B4
					GPIOB_CRL &=~(1<<16);
					GPIOB_CRL &=~(1<<17);
					GPIOB_CRL &=~(1<<18);
					GPIOB_CRL &=~(1<<19);
					break;
					case 21:// PIN B5
					GPIOB_CRL &=~(1<<20);
					GPIOB_CRL &=~(1<<21);
					GPIOB_CRL &=~(1<<22);
					GPIOB_CRL &=~(1<<23);
					break;
					case 22:// PIN B6
					GPIOB_CRL &=~(1<<24);
					GPIOB_CRL &=~(1<<25);
					GPIOB_CRL &=~(1<<26);
					GPIOB_CRL &=~(1<<27);
					break;
					case 23:// PIN B7
					GPIOB_CRL &=~(1<<28);
					GPIOB_CRL &=~(1<<29);
					GPIOB_CRL &=~(1<<30);
					GPIOB_CRL &=~(1<<31);
					break;
					case 24:// PIN B8
					GPIOB_CRH &=~(1<<0);
					GPIOB_CRH &=~(1<<1);
					GPIOB_CRH &=~(1<<2);
					GPIOB_CRH &=~(1<<3);
					break;
					case 25:// PIN B9
					GPIOB_CRH &=~(1<<4);
					GPIOB_CRH &=~(1<<5);
					GPIOB_CRH &=~(1<<6);
					GPIOB_CRH &=~(1<<7);
					break;
					case 26:// PIN B10
				    GPIOB_CRH &=~(1<<8); 
					GPIOB_CRH &=~(1<<9); 
					GPIOB_CRH &=~(1<<10); 
					GPIOB_CRH &=~(1<<11); 
					break; 
					case 27:// PIN B11
					GPIOB_CRH &=~(1<<12); 
					GPIOB_CRH &=~(1<<13); 
					GPIOB_CRH &=~(1<<14); 
					GPIOB_CRH &=~(1<<15); 
					break; 
					case 28:// PIN B12 
					GPIOB_CRH &=~(1<<16);  
					GPIOB_CRH &=~(1<<17);  
					GPIOB_CRH &=~(1<<18);  
					GPIOB_CRH &=~(1<<19);  
					break;  
					case 29:// PIN B13 
					GPIOB_CRH &=~(1<<20);  
					GPIOB_CRH &=~(1<<21);  
					GPIOB_CRH &=~(1<<22);  
					GPIOB_CRH &=~(1<<23);  
					break;  
					case 30:// PIN B14  
					GPIOB_CRH &=~(1<<24); 
					GPIOB_CRH &=~(1<<25); 
					GPIOB_CRH &=~(1<<26); 
					GPIOB_CRH &=~(1<<27); 
					break;   
					case 31:// PIN B15  
					GPIOB_CRH &=~(1<<28); 
					GPIOB_CRH &=~(1<<29); 
					GPIOB_CRH &=~(1<<30); 
					GPIOB_CRH &=~(1<<31); 
					break;  
                    case 32:// PIN C13 					
					GPIOC_CRH &=~(1<<20); 
					GPIOC_CRH &=~(1<<21); 
					GPIOC_CRH &=~(1<<22); 
					GPIOC_CRH &=~(1<<23); 
					break; 
                    case 33:// PIN C14 						
					GPIOC_CRH &=~(1<<24); 
					GPIOC_CRH &=~(1<<25); 
					GPIOC_CRH &=~(1<<26); 
					GPIOC_CRH &=~(1<<27); 
					break;  
					case 34:// PIN C15 	 
					GPIOC_CRH &=~(1<<28); 
					GPIOC_CRH &=~(1<<29); 
					GPIOC_CRH &=~(1<<30); 
					GPIOC_CRH &=~(1<<31); 
					break;  
					  }
        	   break;
           case 1://  Floating input (reset state)
        	        switch(Pin){
        	        case 0:// PIN A0
        	        GPIOA_CRL &=~(1<<0);
                    GPIOA_CRL &=~(1<<1);
        	        GPIOA_CRL |=(1<<2);         
                    GPIOA_CRL &=~(1<<3);
                    break;
                    case 1:// PIN A1
                    GPIOA_CRL &=~(1<<4);
                    GPIOA_CRL &=~(1<<5);
                    GPIOA_CRL |=(1<<6);  
                    GPIOA_CRL &=~(1<<7);
                    break;
					case 2:// PIN A2
                    GPIOA_CRL &=~(1<<8);
                    GPIOA_CRL &=~(1<<9);
                    GPIOA_CRL |=(1<<10);  
                    GPIOA_CRL &=~(1<<11);
                    break;
					case 3:// PIN A3
                    GPIOA_CRL &=~(1<<12);
                    GPIOA_CRL &=~(1<<13);
                    GPIOA_CRL |=(1<<14);  
                    GPIOA_CRL &=~(1<<15);
                    break;
					case 4:// PIN A4
                    GPIOA_CRL &=~(1<<16);
                    GPIOA_CRL &=~(1<<17);
                    GPIOA_CRL |=(1<<18);  
                    GPIOA_CRL &=~(1<<19);
                    break;
					case 5:// PIN A5
                    GPIOA_CRL &=~(1<<20);
                    GPIOA_CRL &=~(1<<21);
                    GPIOA_CRL |=(1<<22);  
                    GPIOA_CRL &=~(1<<23);
                    break;
					case 6:// PIN A6
					GPIOA_CRL &=~(1<<24);
					GPIOA_CRL &=~(1<<25);
					GPIOA_CRL |=(1<<26);  
					GPIOA_CRL &=~(1<<27);
					break;
					case 7:// PIN A7
					GPIOA_CRL &=~(1<<28);
					GPIOA_CRL &=~(1<<29);
					GPIOA_CRL |=(1<<30);  
					GPIOA_CRL &=~(1<<31);
					break;
					case 8:// PIN A8
					GPIOA_CRH &=~(1<<0);
					GPIOA_CRH &=~(1<<1);
					GPIOA_CRH |=(1<<2);  
					GPIOA_CRH &=~(1<<3);
					break;
					case 9:// PIN A9
					GPIOA_CRH &=~(1<<4);
					GPIOA_CRH &=~(1<<5);
					GPIOA_CRH |=(1<<6); 
					GPIOA_CRH &=~(1<<7);
					break;
					case 10:// PIN A10
					GPIOA_CRH &=~(1<<8);
					GPIOA_CRH &=~(1<<9);
					GPIOA_CRH |=(1<<10); 
					GPIOA_CRH &=~(1<<11);
					break;
					case 11:// PIN A11
					GPIOA_CRH &=~(1<<12);
					GPIOA_CRH &=~(1<<13);
					GPIOA_CRH |=(1<<14); 
					GPIOA_CRH &=~(1<<15);
					break;
					case 12:// PIN A12
					GPIOA_CRH &=~(1<<16);
					GPIOA_CRH &=~(1<<17);
					GPIOA_CRH |=(1<<18); 
					GPIOA_CRH &=~(1<<19);
					break;
					case 13:// PIN A13
					GPIOA_CRH &=~(1<<20);
					GPIOA_CRH &=~(1<<21);
					GPIOA_CRH |=(1<<22); 
					GPIOA_CRH &=~(1<<23);
					break;
					case 14:// PIN A15
					GPIOA_CRH &=~(1<<24);
					GPIOA_CRH &=~(1<<25);
					GPIOA_CRH |=(1<<26); 
					GPIOA_CRH &=~(1<<27);
					break;
					case 15:// PIN A15
					GPIOA_CRH &=~(1<<28);
					GPIOA_CRH &=~(1<<29);
					GPIOA_CRH |=(1<<30); 
					GPIOA_CRH &=~(1<<31);
					break;
					case 16:// PIN B0
					GPIOB_CRL &=~(1<<0);
					GPIOB_CRL &=~(1<<1);
					GPIOB_CRL |=(1<<2); 
					GPIOB_CRL &=~(1<<3);
					break;
					case 17:// PIN B1
					GPIOB_CRL &=~(1<<4);
					GPIOB_CRL &=~(1<<5);
					GPIOB_CRL |=(1<<6); 
					GPIOB_CRL &=~(1<<7);
					break;
					case 18:// PIN B2
                    GPIOB_CRL &=~(1<<8);
                    GPIOB_CRL &=~(1<<9);
                    GPIOB_CRL |=(1<<10);  
                    GPIOB_CRL &=~(1<<11);
                    break;
					case 19:// PIN B3
                    GPIOB_CRL &=~(1<<12);
                    GPIOB_CRL &=~(1<<13);
                    GPIOB_CRL |=(1<<14);  
                    GPIOB_CRL &=~(1<<15);
                    break;
					case 20:// PIN B4
                    GPIOB_CRL &=~(1<<16);
                    GPIOB_CRL &=~(1<<17);
                    GPIOB_CRL |=(1<<18);  
                    GPIOB_CRL &=~(1<<19);
                    break;
					case 21:// PIN B5
                    GPIOB_CRL &=~(1<<20);
                    GPIOB_CRL &=~(1<<21);
                    GPIOB_CRL |=(1<<22);  
                    GPIOB_CRL &=~(1<<23);
                    break;
					case 22:// PIN B6
					GPIOB_CRL &=~(1<<24);
					GPIOB_CRL &=~(1<<25);
					GPIOB_CRL |=(1<<26);  
					GPIOB_CRL &=~(1<<27);
					break;
					case 23:// PIN B7
					GPIOB_CRL &=~(1<<28);
					GPIOB_CRL &=~(1<<29);
					GPIOB_CRL |=(1<<30);  
					GPIOB_CRL &=~(1<<31);
					break;
					case 24:// PIN B8
					GPIOB_CRH &=~(1<<0);
					GPIOB_CRH &=~(1<<1);
					GPIOB_CRH |=(1<<2);  
					GPIOB_CRH &=~(1<<3);
					break;
					case 25:// PIN B9
					GPIOB_CRH &=~(1<<4);
					GPIOB_CRH &=~(1<<5);
					GPIOB_CRH |=(1<<6); 
					GPIOB_CRH &=~(1<<7);
					break;
					case 26:// PIN B10
					GPIOB_CRH &=~(1<<8);
					GPIOB_CRH &=~(1<<9);
					GPIOB_CRH |=(1<<10); 
					GPIOB_CRH &=~(1<<11);
					break;
					case 27:// PIN B11
					GPIOB_CRH &=~(1<<12);
					GPIOB_CRH &=~(1<<13);
					GPIOB_CRH |=(1<<14); 
					GPIOB_CRH &=~(1<<15);
					break;
					case 28:// PIN B12
					GPIOB_CRH &=~(1<<16);
					GPIOB_CRH &=~(1<<17);
					GPIOB_CRH |=(1<<18); 
					GPIOB_CRH &=~(1<<19);
					break;
					case 29:// PIN B13
					GPIOB_CRH &=~(1<<20);
					GPIOB_CRH &=~(1<<21);
					GPIOB_CRH |=(1<<22); 
					GPIOB_CRH &=~(1<<23);
					break;
					case 30:// PIN B15
					GPIOB_CRH &=~(1<<24);
					GPIOB_CRH &=~(1<<25);
					GPIOB_CRH |=(1<<26); 
					GPIOB_CRH &=~(1<<27);
					break;
					case 31:// PIN B15
					GPIOB_CRH &=~(1<<28);
					GPIOB_CRH &=~(1<<29);
					GPIOB_CRH |=(1<<30); 
					GPIOB_CRH &=~(1<<31);
					break;
					case 32:// PIN C13
					GPIOC_CRH &=~(1<<20);
					GPIOC_CRH &=~(1<<21);
					GPIOC_CRH |=(1<<22); 
					GPIOC_CRH &=~(1<<23);
					break;
					case 33:// PIN C15
					GPIOC_CRH &=~(1<<24);
					GPIOC_CRH &=~(1<<25);
					GPIOC_CRH |=(1<<26); 
					GPIOC_CRH &=~(1<<27);
					break;
					case 34:// PIN C15
					GPIOC_CRH &=~(1<<28);
					GPIOC_CRH &=~(1<<29);
					GPIOC_CRH |=(1<<30); 
					GPIOC_CRH &=~(1<<31);
					break;
					       }
		 break;
             case 2://Input with pull-up / pull-down
                switch(Pin)            {
				   case 0:// PIN A0
				   GPIOA_CRL &=~(1<<0);
				   GPIOA_CRL &=~(1<<1);
				   GPIOA_CRL &=~(1<<2); 
				   GPIOA_CRL |=(1<<3);
				   break;
				   case 1:// PIN A1
				   GPIOA_CRL &=~(1<<4);
				   GPIOA_CRL &=~(1<<5);
				   GPIOA_CRL &=~(1<<6);  
				   GPIOA_CRL |=(1<<7);
				   break;
				   case 2:// PIN A2
				   GPIOA_CRL &=~(1<<8);
				   GPIOA_CRL &=~(1<<9);
				   GPIOA_CRL &=~(1<<10); 
				   GPIOA_CRL |=(1<<11);
				   break;
				   case 3:// PIN A3
				   GPIOA_CRL &=~(1<<12);
				   GPIOA_CRL &=~(1<<13);
				   GPIOA_CRL &=~(1<<14); 
				   GPIOA_CRL |=(1<<15);
				   break;
				   case 4:// PIN A4
				   GPIOA_CRL &=~(1<<16);
				   GPIOA_CRL &=~(1<<17);
				   GPIOA_CRL &=~(1<<18); 
				   GPIOA_CRL |=(1<<19);
				   break;
				   case 5:// PIN A5
				   GPIOA_CRL &=~(1<<20);
				   GPIOA_CRL &=~(1<<21);
				   GPIOA_CRL &=~(1<<22); 
				   GPIOA_CRL |=(1<<23);
				   break;
				   case 6:// PIN A6
				   GPIOA_CRL &=~(1<<24);
				   GPIOA_CRL &=~(1<<25);
				   GPIOA_CRL &=~(1<<26); 
				   GPIOA_CRL |=(1<<27);
				   break;
				   case 7:// PIN A7
				   GPIOA_CRL &=~(1<<28);
				   GPIOA_CRL &=~(1<<29);
				   GPIOA_CRL &=~(1<<30); 
				   GPIOA_CRL |=(1<<31);
				   break;
				   case 8:// PIN A8
				   GPIOA_CRH &=~(1<<0);
				   GPIOA_CRH &=~(1<<1);
				   GPIOA_CRH &=~(1<<2);  
				   GPIOA_CRH |=(1<<3);
				   break;
				   case 9:// PIN A9
				   GPIOA_CRH &=~(1<<4);
				   GPIOA_CRH &=~(1<<5);
				   GPIOA_CRH &=~(1<<6); 
				   GPIOA_CRH |=(1<<7);
				   break;
				   case 10:// PIN A10
				   GPIOA_CRH &=~(1<<8);
				   GPIOA_CRH &=~(1<<9);
				   GPIOA_CRH &=~(1<<10); 
				   GPIOA_CRH |=(1<<11);
				   break;
				   case 11:// PIN A11
				   GPIOA_CRH &=~(1<<12);
				   GPIOA_CRH &=~(1<<13);
				   GPIOA_CRH &=~(1<<14); 
				   GPIOA_CRH |=(1<<15);
				   break;
				   case 12:// PIN A12
				   GPIOA_CRH &=~(1<<16);
				   GPIOA_CRH &=~(1<<17);
				   GPIOA_CRH &=~(1<<18); 
				   GPIOA_CRH |=(1<<19);
				   break;
				   case 13:// PIN A13
				   GPIOA_CRH &=~(1<<20);
				   GPIOA_CRH &=~(1<<21);
				   GPIOA_CRH &=~(1<<22); 
				   GPIOA_CRH |=(1<<23);
				   break;
				   case 14:// PIN A15
				   GPIOA_CRH &=~(1<<24);
				   GPIOA_CRH &=~(1<<25);
				   GPIOA_CRH &=~(1<<26); 
				   GPIOA_CRH |=(1<<27);
				   break;
				   case 15:// PIN A15
				   GPIOA_CRH &=~(1<<28);
				   GPIOA_CRH &=~(1<<29);
				   GPIOA_CRH &=~(1<<30); 
				   GPIOA_CRH |=(1<<31);
				   break;
				   case 16:// PIN B0
				   GPIOB_CRL &=~(1<<0);
				   GPIOB_CRL &=~(1<<1);
				   GPIOB_CRL &=~(1<<2); 
				   GPIOB_CRL |=(1<<3);
				   break;
				   case 17:// PIN B1
				   GPIOB_CRL &=~(1<<4);
				   GPIOB_CRL &=~(1<<5);
				   GPIOB_CRL &=~(1<<6); 
				   GPIOB_CRL |=(1<<7);
				   break;
				   case 18:// PIN B2
				   GPIOB_CRL &=~(1<<8);
				   GPIOB_CRL &=~(1<<9);
				   GPIOB_CRL &=~(1<<10); 
				   GPIOB_CRL |=(1<<11);
				   break;
				   case 19:// PIN B3
				   GPIOB_CRL &=~(1<<12);
				   GPIOB_CRL &=~(1<<13);
				   GPIOB_CRL &=~(1<<14); 
				   GPIOB_CRL |=(1<<15);
				   break;
				   case 20:// PIN B4
				   GPIOB_CRL &=~(1<<16);
				   GPIOB_CRL &=~(1<<17);
				   GPIOB_CRL &=~(1<<18); 
				   GPIOB_CRL |=(1<<19);
				   break;
				   case 21:// PIN B5
				   GPIOB_CRL &=~(1<<20);
				   GPIOB_CRL &=~(1<<21);
				   GPIOB_CRL &=~(1<<22); 
				   GPIOB_CRL |=(1<<23);
				   break;
				   case 22:// PIN B6
				   GPIOB_CRL &=~(1<<24);
				   GPIOB_CRL &=~(1<<25);
				   GPIOB_CRL &=~(1<<26); 
                   GPIOB_CRL |=(1<<27);   
                  break;
                  case 23:// PIN B7
                   GPIOB_CRL &=~(1<<28);
                   GPIOB_CRL &=~(1<<29);
                   GPIOB_CRL &=~(1<<30); 
                   GPIOB_CRL |=(1<<31);
                   break;
                   case 24:// PIN B8
                   GPIOB_CRH &=~(1<<0);
                   GPIOB_CRH &=~(1<<1);
                   GPIOB_CRH &=~(1<<2);  
                   GPIOB_CRH |=(1<<3);
                   break;
                   case 25:// PIN B9
                   GPIOB_CRH &=~(1<<4);
                   GPIOB_CRH &=~(1<<5);
                   GPIOB_CRH &=~(1<<6); 
                   GPIOB_CRH |=(1<<7);
                   break;
                   case 26:// PIN B10
                   GPIOB_CRH &=~(1<<8);
                   GPIOB_CRH &=~(1<<9);
                   GPIOB_CRH &=~(1<<10); 
                   GPIOB_CRH |=(1<<11);
                   break;
                   case 27:// PIN B11
                   GPIOB_CRH &=~(1<<12);
                   GPIOB_CRH &=~(1<<13);
                   GPIOB_CRH &=~(1<<14); 
                   GPIOB_CRH |=(1<<15);
                   break;
                   case 28:// PIN B12
                   GPIOB_CRH &=~(1<<16);
                   GPIOB_CRH &=~(1<<17);
                   GPIOB_CRH &=~(1<<18); 
                   GPIOB_CRH |=(1<<19);
                   break;
                   case 29:// PIN B13
                   GPIOB_CRH &=~(1<<20);
                   GPIOB_CRH &=~(1<<21);
                   GPIOB_CRH &=~(1<<22); 
                   GPIOB_CRH |=(1<<23);
                   break;
                   case 30:// PIN B15
                   GPIOB_CRH &=~(1<<24);
                   GPIOB_CRH &=~(1<<25);
                   GPIOB_CRH &=~(1<<26); 
                   GPIOB_CRH |=(1<<27);
                   break;
                   case 31:// PIN B15
                   GPIOB_CRH &=~(1<<28);
                   GPIOB_CRH &=~(1<<29);
                   GPIOB_CRH &=~(1<<30); 
                   GPIOB_CRH |=(1<<31);
                   break;
                   case 32:// PIN C13
                   GPIOC_CRH &=~(1<<20);
                   GPIOC_CRH &=~(1<<21);
                   GPIOC_CRH &=~(1<<22); 
                   GPIOC_CRH |=(1<<23);
                   break;
                   case 33:// PIN C15
                   GPIOC_CRH &=~(1<<24);
                   GPIOC_CRH &=~(1<<25);
                   GPIOC_CRH &=~(1<<26); 
                   GPIOC_CRH |=(1<<27);
                   break;
                   case 34:// PIN C15
                   GPIOC_CRH &=~(1<<28);
                   GPIOC_CRH &=~(1<<29);
                   GPIOC_CRH &=~(1<<30); 
                   GPIOC_CRH |=(1<<31);
                   break;
				            }
				break;
	        }
			break;
		case 1://Output mode, max speed 10 MHz
		      switch(Input_Output_mode){
				  case 0://General purpose output push-pull
				  switch(Pin){
				   case 0:// PIN A0
				   GPIOA_CRL |=(1<<0);
				   GPIOA_CRL &=~(1<<1);
				   GPIOA_CRL &=~(1<<2); 
				   GPIOA_CRL &=~(1<<3);
				   break;
				   case 1:// PIN A1
				   GPIOA_CRL |=(1<<4);
				   GPIOA_CRL &=~(1<<5);
				   GPIOA_CRL &=~(1<<6);
				   GPIOA_CRL &=~(1<<7);
				   break;
				   case 2:// PIN A2
				   GPIOA_CRL |=(1<<8);
				   GPIOA_CRL &=~(1<<9);
				   GPIOA_CRL &=~(1<<10);
				   GPIOA_CRL &=~(1<<11);
				   break;
				   case 3:// PIN A3
				   GPIOA_CRL |=(1<<12);
				   GPIOA_CRL &=~(1<<13);
				   GPIOA_CRL &=~(1<<14);
				   GPIOA_CRL &=~(1<<15);
				   break;
				   case 4:// PIN A4
				   GPIOA_CRL |=(1<<16);
				   GPIOA_CRL &=~(1<<17);
				   GPIOA_CRL &=~(1<<18); 
				   GPIOA_CRL &=~(1<<19);
				   break;
				   case 5:// PIN A5
				   GPIOA_CRL |=(1<<20);
				   GPIOA_CRL &=~(1<<21);
				   GPIOA_CRL &=~(1<<22);
				   GPIOA_CRL &=~(1<<23);
				   break;
				   case 6:// PIN A6
				   GPIOA_CRL |=(1<<24);
				   GPIOA_CRL &=~(1<<25);
				   GPIOA_CRL &=~(1<<26);
				   GPIOA_CRL &=~(1<<27);
				   break;
				   case 7:// PIN A7
				   GPIOA_CRL |=(1<<28);
				   GPIOA_CRL &=~(1<<29);
				   GPIOA_CRL &=~(1<<30);
				   GPIOA_CRL &=~(1<<31);
				   break;
				   case 8:// PIN A8
				   GPIOA_CRH |=(1<<0);
				   GPIOA_CRH &=~(1<<1);
				   GPIOA_CRH &=~(1<<2); 
				   GPIOA_CRH &=~(1<<3);
				   break;
				   case 9:// PIN A9
				   GPIOA_CRH |=(1<<4);
				   GPIOA_CRH &=~(1<<5);
				   GPIOA_CRH &=~(1<<6);
				   GPIOA_CRH &=~(1<<7);
				   break;
				   case 10:// PIN A10
				   GPIOA_CRH |=(1<<8);
				   GPIOA_CRH &=~(1<<9);
				   GPIOA_CRH &=~(1<<10);
				   GPIOA_CRH &=~(1<<11);
				   break;
				   case 11:// PIN A11
				   GPIOA_CRH |=(1<<12);
				   GPIOA_CRH &=~(1<<13);
				   GPIOA_CRH &=~(1<<14);
				   GPIOA_CRH &=~(1<<15);
				   break;
				   case 12:// PIN A12
				   GPIOA_CRH |=(1<<16);
				   GPIOA_CRH &=~(1<<17);
				   GPIOA_CRH &=~(1<<18); 
				   GPIOA_CRH &=~(1<<19);
				   break;
				   case 13:// PIN A13
				   GPIOA_CRH |=(1<<20);
				   GPIOA_CRH &=~(1<<21);
				   GPIOA_CRH &=~(1<<22);
				   GPIOA_CRH &=~(1<<23);
				   break;
				   case 14:// PIN A14
				   GPIOA_CRH |=(1<<24);
				   GPIOA_CRH &=~(1<<25);
				   GPIOA_CRH &=~(1<<26);
				   GPIOA_CRH &=~(1<<27);
				   break;
				   case 15:// PIN A15
				   GPIOA_CRH |=(1<<28);
				   GPIOA_CRH &=~(1<<29);
				   GPIOA_CRH &=~(1<<30);
				   GPIOA_CRH &=~(1<<31);
				   break;
				   case 16:// PIN B0
				   GPIOB_CRL |=(1<<0);
				   GPIOB_CRL &=~(1<<1);
				   GPIOB_CRL &=~(1<<2); 
				   GPIOB_CRL &=~(1<<3);
				   break;
				   case 17:// PIN B1
				   GPIOB_CRL |=(1<<4);
				   GPIOB_CRL &=~(1<<5);
				   GPIOB_CRL &=~(1<<6);
				   GPIOB_CRL &=~(1<<7);
				   break;
				   case 18:// PIN B2
				   GPIOB_CRL |=(1<<8);
				   GPIOB_CRL &=~(1<<9);
				   GPIOB_CRL &=~(1<<10);
				   GPIOB_CRL &=~(1<<11);
				   break;
				   case 19:// PIN B3
				   GPIOB_CRL |=(1<<12);
				   GPIOB_CRL &=~(1<<13);
				   GPIOB_CRL &=~(1<<14);
				   GPIOB_CRL &=~(1<<15);
				   break;
				   case 20:// PIN B4
				   GPIOB_CRL |=(1<<16);
				   GPIOB_CRL &=~(1<<17);
				   GPIOB_CRL &=~(1<<18);
				   GPIOB_CRL &=~(1<<19);
				   break;
				   case 21:// PIN B5
				   GPIOB_CRL |=(1<<20);
				   GPIOB_CRL &=~(1<<21);
				   GPIOB_CRL &=~(1<<22);
				   GPIOB_CRL &=~(1<<23);
				   break;
				   case 22:// PIN B6
				   GPIOB_CRL |=(1<<24);
				   GPIOB_CRL &=~(1<<25);
				   GPIOB_CRL &=~(1<<26);
				   GPIOB_CRL &=~(1<<27);
				   break;
				   case 23:// PIN B7
				   GPIOB_CRL |=(1<<28);
				   GPIOB_CRL &=~(1<<29);
				   GPIOB_CRL &=~(1<<30);
				   GPIOB_CRL &=~(1<<31);
				   break;
				   case 24:// PIN B8
				   GPIOB_CRH |=(1<<0);
				   GPIOB_CRH &=~(1<<1);
				   GPIOB_CRH &=~(1<<2); 
				   GPIOB_CRH &=~(1<<3);
				   break;
				   case 25:// PIN B9
				   GPIOB_CRH |=(1<<4);
				   GPIOB_CRH &=~(1<<5);
				   GPIOB_CRH &=~(1<<6);
				   GPIOB_CRH &=~(1<<7);
				   break;
				   case 26:// PIN B10
				   GPIOB_CRH |=(1<<8);
				   GPIOB_CRH &=~(1<<9);
				   GPIOB_CRH &=~(1<<10);
				   GPIOB_CRH &=~(1<<11);
				   break;
				   case 27:// PIN B11
				   GPIOB_CRH |=(1<<12);
				   GPIOB_CRH &=~(1<<13);
				   GPIOB_CRH &=~(1<<14);
				   GPIOB_CRH &=~(1<<15);
				   break;
				   case 28:// PIN B12
				   GPIOB_CRH |=(1<<16);
				   GPIOB_CRH &=~(1<<17);
				   GPIOB_CRH &=~(1<<18);
				   GPIOB_CRH &=~(1<<19);
				   break;
				   case 29:// PIN B13
				   GPIOB_CRH |=(1<<20);
				   GPIOB_CRH &=~(1<<21);
				   GPIOB_CRH &=~(1<<22);
				   GPIOB_CRH &=~(1<<23);
				   break;
				   case 30:// PIN B14
				   GPIOB_CRH |=(1<<24);
				   GPIOB_CRH &=~(1<<25);
				   GPIOB_CRH &=~(1<<26);
				   GPIOB_CRH &=~(1<<27);
				   break;
				   case 31:// PIN B15
				   GPIOB_CRH |=(1<<28);
				   GPIOB_CRH &=~(1<<29);
				   GPIOB_CRH &=~(1<<30);
				   GPIOB_CRH &=~(1<<31);
				   break;
				   case 32:// PIN C13
				   GPIOC_CRH |=(1<<20);
				   GPIOC_CRH &=~(1<<21);
				   GPIOC_CRH &=~(1<<22);
				   GPIOC_CRH &=~(1<<23);
				   break;
				   case 33:// PIN C14
				   GPIOC_CRH |=(1<<24);
				   GPIOC_CRH &=~(1<<25);
				   GPIOC_CRH &=~(1<<26);
				   GPIOC_CRH &=~(1<<27);
				   break;
				   case 34:// PIN C15
				   GPIOC_CRH |=(1<<28);
				   GPIOC_CRH &=~(1<<29);
				   GPIOC_CRH &=~(1<<30);
				   GPIOC_CRH &=~(1<<31);
				   break;
				     }
					 break;
				case 1:// General purpose output Open-drain  
				switch (Pin){
				  case 0:// PIN A0  
				  GPIOA_CRL |=(1<<0);  
				  GPIOA_CRL &=~(1<<1);  
				  GPIOA_CRL |=(1<<2);   
				  GPIOA_CRL &=~(1<<3);  
				  break;  
				  case 1:// PIN A1  
				  GPIOA_CRL |=(1<<4);  
				  GPIOA_CRL &=~(1<<5);  
				  GPIOA_CRL |=(1<<6);  
				  GPIOA_CRL &=~(1<<7);  
				  break;  
				  case 2:// PIN A2  
				  GPIOA_CRL |=(1<<8);  
				  GPIOA_CRL &=~(1<<9);  
				  GPIOA_CRL |=(1<<10);  
				  GPIOA_CRL &=~(1<<11);  
				  break;  
				  case 3:// PIN A3  
				  GPIOA_CRL |=(1<<12);  
				  GPIOA_CRL &=~(1<<13);  
				  GPIOA_CRL |=(1<<14);  
				  GPIOA_CRL &=~(1<<15);  
				  break;  
				  case 4:// PIN A4  
				  GPIOA_CRL |=(1<<16);  
				  GPIOA_CRL &=~(1<<17);  
				  GPIOA_CRL |=(1<<18);  
				  GPIOA_CRL &=~(1<<19);  
				  break;  
				  case 5:// PIN A5  
				  GPIOA_CRL |=(1<<20);  
				  GPIOA_CRL &=~(1<<21);  
				  GPIOA_CRL |=(1<<22);  
				  GPIOA_CRL &=~(1<<23);  
				  break;  
				  case 6:// PIN A6  
				  GPIOA_CRL |=(1<<24);  
				  GPIOA_CRL &=~(1<<25);  
				  GPIOA_CRL |=(1<<26);  
				  GPIOA_CRL &=~(1<<27);  
				  break;  
				  case 7:// PIN A7  
				  GPIOA_CRL |=(1<<28);  
				  GPIOA_CRL &=~(1<<29);  
				  GPIOA_CRL |=(1<<30);  
				  GPIOA_CRL &=~(1<<31);  
				  break;  
				  case 8:// PIN A8  
				  GPIOA_CRH |=(1<<0);  
				  GPIOA_CRH &=~(1<<1);  
				  GPIOA_CRH |=(1<<2);   
				  GPIOA_CRH &=~(1<<3);  
				  break;  
				  case 9:// PIN A9  
				  GPIOA_CRH |=(1<<4);  
				  GPIOA_CRH &=~(1<<5);  
				  GPIOA_CRH |=(1<<6);  
				  GPIOA_CRH &=~(1<<7);  
				  break;  
				  case 10:// PIN A10  
				  GPIOA_CRH |=(1<<8);  
				  GPIOA_CRH &=~(1<<9);  
				  GPIOA_CRH |=(1<<10);  
				  GPIOA_CRH &=~(1<<11);  
				  break;  
				  case 11:// PIN A11  
				  GPIOA_CRH |=(1<<12);  
				  GPIOA_CRH &=~(1<<13);  
				  GPIOA_CRH |=(1<<14);  
				  GPIOA_CRH &=~(1<<15);  
				  break;  
				  case 12:// PIN A12  
				  GPIOA_CRH |=(1<<16);  
				  GPIOA_CRH &=~(1<<17);  
				  GPIOA_CRH |=(1<<18);  
				  GPIOA_CRH &=~(1<<19);  
				  break;  
				  case 13:// PIN A13  
				  GPIOA_CRH |=(1<<20);  
				  GPIOA_CRH &=~(1<<21);  
				  GPIOA_CRH |=(1<<22);  
				  GPIOA_CRH &=~(1<<23);  
				  break;  
				  case 14:// PIN A14  
				  GPIOA_CRH |=(1<<24);  
				  GPIOA_CRH &=~(1<<25);  
				  GPIOA_CRH |=(1<<26);  
				  GPIOA_CRH &=~(1<<27);  
				  break;  
				  case 15:// PIN A15  
				  GPIOA_CRH |=(1<<28);  
				  GPIOA_CRH &=~(1<<29);  
				  GPIOA_CRH |=(1<<30);  
				  GPIOA_CRH &=~(1<<31);  
				  break;  
				  case 16:// PIN B0  
				  GPIOB_CRL |=(1<<0);  
				  GPIOB_CRL &=~(1<<1);  
				  GPIOB_CRL |=(1<<2);   
				  GPIOB_CRL &=~(1<<3);  
				  break;  
				  case 17:// PIN B1  
				  GPIOB_CRL |=(1<<4);  
				  GPIOB_CRL &=~(1<<5);  
				  GPIOB_CRL |=(1<<6);  
				  GPIOB_CRL &=~(1<<7);  
				  break;  
				  case 18:// PIN B2  
				  GPIOB_CRL |=(1<<8);  
				  GPIOB_CRL &=~(1<<9);  
				  GPIOB_CRL |=(1<<10);  
				  GPIOB_CRL &=~(1<<11);  
				  break;  
				  case 19:// PIN B3  
				  GPIOB_CRL |=(1<<12);  
				  GPIOB_CRL &=~(1<<13);  
				  GPIOB_CRL |=(1<<14);  
				  GPIOB_CRL &=~(1<<15);  
				  break;  
				  case 20:// PIN B4  
				  GPIOB_CRL |=(1<<16);  
				  GPIOB_CRL &=~(1<<17);  
				  GPIOB_CRL |=(1<<18);  
				  GPIOB_CRL &=~(1<<19);  
				  break;  
				  case 21:// PIN B5  
				  GPIOB_CRL |=(1<<20);  
				  GPIOB_CRL &=~(1<<21);  
				  GPIOB_CRL |=(1<<22);  
				  GPIOB_CRL &=~(1<<23);  
				  break;  
				  case 22:// PIN B6  
				  GPIOB_CRL |=(1<<24);  
				  GPIOB_CRL &=~(1<<25);  
				  GPIOB_CRL |=(1<<26);  
				  GPIOB_CRL &=~(1<<27);  
				  break;  
				  case 23:// PIN B7  
				  GPIOB_CRL |=(1<<28);  
				  GPIOB_CRL &=~(1<<29);  
				  GPIOB_CRL |=(1<<30);  
				  GPIOB_CRL &=~(1<<31);  
				  break;  
				  case 24:// PIN B8  
				  GPIOB_CRH |=(1<<0);  
				  GPIOB_CRH &=~(1<<1);  
				  GPIOB_CRH |=(1<<2);   
				  GPIOB_CRH &=~(1<<3);  
				  break;  
				  case 25:// PIN B9  
				  GPIOB_CRH |=(1<<4);  
				  GPIOB_CRH &=~(1<<5);  
				  GPIOB_CRH |=(1<<6);  
				  GPIOB_CRH &=~(1<<7);  
				  break;  
				  case 26:// PIN B10  
				  GPIOB_CRH |=(1<<8);  
				  GPIOB_CRH &=~(1<<9);  
				  GPIOB_CRH |=(1<<10);  
				  GPIOB_CRH &=~(1<<11);  
				  break;  
				  case 27:// PIN B11  
				  GPIOB_CRH |=(1<<12);  
				  GPIOB_CRH &=~(1<<13);  
				  GPIOB_CRH |=(1<<14);  
				  GPIOB_CRH &=~(1<<15);  
				  break;  
				  case 28:// PIN B12  
				  GPIOB_CRH |=(1<<16);  
				  GPIOB_CRH &=~(1<<17);  
				  GPIOB_CRH |=(1<<18);  
				  GPIOB_CRH &=~(1<<19);  
				  break;  
				  case 29:// PIN B13  
				  GPIOB_CRH |=(1<<20);  
				  GPIOB_CRH &=~(1<<21);  
				  GPIOB_CRH |=(1<<22);  
				  GPIOB_CRH &=~(1<<23);  
				  break;  
				  case 30:// PIN B14  
				  GPIOB_CRH |=(1<<24);  
				  GPIOB_CRH &=~(1<<25);  
				  GPIOB_CRH |=(1<<26);  
				  GPIOB_CRH &=~(1<<27);  
				  break;  
				  case 31:// PIN B15  
				  GPIOB_CRH |=(1<<28);  
				  GPIOB_CRH &=~(1<<29);  
				  GPIOB_CRH |=(1<<30);  
				  GPIOB_CRH &=~(1<<31);  
				  break;  
				  case 32:// PIN C13  
				  GPIOC_CRH |=(1<<20);  
				  GPIOC_CRH &=~(1<<21);  
				  GPIOC_CRH |=(1<<22);  
				  GPIOC_CRH &=~(1<<23);  
				  break;  
				  case 33:// PIN C14  
				  GPIOC_CRH |=(1<<24);  
				  GPIOC_CRH &=~(1<<25);  
				  GPIOC_CRH |=(1<<26);  
				  GPIOC_CRH &=~(1<<27);  
				  break;  
				  case 34:// PIN C15  
				  GPIOC_CRH |=(1<<28);  
				  GPIOC_CRH &=~(1<<29);  
				  GPIOC_CRH |=(1<<30);  
				  GPIOC_CRH &=~(1<<31);  
				  break;  
				}
				break;
				case 2:// Alternate function output Push-pull
				switch (Pin){
				  case 0:// PIN A0
				  GPIOA_CRL |=(1<<0);
                  GPIOA_CRL &=~(1<<1);
                  GPIOA_CRL |=(1<<3); 
                  GPIOA_CRL &=~(1<<2);
                  break;
                  case 1:// PIN A1
                  GPIOA_CRL |=(1<<4);
                  GPIOA_CRL &=~(1<<5);
                  GPIOA_CRL |=(1<<7);
                  GPIOA_CRL &=~(1<<6);
                  break;
                  case 2:// PIN A2
                  GPIOA_CRL |=(1<<8);
                  GPIOA_CRL &=~(1<<9);
                  GPIOA_CRL |=(1<<11);
                  GPIOA_CRL &=~(1<<10);
                  break;
                  case 3:// PIN A3
                  GPIOA_CRL |=(1<<12);
                  GPIOA_CRL &=~(1<<13);
                  GPIOA_CRL |=(1<<15);
                  GPIOA_CRL &=~(1<<14);
                  break;
                  case 4:// PIN A4
                  GPIOA_CRL |=(1<<16);
                  GPIOA_CRL &=~(1<<17);
                  GPIOA_CRL |=(1<<19);
                  GPIOA_CRL &=~(1<<18);
                  break;
                  case 5:// PIN A5
                  GPIOA_CRL |=(1<<20);
                  GPIOA_CRL &=~(1<<21);
                  GPIOA_CRL |=(1<<23);
                  GPIOA_CRL &=~(1<<22);
                  break;
                  case 6:// PIN A6
                  GPIOA_CRL |=(1<<24);
                  GPIOA_CRL &=~(1<<25);
                  GPIOA_CRL |=(1<<27);
                  GPIOA_CRL &=~(1<<28);
                  break;
                  case 7:// PIN A7
                  GPIOA_CRL |=(1<<28);
                  GPIOA_CRL &=~(1<<29);
                  GPIOA_CRL |=(1<<31);
                  GPIOA_CRL &=~(1<<30);
                  break;
                  case 8:// PIN A8
                  GPIOA_CRH |=(1<<0);
                  GPIOA_CRH &=~(1<<1);
                  GPIOA_CRH |=(1<<3); 
                  GPIOA_CRH &=~(1<<2);
                  break;
                  case 9:// PIN A9
                  GPIOA_CRH |=(1<<4);
                  GPIOA_CRH &=~(1<<5);
                  GPIOA_CRH |=(1<<7);
                  GPIOA_CRH &=~(1<<6);
                  break;
                  case 10:// PIN A10
                  GPIOA_CRH |=(1<<8);
                  GPIOA_CRH &=~(1<<9);
                  GPIOA_CRH |=(1<<11);
                  GPIOA_CRH &=~(1<<10);
                  break;
                  case 11:// PIN A11
                  GPIOA_CRH |=(1<<12);
                  GPIOA_CRH &=~(1<<13);
                  GPIOA_CRH |=(1<<15);
                  GPIOA_CRH &=~(1<<14);
                  break;
                  case 12:// PIN A12
                  GPIOA_CRH |=(1<<16);
                  GPIOA_CRH &=~(1<<17);
                  GPIOA_CRH |=(1<<19);
                  GPIOA_CRH &=~(1<<18);
                  break;
                  case 13:// PIN A13
                  GPIOA_CRH |=(1<<20);
                  GPIOA_CRH &=~(1<<21);
                  GPIOA_CRH |=(1<<23);
                  GPIOA_CRH &=~(1<<22);
                  break;
                  case 14:// PIN A14
                  GPIOA_CRH |=(1<<24);
                  GPIOA_CRH &=~(1<<25);
                  GPIOA_CRH |=(1<<27);
                  GPIOA_CRH &=~(1<<26);
                  break;
                  case 15:// PIN A15
                  GPIOA_CRH |=(1<<28);
                  GPIOA_CRH &=~(1<<29);
                  GPIOA_CRH |=(1<<31);
                  GPIOA_CRH &=~(1<<30);
                  break;
                  case 16:// PIN B0
                  GPIOB_CRL |=(1<<0);
                  GPIOB_CRL &=~(1<<1);
                  GPIOB_CRL |=(1<<3); 
                  GPIOB_CRL &=~(1<<2);
                  break;
                  case 17:// PIN B1
                  GPIOB_CRL |=(1<<4);
                  GPIOB_CRL &=~(1<<5);
                  GPIOB_CRL |=(1<<7);
                  GPIOB_CRL &=~(1<<6);
                  break;
                  case 18:// PIN B2
                  GPIOB_CRL |=(1<<8);
                  GPIOB_CRL &=~(1<<9);
                  GPIOB_CRL |=(1<<11);
                  GPIOB_CRL &=~(1<<10);
                  break;
                  case 19:// PIN B3
                  GPIOB_CRL |=(1<<12);
                  GPIOB_CRL &=~(1<<13);
                  GPIOB_CRL |=(1<<15);
                  GPIOB_CRL &=~(1<<14);
                  break;
                  case 20:// PIN B4
                  GPIOB_CRL |=(1<<16);
                  GPIOB_CRL &=~(1<<17);
                  GPIOB_CRL |=(1<<19);
                  GPIOB_CRL &=~(1<<18);
                  break;
                  case 21:// PIN B5
                  GPIOB_CRL |=(1<<20);
                  GPIOB_CRL &=~(1<<21);
                  GPIOB_CRL |=(1<<23);
                  GPIOB_CRL &=~(1<<22);
                  break;
                  case 22:// PIN B6
                  GPIOB_CRL |=(1<<24);
                  GPIOB_CRL &=~(1<<25);
                  GPIOB_CRL |=(1<<27);
                  GPIOB_CRL &=~(1<<26);
                  break;
                  case 23:// PIN B7
                  GPIOB_CRL |=(1<<28);
                  GPIOB_CRL &=~(1<<29);
                  GPIOB_CRL |=(1<<31);
                  GPIOB_CRL &=~(1<<30);
                  break;
                  case 24:// PIN B8
                  GPIOB_CRH |=(1<<0);
                  GPIOB_CRH &=~(1<<1);
                  GPIOB_CRH |=(1<<3); 
                  GPIOB_CRH &=~(1<<2);
                  break;
                  case 25:// PIN B9
                  GPIOB_CRH |=(1<<4);
                  GPIOB_CRH &=~(1<<5);
                  GPIOB_CRH |=(1<<7);
                  GPIOB_CRH &=~(1<<6);
                  break;
                  case 26:// PIN B10
                  GPIOB_CRH |=(1<<8);
                  GPIOB_CRH &=~(1<<9);
                  GPIOB_CRH |=(1<<11);
                  GPIOB_CRH &=~(1<<10);
                  break;
                  case 27:// PIN B11
                  GPIOB_CRH |=(1<<12);
                  GPIOB_CRH &=~(1<<13);
                  GPIOB_CRH |=(1<<15);
                  GPIOB_CRH &=~(1<<14);
                  break;
                  case 28:// PIN B12
                  GPIOB_CRH |=(1<<16);
                  GPIOB_CRH &=~(1<<17);
                  GPIOB_CRH |=(1<<19);
                  GPIOB_CRH &=~(1<<18);
                  break;
                  case 29:// PIN B13
                  GPIOB_CRH |=(1<<20);
                  GPIOB_CRH &=~(1<<21);
                  GPIOB_CRH |=(1<<23);
                  GPIOB_CRH &=~(1<<22);
                  break;
                  case 30:// PIN B14
                  GPIOB_CRH |=(1<<24);
                  GPIOB_CRH &=~(1<<25);
                  GPIOB_CRH |=(1<<27);
                  GPIOB_CRH &=~(1<<26);
                  break;
                  case 31:// PIN B15
                  GPIOB_CRH |=(1<<28);
                  GPIOB_CRH &=~(1<<29);
                  GPIOB_CRH |=(1<<31);
                  GPIOB_CRH &=~(1<<30);
                  break;
                  case 32:// PIN C13
                  GPIOC_CRH |=(1<<20);
                  GPIOC_CRH &=~(1<<21);
                  GPIOC_CRH |=(1<<23);
                  GPIOC_CRH &=~(1<<22);
                  break;
                  case 33:// PIN C14
                  GPIOC_CRH |=(1<<24);
                  GPIOC_CRH &=~(1<<25);
                  GPIOC_CRH |=(1<<27);
                  GPIOC_CRH &=~(1<<26);
                  break;
                  case 34:// PIN C15
                  GPIOC_CRH |=(1<<28);
                  GPIOC_CRH &=~(1<<29);
                  GPIOC_CRH |=(1<<31);
                  GPIOC_CRH &=~(1<<30);
				  break;
				  }
				  break;
				case 3:// Alternate function output Open-drain  
				switch (Pin){
				  case 0:// PIN A0  
				  GPIOA_CRL |=(1<<0);  
				  GPIOA_CRL &=~(1<<1);  
				  GPIOA_CRL |=(1<<2);   
				  GPIOA_CRL |=(1<<3);  
				  break;  
				  case 1:// PIN A1  
				  GPIOA_CRL |=(1<<4);  
				  GPIOA_CRL &=~(1<<5);  
				  GPIOA_CRL |=(1<<6);  
				  GPIOA_CRL |=(1<<7);  
				  break;  
				  case 2:// PIN A2  
				  GPIOA_CRL |=(1<<8);  
				  GPIOA_CRL &=~(1<<9);  
				  GPIOA_CRL |=(1<<10);  
				  GPIOA_CRL |=(1<<11);  
				  break;  
				  case 3:// PIN A3  
				  GPIOA_CRL |=(1<<12);  
				  GPIOA_CRL &=~(1<<13);  
				  GPIOA_CRL |=(1<<14);  
				  GPIOA_CRL |=(1<<15);  
				  break;  
				  case 4:// PIN A4  
				  GPIOA_CRL |=(1<<16);  
				  GPIOA_CRL &=~(1<<17);  
				  GPIOA_CRL |=(1<<18);  
				  GPIOA_CRL |=(1<<19);  
				  break;  
				  case 5:// PIN A5  
				  GPIOA_CRL |=(1<<20);  
				  GPIOA_CRL &=~(1<<21);  
				  GPIOA_CRL |=(1<<22);  
				  GPIOA_CRL |=(1<<23);  
				  break;  
				  case 6:// PIN A6  
				  GPIOA_CRL |=(1<<24);  
				  GPIOA_CRL &=~(1<<25);  
				  GPIOA_CRL |=(1<<26);  
				  GPIOA_CRL |=(1<<27);  
				  break;  
				  case 7:// PIN A7  
				  GPIOA_CRL |=(1<<28);  
				  GPIOA_CRL &=~(1<<29);  
				  GPIOA_CRL |=(1<<30);  
				  GPIOA_CRL |=(1<<31);  
				  break;  
				  case 8:// PIN A8  
				  GPIOA_CRH |=(1<<0);  
				  GPIOA_CRH &=~(1<<1);  
				  GPIOA_CRH |=(1<<2);   
				  GPIOA_CRH |=(1<<3);  
				  break;  
				  case 9:// PIN A9  
				  GPIOA_CRH |=(1<<4);  
				  GPIOA_CRH &=~(1<<5);  
				  GPIOA_CRH |=(1<<6);  
				  GPIOA_CRH |=(1<<7);  
				  break;  
				  case 10:// PIN A10  
				  GPIOA_CRH |=(1<<8);  
				  GPIOA_CRH &=~(1<<9);  
				  GPIOA_CRH |=(1<<10);  
				  GPIOA_CRH |=(1<<11);  
				  break;  
				  case 11:// PIN A11  
				  GPIOA_CRH |=(1<<12);  
				  GPIOA_CRH &=~(1<<13);  
				  GPIOA_CRH |=(1<<14);  
				  GPIOA_CRH |=(1<<15);  
				  break;  
				  case 12:// PIN A12  
				  GPIOA_CRH |=(1<<16);  
				  GPIOA_CRH &=~(1<<17);  
				  GPIOA_CRH |=(1<<18);  
				  GPIOA_CRH |=(1<<19);  
				  break;  
				  case 13:// PIN A13  
				  GPIOA_CRH |=(1<<20);  
				  GPIOA_CRH &=~(1<<21);  
				  GPIOA_CRH |=(1<<22);  
				  GPIOA_CRH |=(1<<23);  
				  break;  
				  case 14:// PIN A14  
				  GPIOA_CRH |=(1<<24);  
				  GPIOA_CRH &=~(1<<25);  
				  GPIOA_CRH |=(1<<26);  
				  GPIOA_CRH |=(1<<27);  
				  break;  
				  case 15:// PIN A15  
				  GPIOA_CRH |=(1<<28);  
				  GPIOA_CRH &=~(1<<29);  
				  GPIOA_CRH |=(1<<30);  
				  GPIOA_CRH |=(1<<31);  
				  break;  
				  case 16:// PIN B0  
				  GPIOB_CRL |=(1<<0);  
				  GPIOB_CRL &=~(1<<1);  
				  GPIOB_CRL |=(1<<2);   
				  GPIOB_CRL |=(1<<3);  
				  break;  
				  case 17:// PIN B1  
				  GPIOB_CRL |=(1<<4);  
				  GPIOB_CRL &=~(1<<5);  
				  GPIOB_CRL |=(1<<6);  
				  GPIOB_CRL |=(1<<7);  
				  break;  
				  case 18:// PIN B2  
				  GPIOB_CRL |=(1<<8);  
				  GPIOB_CRL &=~(1<<9);  
				  GPIOB_CRL |=(1<<10);  
				  GPIOB_CRL |=(1<<11);  
				  break;  
				  case 19:// PIN B3  
				  GPIOB_CRL |=(1<<12);  
				  GPIOB_CRL &=~(1<<13);  
				  GPIOB_CRL |=(1<<14);  
				  GPIOB_CRL |=(1<<15);  
				  break;  
				  case 20:// PIN B4  
				  GPIOB_CRL |=(1<<16);  
				  GPIOB_CRL &=~(1<<17);  
				  GPIOB_CRL |=(1<<18);  
				  GPIOB_CRL |=(1<<19);  
				  break;  
				  case 21:// PIN B5  
				  GPIOB_CRL |=(1<<20);  
				  GPIOB_CRL &=~(1<<21);  
				  GPIOB_CRL |=(1<<22);  
				  GPIOB_CRL |=(1<<23);  
				  break;  
				  case 22:// PIN B6  
				  GPIOB_CRL |=(1<<24);  
				  GPIOB_CRL &=~(1<<25);  
				  GPIOB_CRL |=(1<<26);  
				  GPIOB_CRL |=(1<<27);  
				  break;  
				  case 23:// PIN B7  
				  GPIOB_CRL |=(1<<28);  
				  GPIOB_CRL &=~(1<<29);  
				  GPIOB_CRL |=(1<<30);  
				  GPIOB_CRL |=(1<<31);  
				  break;  
				  case 24:// PIN B8  
				  GPIOB_CRH |=(1<<0);  
				  GPIOB_CRH &=~(1<<1);  
				  GPIOB_CRH |=(1<<2);   
				  GPIOB_CRH |=(1<<3);  
				  break;  
				  case 25:// PIN B9  
				  GPIOB_CRH |=(1<<4);  
				  GPIOB_CRH &=~(1<<5);  
				  GPIOB_CRH |=(1<<6);  
				  GPIOB_CRH |=(1<<7);  
				  break;  
				  case 26:// PIN B10  
				  GPIOB_CRH |=(1<<8);  
				  GPIOB_CRH &=~(1<<9);  
				  GPIOB_CRH |=(1<<10);  
				  GPIOB_CRH |=(1<<11);  
				  break;  
				  case 27:// PIN B11  
				  GPIOB_CRH |=(1<<12);  
				  GPIOB_CRH &=~(1<<13);  
				  GPIOB_CRH |=(1<<14);  
				  GPIOB_CRH |=(1<<15);  
				  break;  
				  case 28:// PIN B12  
				  GPIOB_CRH |=(1<<16);  
				  GPIOB_CRH &=~(1<<17);  
				  GPIOB_CRH |=(1<<18);  
				  GPIOB_CRH |=(1<<19);  
				  break;  
				  case 29:// PIN B13  
				  GPIOB_CRH |=(1<<20);  
				  GPIOB_CRH &=~(1<<21);  
				  GPIOB_CRH |=(1<<22);  
				  GPIOB_CRH |=(1<<23);  
				  break;  
				  case 30:// PIN B14  
				  GPIOB_CRH |=(1<<24);  
				  GPIOB_CRH &=~(1<<25);  
				  GPIOB_CRH |=(1<<26);  
				  GPIOB_CRH |=(1<<27);  
				  break;  
				  case 31:// PIN B15  
				  GPIOB_CRH |=(1<<28);  
				  GPIOB_CRH &=~(1<<29);  
				  GPIOB_CRH |=(1<<30);  
				  GPIOB_CRH |=(1<<31);  
				  break;  
				  case 32:// PIN C13  
				  GPIOC_CRH |=(1<<20);  
				  GPIOC_CRH &=~(1<<21);  
				  GPIOC_CRH |=(1<<22);  
				  GPIOC_CRH |=(1<<23);  
				  break;  
				  case 33:// PIN C14  
				  GPIOC_CRH |=(1<<24);  
				  GPIOC_CRH &=~(1<<25);  
				  GPIOC_CRH |=(1<<26);  
				  GPIOC_CRH |=(1<<27);  
				  break;  
				  case 34:// PIN C15  
				  GPIOC_CRH |=(1<<28);  
				  GPIOC_CRH &=~(1<<29);  
				  GPIOC_CRH |=(1<<30);  
				  GPIOC_CRH |=(1<<31);  
				  break;  
				}
				break;
				
				  
				  }
				 break;
			
		case 2://Output mode, max speed 2 MHz	
		      switch(Input_Output_mode){	
				  case 0://General purpose output push-pull	
				  switch(Pin){	
				   case 0:// PIN A0	
				   GPIOA_CRL |=(1<<1);	
				   GPIOA_CRL &=~(1<<0);	
				   GPIOA_CRL &=~(1<<2); 	
				   GPIOA_CRL &=~(1<<3);	
				   break;	
				   case 1:// PIN A1	
				   GPIOA_CRL |=(1<<5);	
				   GPIOA_CRL &=~(1<<4);	
				   GPIOA_CRL &=~(1<<6);	
				   GPIOA_CRL &=~(1<<7);	
				   break;	
				   case 2:// PIN A2	
				   GPIOA_CRL |=(1<<9);	
				   GPIOA_CRL &=~(1<<8);	
				   GPIOA_CRL &=~(1<<10);	
				   GPIOA_CRL &=~(1<<11);	
				   break;	
				   case 3:// PIN A3	
				   GPIOA_CRL |=(1<<13);	
				   GPIOA_CRL &=~(1<<12);	
				   GPIOA_CRL &=~(1<<14);	
				   GPIOA_CRL &=~(1<<15);	
				   break;	
				   case 4:// PIN A4	
				   GPIOA_CRL |=(1<<17);	
				   GPIOA_CRL &=~(1<<16);	
				   GPIOA_CRL &=~(1<<18); 	
				   GPIOA_CRL &=~(1<<19);	
				   break;	
				   case 5:// PIN A5	
				   GPIOA_CRL |=(1<<21);	
				   GPIOA_CRL &=~(1<<20);	
				   GPIOA_CRL &=~(1<<22);	
				   GPIOA_CRL &=~(1<<23);	
				   break;	
				   case 6:// PIN A6	
				   GPIOA_CRL |=(1<<25);	
				   GPIOA_CRL &=~(1<<24);	
				   GPIOA_CRL &=~(1<<26);	
				   GPIOA_CRL &=~(1<<27);	
				   break;	
				   case 7:// PIN A7	
				   GPIOA_CRL |=(1<<29);	
				   GPIOA_CRL &=~(1<<28);	
				   GPIOA_CRL &=~(1<<30);	
				   GPIOA_CRL &=~(1<<31);	
				   break;	
				   case 8:// PIN A8	
				   GPIOA_CRH |=(1<<1);	
				   GPIOA_CRH &=~(1<<0);	
				   GPIOA_CRH &=~(1<<2); 	
				   GPIOA_CRH &=~(1<<3);	
				   break;	
				   case 9:// PIN A9	
				   GPIOA_CRH |=(1<<5);	
				   GPIOA_CRH &=~(1<<4);	
				   GPIOA_CRH &=~(1<<6);	
				   GPIOA_CRH &=~(1<<7);	
				   break;	
				   case 10:// PIN A10	
				   GPIOA_CRH |=(1<<9);	
				   GPIOA_CRH &=~(1<<8);	
				   GPIOA_CRH &=~(1<<10);	
				   GPIOA_CRH &=~(1<<11);	
				   break;	
				   case 11:// PIN A11	
				   GPIOA_CRH |=(1<<13);	
				   GPIOA_CRH &=~(1<<12);	
				   GPIOA_CRH &=~(1<<14);	
				   GPIOA_CRH &=~(1<<15);	
				   break;	
				   case 12:// PIN A12	
				   GPIOA_CRH |=(1<<17);	
				   GPIOA_CRH &=~(1<<16);	
				   GPIOA_CRH &=~(1<<18); 	
				   GPIOA_CRH &=~(1<<19);	
				   break;	
				   case 13:// PIN A13	
				   GPIOA_CRH |=(1<<21);	
				   GPIOA_CRH &=~(1<<20);	
				   GPIOA_CRH &=~(1<<22);	
				   GPIOA_CRH &=~(1<<23);	
				   break;	
				   case 14:// PIN A14	
				   GPIOA_CRH |=(1<<25);	
				   GPIOA_CRH &=~(1<<24);	
				   GPIOA_CRH &=~(1<<26);	
				   GPIOA_CRH &=~(1<<27);	
				   break;	
				   case 15:// PIN A15	
				   GPIOA_CRH |=(1<<29);	
				   GPIOA_CRH &=~(1<<28);	
				   GPIOA_CRH &=~(1<<30);	
				   GPIOA_CRH &=~(1<<31);	
				   break;	
				   case 16:// PIN B0	
				   GPIOB_CRL |=(1<<1);	
				   GPIOB_CRL &=~(1<<0);	
				   GPIOB_CRL &=~(1<<2); 	
				   GPIOB_CRL &=~(1<<3);	
				   break;	
				   case 17:// PIN B1	
				   GPIOB_CRL |=(1<<5);	
				   GPIOB_CRL &=~(1<<4);	
				   GPIOB_CRL &=~(1<<6);	
				   GPIOB_CRL &=~(1<<7);	
				   break;	
				   case 18:// PIN B2	
				   GPIOB_CRL |=(1<<9);	
				   GPIOB_CRL &=~(1<<8);	
				   GPIOB_CRL &=~(1<<10);	
				   GPIOB_CRL &=~(1<<11);	
				   break;	
				   case 19:// PIN B3	
				   GPIOB_CRL |=(1<<13);	
				   GPIOB_CRL &=~(1<<12);	
				   GPIOB_CRL &=~(1<<14);	
				   GPIOB_CRL &=~(1<<15);	
				   break;	
				   case 20:// PIN B4	
				   GPIOB_CRL |=(1<<17);	
				   GPIOB_CRL &=~(1<<16);	
				   GPIOB_CRL &=~(1<<18);	
				   GPIOB_CRL &=~(1<<19);	
				   break;	
				   case 21:// PIN B5	
				   GPIOB_CRL |=(1<<21);	
				   GPIOB_CRL &=~(1<<20);	
				   GPIOB_CRL &=~(1<<22);	
				   GPIOB_CRL &=~(1<<23);	
				   break;	
				   case 22:// PIN B6	
				   GPIOB_CRL |=(1<<25);	
				   GPIOB_CRL &=~(1<<24);	
				   GPIOB_CRL &=~(1<<26);	
				   GPIOB_CRL &=~(1<<27);	
				   break;	
				   case 23:// PIN B7	
				   GPIOB_CRL |=(1<<29);	
				   GPIOB_CRL &=~(1<<28);	
				   GPIOB_CRL &=~(1<<30);	
				   GPIOB_CRL &=~(1<<31);	
				   break;	
				   case 24:// PIN B8	
				   GPIOB_CRH |=(1<<1);	
				   GPIOB_CRH &=~(1<<0);	
				   GPIOB_CRH &=~(1<<2); 	
				   GPIOB_CRH &=~(1<<3);	
				   break;	
				   case 25:// PIN B9	
				   GPIOB_CRH |=(1<<5);	
				   GPIOB_CRH &=~(1<<4);	
				   GPIOB_CRH &=~(1<<6);	
				   GPIOB_CRH &=~(1<<7);	
				   break;	
				   case 26:// PIN B10	
				   GPIOB_CRH |=(1<<9);	
				   GPIOB_CRH &=~(1<<8);	
				   GPIOB_CRH &=~(1<<10);	
				   GPIOB_CRH &=~(1<<11);	
				   break;	
				   case 27:// PIN B11	
				   GPIOB_CRH |=(1<<13);	
				   GPIOB_CRH &=~(1<<12);	
				   GPIOB_CRH &=~(1<<14);	
				   GPIOB_CRH &=~(1<<15);	
				   break;	
				   case 28:// PIN B12	
				   GPIOB_CRH |=(1<<17);	
				   GPIOB_CRH &=~(1<<16);	
				   GPIOB_CRH &=~(1<<18);	
				   GPIOB_CRH &=~(1<<19);	
				   break;	
				   case 29:// PIN B13	
				   GPIOB_CRH |=(1<<21);	
				   GPIOB_CRH &=~(1<<20);	
				   GPIOB_CRH &=~(1<<22);	
				   GPIOB_CRH &=~(1<<23);	
				   break;	
				   case 30:// PIN B14	
				   GPIOB_CRH |=(1<<25);	
				   GPIOB_CRH &=~(1<<24);	
				   GPIOB_CRH &=~(1<<26);	
				   GPIOB_CRH &=~(1<<27);	
				   break;	
				   case 31:// PIN B15	
				   GPIOB_CRH |=(1<<29);	
				   GPIOB_CRH &=~(1<<28);	
				   GPIOB_CRH &=~(1<<30);	
				   GPIOB_CRH &=~(1<<31);	
				   break;	
				   case 32:// PIN C13	
				   GPIOC_CRH |=(1<<21);	
				   GPIOC_CRH &=~(1<<20);	
				   GPIOC_CRH &=~(1<<22);	
				   GPIOC_CRH &=~(1<<23);	
				   break;	
				   case 33:// PIN C14	
				   GPIOC_CRH |=(1<<25);	
				   GPIOC_CRH &=~(1<<24);	
				   GPIOC_CRH &=~(1<<26);	
				   GPIOC_CRH &=~(1<<27);	
				   break;	
				   case 34:// PIN C15	
				   GPIOC_CRH |=(1<<29);	
				   GPIOC_CRH &=~(1<<28);	
				   GPIOC_CRH &=~(1<<30);	
				   GPIOC_CRH &=~(1<<31);	
				   break;	
				     }	
					 break;	
				case 1:// General purpose output Open-drain  	
				switch (Pin){
				  case 0:// PIN A0  	
				  GPIOA_CRL |=(1<<1);  	
				  GPIOA_CRL &=~(1<<0);  	
				  GPIOA_CRL |=(1<<2);   	
				  GPIOA_CRL &=~(1<<3);  	
				  break;  	
				  case 1:// PIN A1  	
				  GPIOA_CRL |=(1<<5);  	
				  GPIOA_CRL &=~(1<<4);  	
				  GPIOA_CRL |=(1<<6);  	
				  GPIOA_CRL &=~(1<<7);  	
				  break;  	
				  case 2:// PIN A2  	
				  GPIOA_CRL |=(1<<9);  	
				  GPIOA_CRL &=~(1<<8);  	
				  GPIOA_CRL |=(1<<10);  	
				  GPIOA_CRL &=~(1<<11);  	
				  break;  	
				  case 3:// PIN A3  	
				  GPIOA_CRL |=(1<<13);  	
				  GPIOA_CRL &=~(1<<12);  	
				  GPIOA_CRL |=(1<<14);  	
				  GPIOA_CRL &=~(1<<15);  	
				  break;  	
				  case 4:// PIN A4  	
				  GPIOA_CRL |=(1<<17);  	
				  GPIOA_CRL &=~(1<<16);  	
				  GPIOA_CRL |=(1<<18);  	
				  GPIOA_CRL &=~(1<<19);  	
				  break;  	
				  case 5:// PIN A5  	
				  GPIOA_CRL |=(1<<21);  	
				  GPIOA_CRL &=~(1<<20);  	
				  GPIOA_CRL |=(1<<22);  	
				  GPIOA_CRL &=~(1<<23);  	
				  break;  	
				  case 6:// PIN A6  	
				  GPIOA_CRL |=(1<<25);  	
				  GPIOA_CRL &=~(1<<24);  	
				  GPIOA_CRL |=(1<<26);  	
				  GPIOA_CRL &=~(1<<27);  	
				  break;  	
				  case 7:// PIN A7  	
				  GPIOA_CRL |=(1<<29);  	
				  GPIOA_CRL &=~(1<<28);  	
				  GPIOA_CRL |=(1<<30);  	
				  GPIOA_CRL &=~(1<<31);  	
				  break;  	
				  case 8:// PIN A8  	
				  GPIOA_CRH |=(1<<1);  	
				  GPIOA_CRH &=~(1<<0);  	
				  GPIOA_CRH |=(1<<2);   	
				  GPIOA_CRH &=~(1<<3);  	
				  break;  	
				  case 9:// PIN A9  	
				  GPIOA_CRH |=(1<<5);  	
				  GPIOA_CRH &=~(1<<4);  	
				  GPIOA_CRH |=(1<<6);  	
				  GPIOA_CRH &=~(1<<7);  	
				  break;  	
				  case 10:// PIN A10  	
				  GPIOA_CRH |=(1<<9);  	
				  GPIOA_CRH &=~(1<<8);  	
				  GPIOA_CRH |=(1<<10);  	
				  GPIOA_CRH &=~(1<<11);  	
				  break;  	
				  case 11:// PIN A11  	
				  GPIOA_CRH |=(1<<13);  	
				  GPIOA_CRH &=~(1<<12);  	
				  GPIOA_CRH |=(1<<14);  	
				  GPIOA_CRH &=~(1<<15);  	
				  break;  	
				  case 12:// PIN A12  	
				  GPIOA_CRH |=(1<<17);  	
				  GPIOA_CRH &=~(1<<16);  	
				  GPIOA_CRH |=(1<<18);  	
				  GPIOA_CRH &=~(1<<19);  	
				  break;  	
				  case 13:// PIN A13  	
				  GPIOA_CRH |=(1<<21);  	
				  GPIOA_CRH &=~(1<<20);  	
				  GPIOA_CRH |=(1<<22);  	
				  GPIOA_CRH &=~(1<<23);  	
				  break;  	
				  case 14:// PIN A14  	
				  GPIOA_CRH |=(1<<25);  	
				  GPIOA_CRH &=~(1<<24);  	
				  GPIOA_CRH |=(1<<26);  	
				  GPIOA_CRH &=~(1<<27);  	
				  break;  	
				  case 15:// PIN A15  	
				  GPIOA_CRH |=(1<<29);  	
				  GPIOA_CRH &=~(1<<28);  	
				  GPIOA_CRH |=(1<<30);  	
				  GPIOA_CRH &=~(1<<31);  	
				  break;  	
				  case 16:// PIN B0  	
				  GPIOB_CRL |=(1<<1);  	
				  GPIOB_CRL &=~(1<<0);  	
				  GPIOB_CRL |=(1<<2);   	
				  GPIOB_CRL &=~(1<<3);  	
				  break;  	
				  case 17:// PIN B1  	
				  GPIOB_CRL |=(1<<5);  	
				  GPIOB_CRL &=~(1<<4);  	
				  GPIOB_CRL |=(1<<6);  	
				  GPIOB_CRL &=~(1<<7);  	
				  break;  	
				  case 18:// PIN B2  	
				  GPIOB_CRL |=(1<<9);  	
				  GPIOB_CRL &=~(1<<8);  	
				  GPIOB_CRL |=(1<<10);  	
				  GPIOB_CRL &=~(1<<11);  	
				  break;  	
				  case 19:// PIN B3  	
				  GPIOB_CRL |=(1<<13);  	
				  GPIOB_CRL &=~(1<<12);  	
				  GPIOB_CRL |=(1<<14);  	
				  GPIOB_CRL &=~(1<<15);  	
				  break;  	
				  case 20:// PIN B4  	
				  GPIOB_CRL |=(1<<17);  	
				  GPIOB_CRL &=~(1<<16);  	
				  GPIOB_CRL |=(1<<18);  	
				  GPIOB_CRL &=~(1<<19);  	
				  break;  	
				  case 21:// PIN B5  	
				  GPIOB_CRL |=(1<<21);  	
				  GPIOB_CRL &=~(1<<20);  	
				  GPIOB_CRL |=(1<<22);  	
				  GPIOB_CRL &=~(1<<23);  	
				  break;  	
				  case 22:// PIN B6  	
				  GPIOB_CRL |=(1<<25);  	
				  GPIOB_CRL &=~(1<<24);  	
				  GPIOB_CRL |=(1<<26);  	
				  GPIOB_CRL &=~(1<<27);  	
				  break;  	
				  case 23:// PIN B7  	
				  GPIOB_CRL |=(1<<29);  	
				  GPIOB_CRL &=~(1<<28);  	
				  GPIOB_CRL |=(1<<30);  	
				  GPIOB_CRL &=~(1<<31);  	
				  break;  	
				  case 24:// PIN B8  	
				  GPIOB_CRH |=(1<<1);  	
				  GPIOB_CRH &=~(1<<0);  	
				  GPIOB_CRH |=(1<<2);   	
				  GPIOB_CRH &=~(1<<3);  	
				  break;  	
				  case 25:// PIN B9  	
				  GPIOB_CRH |=(1<<5);  	
				  GPIOB_CRH &=~(1<<4);  	
				  GPIOB_CRH |=(1<<6);  	
				  GPIOB_CRH &=~(1<<7);  	
				  break;  	
				  case 26:// PIN B10  	
				  GPIOB_CRH |=(1<<9);  	
				  GPIOB_CRH &=~(1<<8);  	
				  GPIOB_CRH |=(1<<10);  	
				  GPIOB_CRH &=~(1<<11);  	
				  break;  	
				  case 27:// PIN B11  	
				  GPIOB_CRH |=(1<<13);  	
				  GPIOB_CRH &=~(1<<12);  	
				  GPIOB_CRH |=(1<<14);  	
				  GPIOB_CRH &=~(1<<15);  	
				  break;  	
				  case 28:// PIN B12  	
				  GPIOB_CRH |=(1<<17);  	
				  GPIOB_CRH &=~(1<<16);  	
				  GPIOB_CRH |=(1<<18);  	
				  GPIOB_CRH &=~(1<<19);  	
				  break;  	
				  case 29:// PIN B13  	
				  GPIOB_CRH |=(1<<21);  	
				  GPIOB_CRH &=~(1<<20);  	
				  GPIOB_CRH |=(1<<22);  	
				  GPIOB_CRH &=~(1<<23);  	
				  break;  	
				  case 30:// PIN B14  	
				  GPIOB_CRH |=(1<<25);  	
				  GPIOB_CRH &=~(1<<24);  	
				  GPIOB_CRH |=(1<<26);  	
				  GPIOB_CRH &=~(1<<27);  	
				  break;  	
				  case 31:// PIN B15  	
				  GPIOB_CRH |=(1<<29);  	
				  GPIOB_CRH &=~(1<<28);  	
				  GPIOB_CRH |=(1<<30);  	
				  GPIOB_CRH &=~(1<<31);  	
				  break;  	
				  case 32:// PIN C13  	
				  GPIOC_CRH |=(1<<21);  	
				  GPIOC_CRH &=~(1<<20);  	
				  GPIOC_CRH |=(1<<22);  	
				  GPIOC_CRH &=~(1<<23);  	
				  break;  	
				  case 33:// PIN C14  	
				  GPIOC_CRH |=(1<<25);  	
				  GPIOC_CRH &=~(1<<24);  	
				  GPIOC_CRH |=(1<<26);  	
				  GPIOC_CRH &=~(1<<27);  	
				  break;  	
				  case 34:// PIN C15  	
				  GPIOC_CRH |=(1<<29);  	
				  GPIOC_CRH &=~(1<<28);  	
				  GPIOC_CRH |=(1<<30);  	
				  GPIOC_CRH &=~(1<<31);  	
				  break;  	
				}	
				break;	
				case 2:// Alternate function output Push-pull	
				switch (Pin){
				  case 0:// PIN A0	
				  GPIOA_CRL |=(1<<1);	
		          GPIOA_CRL &=~(1<<0);	
		          GPIOA_CRL |=(1<<3); 	
		          GPIOA_CRL &=~(1<<2);	
		          break;	
		          case 1:// PIN A1	
		          GPIOA_CRL |=(1<<5);	
		          GPIOA_CRL &=~(1<<4);	
		          GPIOA_CRL |=(1<<7);	
		          GPIOA_CRL &=~(1<<6);	
		          break;	
		          case 2:// PIN A2	
		          GPIOA_CRL |=(1<<9);	
		          GPIOA_CRL &=~(1<<8);	
		          GPIOA_CRL |=(1<<11);	
		          GPIOA_CRL &=~(1<<10);	
		          break;	
		          case 3:// PIN A3	
		          GPIOA_CRL |=(1<<13);	
		          GPIOA_CRL &=~(1<<12);	
		          GPIOA_CRL |=(1<<15);	
		          GPIOA_CRL &=~(1<<14);	
		          break;	
		          case 4:// PIN A4	
		          GPIOA_CRL |=(1<<17);	
		          GPIOA_CRL &=~(1<<16);	
		          GPIOA_CRL |=(1<<19);	
		          GPIOA_CRL &=~(1<<18);	
		          break;	
		          case 5:// PIN A5	
		          GPIOA_CRL |=(1<<21);	
		          GPIOA_CRL &=~(1<<20);	
		          GPIOA_CRL |=(1<<23);	
		          GPIOA_CRL &=~(1<<22);	
		          break;	
		          case 6:// PIN A6	
		          GPIOA_CRL |=(1<<25);	
		          GPIOA_CRL &=~(1<<24);	
		          GPIOA_CRL |=(1<<27);	
		          GPIOA_CRL &=~(1<<28);	
		          break;	
		          case 7:// PIN A7	
		          GPIOA_CRL |=(1<<29);	
		          GPIOA_CRL &=~(1<<28);	
		          GPIOA_CRL |=(1<<31);	
		          GPIOA_CRL &=~(1<<30);	
		          break;	
		          case 8:// PIN A8	
		          GPIOA_CRH |=(1<<1);	
		          GPIOA_CRH &=~(1<<0);	
		          GPIOA_CRH |=(1<<3); 	
		          GPIOA_CRH &=~(1<<2);	
		          break;	
		          case 9:// PIN A9	
		          GPIOA_CRH |=(1<<5);	
		          GPIOA_CRH &=~(1<<4);	
		          GPIOA_CRH |=(1<<7);	
		          GPIOA_CRH &=~(1<<6);	
		          break;	
		          case 10:// PIN A10	
		          GPIOA_CRH |=(1<<9);	
		          GPIOA_CRH &=~(1<<8);	
		          GPIOA_CRH |=(1<<11);	
		          GPIOA_CRH &=~(1<<10);	
		          break;	
		          case 11:// PIN A11	
		          GPIOA_CRH |=(1<<13);	
		          GPIOA_CRH &=~(1<<12);	
		          GPIOA_CRH |=(1<<15);	
		          GPIOA_CRH &=~(1<<14);	
		          break;	
		          case 12:// PIN A12	
		          GPIOA_CRH |=(1<<17);	
		          GPIOA_CRH &=~(1<<16);	
		          GPIOA_CRH |=(1<<19);	
		          GPIOA_CRH &=~(1<<18);	
		          break;	
		          case 13:// PIN A13	
		          GPIOA_CRH |=(1<<21);	
		          GPIOA_CRH &=~(1<<20);	
		          GPIOA_CRH |=(1<<23);	
		          GPIOA_CRH &=~(1<<22);	
		          break;	
		          case 14:// PIN A14	
		          GPIOA_CRH |=(1<<25);	
		          GPIOA_CRH &=~(1<<24);	
		          GPIOA_CRH |=(1<<27);	
		          GPIOA_CRH &=~(1<<26);	
		          break;	
		          case 15:// PIN A15	
		          GPIOA_CRH |=(1<<29);	
		          GPIOA_CRH &=~(1<<28);	
		          GPIOA_CRH |=(1<<31);	
		          GPIOA_CRH &=~(1<<30);	
		          break;	
		          case 16:// PIN B0	
		          GPIOB_CRL |=(1<<1);	
		          GPIOB_CRL &=~(1<<0);	
		          GPIOB_CRL |=(1<<3); 	
		          GPIOB_CRL &=~(1<<2);	
		          break;	
		          case 17:// PIN B1	
		          GPIOB_CRL |=(1<<5);	
		          GPIOB_CRL &=~(1<<4);	
		          GPIOB_CRL |=(1<<7);	
		          GPIOB_CRL &=~(1<<6);	
		          break;	
		          case 18:// PIN B2	
		          GPIOB_CRL |=(1<<9);	
		          GPIOB_CRL &=~(1<<8);	
		          GPIOB_CRL |=(1<<11);	
		          GPIOB_CRL &=~(1<<10);	
		          break;	
		          case 19:// PIN B3	
		          GPIOB_CRL |=(1<<13);	
		          GPIOB_CRL &=~(1<<12);	
		          GPIOB_CRL |=(1<<15);	
		          GPIOB_CRL &=~(1<<14);	
		          break;	
		          case 20:// PIN B4	
		          GPIOB_CRL |=(1<<17);	
		          GPIOB_CRL &=~(1<<16);	
		          GPIOB_CRL |=(1<<19);	
		          GPIOB_CRL &=~(1<<18);	
		          break;	
		          case 21:// PIN B5	
		          GPIOB_CRL |=(1<<21);	
		          GPIOB_CRL &=~(1<<20);	
		          GPIOB_CRL |=(1<<23);	
		          GPIOB_CRL &=~(1<<22);	
		          break;	
		          case 22:// PIN B6	
		          GPIOB_CRL |=(1<<25);	
		          GPIOB_CRL &=~(1<<24);	
		          GPIOB_CRL |=(1<<27);	
		          GPIOB_CRL &=~(1<<26);	
		          break;	
		          case 23:// PIN B7	
		          GPIOB_CRL |=(1<<29);	
		          GPIOB_CRL &=~(1<<28);	
		          GPIOB_CRL |=(1<<31);	
		          GPIOB_CRL &=~(1<<30);	
		          break;	
		          case 24:// PIN B8	
		          GPIOB_CRH |=(1<<1);	
		          GPIOB_CRH &=~(1<<0);	
		          GPIOB_CRH |=(1<<3); 	
		          GPIOB_CRH &=~(1<<2);	
		          break;	
		          case 25:// PIN B9	
		          GPIOB_CRH |=(1<<5);	
		          GPIOB_CRH &=~(1<<4);	
		          GPIOB_CRH |=(1<<7);	
		          GPIOB_CRH &=~(1<<6);	
		          break;	
		          case 26:// PIN B10	
		          GPIOB_CRH |=(1<<9);	
		          GPIOB_CRH &=~(1<<8);	
		          GPIOB_CRH |=(1<<11);	
		          GPIOB_CRH &=~(1<<10);	
		          break;	
		          case 27:// PIN B11	
		          GPIOB_CRH |=(1<<13);	
		          GPIOB_CRH &=~(1<<12);	
		          GPIOB_CRH |=(1<<15);	
		          GPIOB_CRH &=~(1<<14);	
		          break;	
		          case 28:// PIN B12	
		          GPIOB_CRH |=(1<<17);	
		          GPIOB_CRH &=~(1<<16);	
		          GPIOB_CRH |=(1<<19);	
		          GPIOB_CRH &=~(1<<18);	
		          break;	
		          case 29:// PIN B13	
		          GPIOB_CRH |=(1<<21);	
		          GPIOB_CRH &=~(1<<20);	
		          GPIOB_CRH |=(1<<23);	
		          GPIOB_CRH &=~(1<<22);	
		          break;	
		          case 30:// PIN B14	
		          GPIOB_CRH |=(1<<25);	
		          GPIOB_CRH &=~(1<<24);	
		          GPIOB_CRH |=(1<<27);	
		          GPIOB_CRH &=~(1<<26);	
		          break;	
		          case 31:// PIN B15	
		          GPIOB_CRH |=(1<<29);	
		          GPIOB_CRH &=~(1<<28);	
		          GPIOB_CRH |=(1<<31);	
		          GPIOB_CRH &=~(1<<30);	
		          break;	
		          case 32:// PIN C13	
		          GPIOC_CRH |=(1<<21);	
		          GPIOC_CRH &=~(1<<20);	
		          GPIOC_CRH |=(1<<23);	
		          GPIOC_CRH &=~(1<<22);	
		          break;	
		          case 33:// PIN C14	
		          GPIOC_CRH |=(1<<25);	
		          GPIOC_CRH &=~(1<<24);	
		          GPIOC_CRH |=(1<<27);	
		          GPIOC_CRH &=~(1<<26);	
		          break;	
		          case 34:// PIN C15	
		          GPIOC_CRH |=(1<<29);	
		          GPIOC_CRH &=~(1<<28);	
		          GPIOC_CRH |=(1<<31);	
		          GPIOC_CRH &=~(1<<30);	
				  break;	
				  }	
				  break;	
				case 3:// Alternate function output Open-drain  	
				switch (Pin){
				  case 0:// PIN A0  	
				  GPIOA_CRL |=(1<<1);  	
				  GPIOA_CRL &=~(1<<0);  	
				  GPIOA_CRL |=(1<<2);   	
				  GPIOA_CRL |=(1<<3);  	
				  break;  	
				  case 1:// PIN A1  	
				  GPIOA_CRL |=(1<<5);  	
				  GPIOA_CRL &=~(1<<4);  	
				  GPIOA_CRL |=(1<<6);  	
				  GPIOA_CRL |=(1<<7);  	
				  break;  	
				  case 2:// PIN A2  	
				  GPIOA_CRL |=(1<<9);  	
				  GPIOA_CRL &=~(1<<8);  	
				  GPIOA_CRL |=(1<<10);  	
				  GPIOA_CRL |=(1<<11);  	
				  break;  	
				  case 3:// PIN A3  	
				  GPIOA_CRL |=(1<<13);  	
				  GPIOA_CRL &=~(1<<12);  	
				  GPIOA_CRL |=(1<<14);  	
				  GPIOA_CRL |=(1<<15);  	
				  break;  	
				  case 4:// PIN A4  	
				  GPIOA_CRL |=(1<<17);  	
				  GPIOA_CRL &=~(1<<16);  	
				  GPIOA_CRL |=(1<<18);  	
				  GPIOA_CRL |=(1<<19);  	
				  break;  	
				  case 5:// PIN A5  	
				  GPIOA_CRL |=(1<<21);  	
				  GPIOA_CRL &=~(1<<20);  	
				  GPIOA_CRL |=(1<<22);  	
				  GPIOA_CRL |=(1<<23);  	
				  break;  	
				  case 6:// PIN A6  	
				  GPIOA_CRL |=(1<<25);  	
				  GPIOA_CRL &=~(1<<24);  	
				  GPIOA_CRL |=(1<<26);  	
				  GPIOA_CRL |=(1<<27);  	
				  break;  	
				  case 7:// PIN A7  	
				  GPIOA_CRL |=(1<<29);  	
				  GPIOA_CRL &=~(1<<28);  	
				  GPIOA_CRL |=(1<<30);  	
				  GPIOA_CRL |=(1<<31);  	
				  break;  	
				  case 8:// PIN A8  	
				  GPIOA_CRH |=(1<<1);  	
				  GPIOA_CRH &=~(1<<0);  	
				  GPIOA_CRH |=(1<<2);   	
				  GPIOA_CRH |=(1<<3);  	
				  break;  	
				  case 9:// PIN A9  	
				  GPIOA_CRH |=(1<<5);  	
				  GPIOA_CRH &=~(1<<4);  	
				  GPIOA_CRH |=(1<<6);  	
				  GPIOA_CRH |=(1<<7);  	
				  break;  	
				  case 10:// PIN A10  	
				  GPIOA_CRH |=(1<<9);  	
				  GPIOA_CRH &=~(1<<8);  	
				  GPIOA_CRH |=(1<<10);  	
				  GPIOA_CRH |=(1<<11);  	
				  break;  	
				  case 11:// PIN A11  	
				  GPIOA_CRH |=(1<<13);  	
				  GPIOA_CRH &=~(1<<12);  	
				  GPIOA_CRH |=(1<<14);  	
				  GPIOA_CRH |=(1<<15);  	
				  break;  	
				  case 12:// PIN A12  	
				  GPIOA_CRH |=(1<<17);  	
				  GPIOA_CRH &=~(1<<16);  	
				  GPIOA_CRH |=(1<<18);  	
				  GPIOA_CRH |=(1<<19);  	
				  break;  	
				  case 13:// PIN A13  	
				  GPIOA_CRH |=(1<<21);  	
				  GPIOA_CRH &=~(1<<20);  	
				  GPIOA_CRH |=(1<<22);  	
				  GPIOA_CRH |=(1<<23);  	
				  break;  	
				  case 14:// PIN A14  	
				  GPIOA_CRH |=(1<<25);  	
				  GPIOA_CRH &=~(1<<24);  	
				  GPIOA_CRH |=(1<<26);  	
				  GPIOA_CRH |=(1<<27);  	
				  break;  	
				  case 15:// PIN A15  	
				  GPIOA_CRH |=(1<<29);  	
				  GPIOA_CRH &=~(1<<28);  	
				  GPIOA_CRH |=(1<<30);  	
				  GPIOA_CRH |=(1<<31);  	
				  break;  	
				  case 16:// PIN B0  	
				  GPIOB_CRL |=(1<<1);  	
				  GPIOB_CRL &=~(1<<0);  	
				  GPIOB_CRL |=(1<<2);   	
				  GPIOB_CRL |=(1<<3);  	
				  break;  	
				  case 17:// PIN B1  	
				  GPIOB_CRL |=(1<<5);  	
				  GPIOB_CRL &=~(1<<4);  	
				  GPIOB_CRL |=(1<<6);  	
				  GPIOB_CRL |=(1<<7);  	
				  break;  	
				  case 18:// PIN B2  	
				  GPIOB_CRL |=(1<<9);  	
				  GPIOB_CRL &=~(1<<8);  	
				  GPIOB_CRL |=(1<<10);  	
				  GPIOB_CRL |=(1<<11);  	
				  break;  	
				  case 19:// PIN B3  	
				  GPIOB_CRL |=(1<<13);  	
				  GPIOB_CRL &=~(1<<12);  	
				  GPIOB_CRL |=(1<<14);  	
				  GPIOB_CRL |=(1<<15);  	
				  break;  	
				  case 20:// PIN B4  	
				  GPIOB_CRL |=(1<<17);  	
				  GPIOB_CRL &=~(1<<16);  	
				  GPIOB_CRL |=(1<<18);  	
				  GPIOB_CRL |=(1<<19);  	
				  break;  	
				  case 21:// PIN B5  	
				  GPIOB_CRL |=(1<<21);  	
				  GPIOB_CRL &=~(1<<20);  	
				  GPIOB_CRL |=(1<<22);  	
				  GPIOB_CRL |=(1<<23);  	
				  break;  	
				  case 22:// PIN B6  	
				  GPIOB_CRL |=(1<<25);  	
				  GPIOB_CRL &=~(1<<24);  	
				  GPIOB_CRL |=(1<<26);  	
				  GPIOB_CRL |=(1<<27);  	
				  break;  	
				  case 23:// PIN B7  	
				  GPIOB_CRL |=(1<<29);  	
				  GPIOB_CRL &=~(1<<28);  	
				  GPIOB_CRL |=(1<<30);  	
				  GPIOB_CRL |=(1<<31);  	
				  break;  	
				  case 24:// PIN B8  	
				  GPIOB_CRH |=(1<<1);  	
				  GPIOB_CRH &=~(1<<0);  	
				  GPIOB_CRH |=(1<<2);   	
				  GPIOB_CRH |=(1<<3);  	
				  break;  	
				  case 25:// PIN B9  	
				  GPIOB_CRH |=(1<<5);  	
				  GPIOB_CRH &=~(1<<4);  	
				  GPIOB_CRH |=(1<<6);  	
				  GPIOB_CRH |=(1<<7);  	
				  break;  	
				  case 26:// PIN B10  	
				  GPIOB_CRH |=(1<<9);  	
				  GPIOB_CRH &=~(1<<8);  	
				  GPIOB_CRH |=(1<<10);  	
				  GPIOB_CRH |=(1<<11);  	
				  break;  	
				  case 27:// PIN B11  	
				  GPIOB_CRH |=(1<<13);  	
				  GPIOB_CRH &=~(1<<12);  	
				  GPIOB_CRH |=(1<<14);  	
				  GPIOB_CRH |=(1<<15);  	
				  break;  	
				  case 28:// PIN B12  	
				  GPIOB_CRH |=(1<<17);  	
				  GPIOB_CRH &=~(1<<16);  	
				  GPIOB_CRH |=(1<<18);  	
				  GPIOB_CRH |=(1<<19);  	
				  break;  	
				  case 29:// PIN B13  	
				  GPIOB_CRH |=(1<<21);  	
				  GPIOB_CRH &=~(1<<20);  	
				  GPIOB_CRH |=(1<<22);  	
				  GPIOB_CRH |=(1<<23);  	
				  break;  	
				  case 30:// PIN B14  	
				  GPIOB_CRH |=(1<<25);  	
				  GPIOB_CRH &=~(1<<24);  	
				  GPIOB_CRH |=(1<<26);  	
				  GPIOB_CRH |=(1<<27);  	
				  break;  	
				  case 31:// PIN B15  	
				  GPIOB_CRH |=(1<<29);  	
				  GPIOB_CRH &=~(1<<28);  	
				  GPIOB_CRH |=(1<<30);  	
				  GPIOB_CRH |=(1<<31);  	
				  break;  	
				  case 32:// PIN C13  	
				  GPIOC_CRH |=(1<<21);  	
				  GPIOC_CRH &=~(1<<20);  	
				  GPIOC_CRH |=(1<<22);  	
				  GPIOC_CRH |=(1<<23);  	
				  break;  	
				  case 33:// PIN C14  	
				  GPIOC_CRH |=(1<<25);  	
				  GPIOC_CRH &=~(1<<24);  	
				  GPIOC_CRH |=(1<<26);  	
				  GPIOC_CRH |=(1<<27);  	
				  break;  	
				  case 34:// PIN C15  	
				  GPIOC_CRH |=(1<<29);  	
				  GPIOC_CRH &=~(1<<28);  	
				  GPIOC_CRH |=(1<<30);  	
				  GPIOC_CRH |=(1<<31);  	
				  break;  	
				}	
				break;	
					
				  	
				  }	
				 break;	
				
			case 3://Output mode, max speed 50 MHz
                  switch(Input_Output_mode){
            		  case 0://General purpose output push-pull
            		  switch(Pin){
            		   case 0:// PIN A0
            		   GPIOA_CRL |=(1<<0);
            		   GPIOA_CRL |=(1<<1);
            		   GPIOA_CRL &=~(1<<2); 
            		   GPIOA_CRL &=~(1<<3);
            		   break;
            		   case 1:// PIN A1
            		   GPIOA_CRL |=(1<<4);
            		   GPIOA_CRL |=(1<<5);
            		   GPIOA_CRL &=~(1<<6);
            		   GPIOA_CRL &=~(1<<7);
            		   break;
            		   case 2:// PIN A2
            		   GPIOA_CRL |=(1<<8);
            		   GPIOA_CRL |=(1<<9);
            		   GPIOA_CRL &=~(1<<10);
            		   GPIOA_CRL &=~(1<<11);
            		   break;
            		   case 3:// PIN A3
            		   GPIOA_CRL |=(1<<12);
            		   GPIOA_CRL |=(1<<13);
            		   GPIOA_CRL &=~(1<<14);
            		   GPIOA_CRL &=~(1<<15);
            		   break;
            		   case 4:// PIN A4
            		   GPIOA_CRL |=(1<<16);
            		   GPIOA_CRL |=(1<<17);
            		   GPIOA_CRL &=~(1<<18); 
            		   GPIOA_CRL &=~(1<<19);
            		   break;
            		   case 5:// PIN A5
            		   GPIOA_CRL |=(1<<20);
            		   GPIOA_CRL |=(1<<21);
            		   GPIOA_CRL &=~(1<<22);
            		   GPIOA_CRL &=~(1<<23);
            		   break;
            		   case 6:// PIN A6
            		   GPIOA_CRL |=(1<<24);
            		   GPIOA_CRL |=(1<<25);
            		   GPIOA_CRL &=~(1<<26);
            		   GPIOA_CRL &=~(1<<27);
            		   break;
            		   case 7:// PIN A7
            		   GPIOA_CRL |=(1<<28);
            		   GPIOA_CRL &=~(1<<29);
            		   GPIOA_CRL |=(1<<30);
            		   GPIOA_CRL &=~(1<<31);
            		   break;
            		   case 8:// PIN A8
            		   GPIOA_CRH |=(1<<0);
            		   GPIOA_CRH |=(1<<1);
            		   GPIOA_CRH &=~(1<<2); 
            		   GPIOA_CRH &=~(1<<3);
            		   break;
            		   case 9:// PIN A9
            		   GPIOA_CRH |=(1<<4);
            		   GPIOA_CRH |=(1<<5);
            		   GPIOA_CRH &=~(1<<6);
            		   GPIOA_CRH &=~(1<<7);
            		   break;
            		   case 10:// PIN A10
            		   GPIOA_CRH |=(1<<8);
            		   GPIOA_CRH |=(1<<9);
            		   GPIOA_CRH &=~(1<<10);
            		   GPIOA_CRH &=~(1<<11);
            		   break;
            		   case 11:// PIN A11
            		   GPIOA_CRH |=(1<<12);
            		   GPIOA_CRH |=(1<<13);
            		   GPIOA_CRH &=~(1<<14);
            		   GPIOA_CRH &=~(1<<15);
            		   break;
            		   case 12:// PIN A12
            		   GPIOA_CRH |=(1<<16);
            		   GPIOA_CRH |=(1<<17);
            		   GPIOA_CRH &=~(1<<18); 
            		   GPIOA_CRH &=~(1<<19);
            		   break;
            		   case 13:// PIN A13
            		   GPIOA_CRH |=(1<<20);
            		   GPIOA_CRH |=(1<<21);
            		   GPIOA_CRH &=~(1<<22);
            		   GPIOA_CRH &=~(1<<23);
            		   break;
            		   case 14:// PIN A14
            		   GPIOA_CRH |=(1<<24);
            		   GPIOA_CRH |=(1<<25);
            		   GPIOA_CRH &=~(1<<26);
            		   GPIOA_CRH &=~(1<<27);
            		   break;
            		   case 15:// PIN A15
            		   GPIOA_CRH |=(1<<28);
            		   GPIOA_CRH |=(1<<29);
            		   GPIOA_CRH &=~(1<<30);
            		   GPIOA_CRH &=~(1<<31);
            		   break;
            		   case 16:// PIN B0
            		   GPIOB_CRL |=(1<<0);
            		   GPIOB_CRL |=(1<<1);
            		   GPIOB_CRL &=~(1<<2); 
            		   GPIOB_CRL &=~(1<<3);
            		   break;
            		   case 17:// PIN B1
            		   GPIOB_CRL |=(1<<4);
            		   GPIOB_CRL |=(1<<5);
            		   GPIOB_CRL &=~(1<<6);
            		   GPIOB_CRL &=~(1<<7);
            		   break;
            		   case 18:// PIN B2
            		   GPIOB_CRL |=(1<<8);
            		   GPIOB_CRL |=(1<<9);
            		   GPIOB_CRL &=~(1<<10);
            		   GPIOB_CRL &=~(1<<11);
            		   break;
            		   case 19:// PIN B3
            		   GPIOB_CRL |=(1<<12);
            		   GPIOB_CRL |=(1<<13);
            		   GPIOB_CRL &=~(1<<14);
            		   GPIOB_CRL &=~(1<<15);
            		   break;
            		   case 20:// PIN B4
            		   GPIOB_CRL |=(1<<16);
            		   GPIOB_CRL |=(1<<17);
            		   GPIOB_CRL &=~(1<<18);
            		   GPIOB_CRL &=~(1<<19);
            		   break;
            		   case 21:// PIN B5
            		   GPIOB_CRL |=(1<<20);
            		   GPIOB_CRL |=(1<<21);
            		   GPIOB_CRL &=~(1<<22);
            		   GPIOB_CRL &=~(1<<23);
            		   break;
            		   case 22:// PIN B6
            		   GPIOB_CRL |=(1<<24);
            		   GPIOB_CRL |=(1<<25);
            		   GPIOB_CRL &=~(1<<26);
            		   GPIOB_CRL &=~(1<<27);
            		   break;
            		   case 23:// PIN B7
            		   GPIOB_CRL |=(1<<28);
            		   GPIOB_CRL |=(1<<29);
            		   GPIOB_CRL &=~(1<<30);
            		   GPIOB_CRL &=~(1<<31);
            		   break;
            		   case 24:// PIN B8
            		   GPIOB_CRH |=(1<<0);
            		   GPIOB_CRH |=(1<<1);
            		   GPIOB_CRH &=~(1<<2); 
            		   GPIOB_CRH &=~(1<<3);
            		   break;
            		   case 25:// PIN B9
            		   GPIOB_CRH |=(1<<4);
            		   GPIOB_CRH |=(1<<5);
            		   GPIOB_CRH &=~(1<<6);
            		   GPIOB_CRH &=~(1<<7);
            		   break;
            		   case 26:// PIN B10
            		   GPIOB_CRH |=(1<<8);
            		   GPIOB_CRH |=(1<<9);
            		   GPIOB_CRH &=~(1<<10);
            		   GPIOB_CRH &=~(1<<11);
            		   break;
            		   case 27:// PIN B11
            		   GPIOB_CRH |=(1<<12);
            		   GPIOB_CRH |=(1<<13);
            		   GPIOB_CRH &=~(1<<14);
            		   GPIOB_CRH &=~(1<<15);
            		   break;
            		   case 28:// PIN B12
            		   GPIOB_CRH |=(1<<16);
            		   GPIOB_CRH |=(1<<17);
            		   GPIOB_CRH &=~(1<<18);
            		   GPIOB_CRH &=~(1<<19);
            		   break;
            		   case 29:// PIN B13
            		   GPIOB_CRH |=(1<<20);
            		   GPIOB_CRH |=(1<<21);
            		   GPIOB_CRH &=~(1<<22);
            		   GPIOB_CRH &=~(1<<23);
            		   break;
            		   case 30:// PIN B14
            		   GPIOB_CRH |=(1<<24);
            		   GPIOB_CRH |=(1<<25);
            		   GPIOB_CRH &=~(1<<26);
            		   GPIOB_CRH &=~(1<<27);
            		   break;
            		   case 31:// PIN B15
            		   GPIOB_CRH |=(1<<28);
            		   GPIOB_CRH |=(1<<29);
            		   GPIOB_CRH &=~(1<<30);
            		   GPIOB_CRH &=~(1<<31);
            		   break;
            		   case 32:// PIN C13
            		   GPIOC_CRH |=(1<<20);
            		   GPIOC_CRH |=(1<<21);
            		   GPIOC_CRH &=~(1<<22);
            		   GPIOC_CRH &=~(1<<23);
            		   break;
            		   case 33:// PIN C14
            		   GPIOC_CRH |=(1<<24);
            		   GPIOC_CRH |=(1<<25);
            		   GPIOC_CRH &=~(1<<26);
            		   GPIOC_CRH &=~(1<<27);
            		   break;
            		   case 34:// PIN C15
            		   GPIOC_CRH |=(1<<28);
            		   GPIOC_CRH |=(1<<29);
            		   GPIOC_CRH &=~(1<<30);
            		   GPIOC_CRH &=~(1<<31);
            		   break;
            		     }
            			 break;
            		case 1:// General purpose output Open-drain  
            		switch (Pin){
            		  case 0:// PIN A0  
            		  GPIOA_CRL |=(1<<0);  
            		  GPIOA_CRL |=(1<<1);  
            		  GPIOA_CRL |=(1<<2);   
            		  GPIOA_CRL &=~(1<<3);  
            		  break;  
            		  case 1:// PIN A1  
            		  GPIOA_CRL |=(1<<4);  
            		  GPIOA_CRL |=(1<<5);  
            		  GPIOA_CRL |=(1<<6);  
            		  GPIOA_CRL &=~(1<<7);  
            		  break;  
            		  case 2:// PIN A2  
            		  GPIOA_CRL |=(1<<8);  
            		  GPIOA_CRL |=(1<<9);  
            		  GPIOA_CRL |=(1<<10);  
            		  GPIOA_CRL &=~(1<<11);  
            		  break;  
            		  case 3:// PIN A3  
            		  GPIOA_CRL |=(1<<12);  
            		  GPIOA_CRL |=(1<<13);  
            		  GPIOA_CRL |=(1<<14);  
            		  GPIOA_CRL &=~(1<<15);  
            		  break;  
            		  case 4:// PIN A4  
            		  GPIOA_CRL |=(1<<16);  
            		  GPIOA_CRL |=(1<<17);  
            		  GPIOA_CRL |=(1<<18);  
            		  GPIOA_CRL &=~(1<<19);  
            		  break;  
            		  case 5:// PIN A5  
            		  GPIOA_CRL |=(1<<20);  
            		  GPIOA_CRL |=(1<<21);  
            		  GPIOA_CRL |=(1<<22);  
            		  GPIOA_CRL &=~(1<<23);  
            		  break;  
            		  case 6:// PIN A6  
            		  GPIOA_CRL |=(1<<24);  
            		  GPIOA_CRL |=(1<<25);  
            		  GPIOA_CRL |=(1<<26);  
            		  GPIOA_CRL &=~(1<<27);  
            		  break;  
            		  case 7:// PIN A7  
            		  GPIOA_CRL |=(1<<28);  
            		  GPIOA_CRL |=(1<<29);  
            		  GPIOA_CRL |=(1<<30);  
            		  GPIOA_CRL &=~(1<<31);  
            		  break;  
            		  case 8:// PIN A8  
            		  GPIOA_CRH |=(1<<0);  
            		  GPIOA_CRH |=(1<<1);  
            		  GPIOA_CRH |=(1<<2);   
            		  GPIOA_CRH &=~(1<<3);  
            		  break;  
            		  case 9:// PIN A9  
            		  GPIOA_CRH |=(1<<4);  
            		  GPIOA_CRH |=(1<<5);  
            		  GPIOA_CRH |=(1<<6);  
            		  GPIOA_CRH &=~(1<<7);  
            		  break;  
            		  case 10:// PIN A10  
            		  GPIOA_CRH |=(1<<8);  
            		  GPIOA_CRH |=(1<<9);  
            		  GPIOA_CRH |=(1<<10);  
            		  GPIOA_CRH &=~(1<<11);  
            		  break;  
            		  case 11:// PIN A11  
            		  GPIOA_CRH |=(1<<12);  
            		  GPIOA_CRH |=(1<<13);  
            		  GPIOA_CRH |=(1<<14);  
            		  GPIOA_CRH &=~(1<<15);  
            		  break;  
            		  case 12:// PIN A12  
            		  GPIOA_CRH |=(1<<16);  
            		  GPIOA_CRH |=(1<<17);  
            		  GPIOA_CRH |=(1<<18);  
            		  GPIOA_CRH &=~(1<<19);  
            		  break;  
            		  case 13:// PIN A13  
            		  GPIOA_CRH |=(1<<20);  
            		  GPIOA_CRH |=(1<<21);  
            		  GPIOA_CRH |=(1<<22);  
            		  GPIOA_CRH &=~(1<<23);  
            		  break;  
            		  case 14:// PIN A14  
            		  GPIOA_CRH |=(1<<24);  
            		  GPIOA_CRH |=(1<<25);  
            		  GPIOA_CRH |=(1<<26);  
            		  GPIOA_CRH &=~(1<<27);  
            		  break;  
            		  case 15:// PIN A15  
            		  GPIOA_CRH |=(1<<28);  
            		  GPIOA_CRH |=(1<<29);  
            		  GPIOA_CRH |=(1<<30);  
            		  GPIOA_CRH &=~(1<<31);  
            		  break;  
            		  case 16:// PIN B0  
            		  GPIOB_CRL |=(1<<0);  
            		  GPIOB_CRL |=(1<<1);  
            		  GPIOB_CRL |=(1<<2);   
            		  GPIOB_CRL &=~(1<<3);  
            		  break;  
            		  case 17:// PIN B1  
            		  GPIOB_CRL |=(1<<4);  
            		  GPIOB_CRL |=(1<<5);  
            		  GPIOB_CRL |=(1<<6);  
            		  GPIOB_CRL &=~(1<<7);  
            		  break;  
            		  case 18:// PIN B2  
            		  GPIOB_CRL |=(1<<8);  
            		  GPIOB_CRL |=(1<<9);  
            		  GPIOB_CRL |=(1<<10);  
            		  GPIOB_CRL &=~(1<<11);  
            		  break;  
            		  case 19:// PIN B3  
            		  GPIOB_CRL |=(1<<12);  
            		  GPIOB_CRL |=(1<<13);  
            		  GPIOB_CRL |=(1<<14);  
            		  GPIOB_CRL &=~(1<<15);  
            		  break;  
            		  case 20:// PIN B4  
            		  GPIOB_CRL |=(1<<16);  
            		  GPIOB_CRL |=(1<<17);  
            		  GPIOB_CRL |=(1<<18);  
            		  GPIOB_CRL &=~(1<<19);  
            		  break;  
            		  case 21:// PIN B5  
            		  GPIOB_CRL |=(1<<20);  
            		  GPIOB_CRL |=(1<<21);  
            		  GPIOB_CRL |=(1<<22);  
            		  GPIOB_CRL &=~(1<<23);  
            		  break;  
            		  case 22:// PIN B6  
            		  GPIOB_CRL |=(1<<24);  
            		  GPIOB_CRL |=(1<<25);  
            		  GPIOB_CRL |=(1<<26);  
            		  GPIOB_CRL &=~(1<<27);  
            		  break;  
            		  case 23:// PIN B7  
            		  GPIOB_CRL |=(1<<28);  
            		  GPIOB_CRL |=(1<<29);  
            		  GPIOB_CRL |=(1<<30);  
            		  GPIOB_CRL &=~(1<<31);  
            		  break;  
            		  case 24:// PIN B8  
            		  GPIOB_CRH |=(1<<0);  
            		  GPIOB_CRH |=(1<<1);  
            		  GPIOB_CRH |=(1<<2);   
            		  GPIOB_CRH &=~(1<<3);  
            		  break;  
            		  case 25:// PIN B9  
            		  GPIOB_CRH |=(1<<4);  
            		  GPIOB_CRH |=(1<<5);  
            		  GPIOB_CRH |=(1<<6);  
            		  GPIOB_CRH &=~(1<<7);  
            		  break;  
            		  case 26:// PIN B10  
            		  GPIOB_CRH |=(1<<8);  
            		  GPIOB_CRH |=(1<<9);  
            		  GPIOB_CRH |=(1<<10);  
            		  GPIOB_CRH &=~(1<<11);  
            		  break;  
            		  case 27:// PIN B11  
            		  GPIOB_CRH |=(1<<12);  
            		  GPIOB_CRH |=(1<<13);  
            		  GPIOB_CRH |=(1<<14);  
            		  GPIOB_CRH &=~(1<<15);  
            		  break;  
            		  case 28:// PIN B12  
            		  GPIOB_CRH |=(1<<16);  
            		  GPIOB_CRH |=(1<<17);  
            		  GPIOB_CRH |=(1<<18);  
            		  GPIOB_CRH &=~(1<<19);  
            		  break;  
            		  case 29:// PIN B13  
            		  GPIOB_CRH |=(1<<20);  
            		  GPIOB_CRH |=(1<<21);  
            		  GPIOB_CRH |=(1<<22);  
            		  GPIOB_CRH &=~(1<<23);  
            		  break;  
            		  case 30:// PIN B14  
            		  GPIOB_CRH |=(1<<24);  
            		  GPIOB_CRH |=(1<<25);  
            		  GPIOB_CRH |=(1<<26);  
            		  GPIOB_CRH &=~(1<<27);  
            		  break;  
            		  case 31:// PIN B15  
            		  GPIOB_CRH |=(1<<28);  
            		  GPIOB_CRH |=(1<<29);  
            		  GPIOB_CRH |=(1<<30);  
            		  GPIOB_CRH &=~(1<<31);  
            		  break;  
            		  case 32:// PIN C13  
            		  GPIOC_CRH |=(1<<20);  
            		  GPIOC_CRH |=(1<<21);  
            		  GPIOC_CRH |=(1<<22);  
            		  GPIOC_CRH &=~(1<<23);  
            		  break;  
            		  case 33:// PIN C14  
            		  GPIOC_CRH |=(1<<24);  
            		  GPIOC_CRH |=(1<<25);  
            		  GPIOC_CRH |=(1<<26);  
            		  GPIOC_CRH &=~(1<<27);  
            		  break;  
            		  case 34:// PIN C15  
            		  GPIOC_CRH |=(1<<28);  
            		  GPIOC_CRH |=(1<<29);  
            		  GPIOC_CRH |=(1<<30);  
            		  GPIOC_CRH &=~(1<<31);  
            		  break;  
            		}
            		break;
            		case 2:// Alternate function output Push-pull
            		switch (Pin){
            		  case 0:// PIN A0
            		  GPIOA_CRL |=(1<<0);
                      GPIOA_CRL |=(1<<1);
                      GPIOA_CRL |=(1<<3); 
                      GPIOA_CRL &=~(1<<2);
                      break;
                      case 1:// PIN A1
                      GPIOA_CRL |=(1<<4);
                      GPIOA_CRL |=(1<<5);
                      GPIOA_CRL |=(1<<7);
                      GPIOA_CRL &=~(1<<6);
                      break;
                      case 2:// PIN A2
                      GPIOA_CRL |=(1<<8);
                      GPIOA_CRL |=(1<<9);
                      GPIOA_CRL |=(1<<11);
                      GPIOA_CRL &=~(1<<10);
                      break;
                      case 3:// PIN A3
                      GPIOA_CRL |=(1<<12);
                      GPIOA_CRL |=(1<<13);
                      GPIOA_CRL |=(1<<15);
                      GPIOA_CRL &=~(1<<14);
                      break;
                      case 4:// PIN A4
                      GPIOA_CRL |=(1<<16);
                      GPIOA_CRL |=(1<<17);
                      GPIOA_CRL |=(1<<19);
                      GPIOA_CRL &=~(1<<18);
                      break;
                      case 5:// PIN A5
                      GPIOA_CRL |=(1<<20);
                      GPIOA_CRL |=(1<<21);
                      GPIOA_CRL |=(1<<23);
                      GPIOA_CRL &=~(1<<22);
                      break;
                      case 6:// PIN A6
                      GPIOA_CRL |=(1<<24);
                      GPIOA_CRL |=(1<<25);
                      GPIOA_CRL |=(1<<27);
                      GPIOA_CRL &=~(1<<28);
                      break;
                      case 7:// PIN A7
                      GPIOA_CRL |=(1<<28);
                      GPIOA_CRL |=(1<<29);
                      GPIOA_CRL |=(1<<31);
                      GPIOA_CRL &=~(1<<30);
                      break;
                      case 8:// PIN A8
                      GPIOA_CRH |=(1<<0);
                      GPIOA_CRH |=(1<<1);
                      GPIOA_CRH |=(1<<3); 
                      GPIOA_CRH &=~(1<<2);
                      break;
                      case 9:// PIN A9
                      GPIOA_CRH |=(1<<4);
                      GPIOA_CRH |=(1<<5);
                      GPIOA_CRH |=(1<<7);
                      GPIOA_CRH &=~(1<<6);
                      break;
                      case 10:// PIN A10
                      GPIOA_CRH |=(1<<8);
                      GPIOA_CRH |=(1<<9);
                      GPIOA_CRH |=(1<<11);
                      GPIOA_CRH &=~(1<<10);
                      break;
                      case 11:// PIN A11
                      GPIOA_CRH |=(1<<12);
                      GPIOA_CRH |=(1<<13);
                      GPIOA_CRH |=(1<<15);
                      GPIOA_CRH &=~(1<<14);
                      break;
                      case 12:// PIN A12
                      GPIOA_CRH |=(1<<16);
                      GPIOA_CRH |=(1<<17);
                      GPIOA_CRH |=(1<<19);
                      GPIOA_CRH &=~(1<<18);
                      break;
                      case 13:// PIN A13
                      GPIOA_CRH |=(1<<20);
                      GPIOA_CRH |=(1<<21);
                      GPIOA_CRH |=(1<<23);
                      GPIOA_CRH &=~(1<<22);
                      break;
                      case 14:// PIN A14
                      GPIOA_CRH |=(1<<24);
                      GPIOA_CRH |=(1<<25);
                      GPIOA_CRH |=(1<<27);
                      GPIOA_CRH &=~(1<<26);
                      break;
                      case 15:// PIN A15
                      GPIOA_CRH |=(1<<28);
                      GPIOA_CRH |=(1<<29);
                      GPIOA_CRH |=(1<<31);
                      GPIOA_CRH &=~(1<<30);
                      break;
                      case 16:// PIN B0
                      GPIOB_CRL |=(1<<0);
                      GPIOB_CRL |=(1<<1);
                      GPIOB_CRL |=(1<<3); 
                      GPIOB_CRL &=~(1<<2);
                      break;
                      case 17:// PIN B1
                      GPIOB_CRL |=(1<<4);
                      GPIOB_CRL |=(1<<5);
                      GPIOB_CRL |=(1<<7);
                      GPIOB_CRL &=~(1<<6);
                      break;
                      case 18:// PIN B2
                      GPIOB_CRL |=(1<<8);
                      GPIOB_CRL |=(1<<9);
                      GPIOB_CRL |=(1<<11);
                      GPIOB_CRL &=~(1<<10);
                      break;
                      case 19:// PIN B3
                      GPIOB_CRL |=(1<<12);
                      GPIOB_CRL |=(1<<13);
                      GPIOB_CRL |=(1<<15);
                      GPIOB_CRL &=~(1<<14);
                      break;
                      case 20:// PIN B4
                      GPIOB_CRL |=(1<<16);
                      GPIOB_CRL |=(1<<17);
                      GPIOB_CRL |=(1<<19);
                      GPIOB_CRL &=~(1<<18);
                      break;
                      case 21:// PIN B5
                      GPIOB_CRL |=(1<<20);
                      GPIOB_CRL |=(1<<21);
                      GPIOB_CRL |=(1<<23);
                      GPIOB_CRL &=~(1<<22);
                      break;
                      case 22:// PIN B6
                      GPIOB_CRL |=(1<<24);
                      GPIOB_CRL |=(1<<25);
                      GPIOB_CRL |=(1<<27);
                      GPIOB_CRL &=~(1<<26);
                      break;
                      case 23:// PIN B7
                      GPIOB_CRL |=(1<<28);
                      GPIOB_CRL |=(1<<29);
                      GPIOB_CRL |=(1<<31);
                      GPIOB_CRL &=~(1<<30);
                      break;
                      case 24:// PIN B8
                      GPIOB_CRH |=(1<<0);
                      GPIOB_CRH |=(1<<1);
                      GPIOB_CRH |=(1<<3); 
                      GPIOB_CRH &=~(1<<2);
                      break;
                      case 25:// PIN B9
                      GPIOB_CRH |=(1<<4);
                      GPIOB_CRH |=(1<<5);
                      GPIOB_CRH |=(1<<7);
                      GPIOB_CRH &=~(1<<6);
                      break;
                      case 26:// PIN B10
                      GPIOB_CRH |=(1<<8);
                      GPIOB_CRH |=(1<<9);
                      GPIOB_CRH |=(1<<11);
                      GPIOB_CRH &=~(1<<10);
                      break;
                      case 27:// PIN B11
                      GPIOB_CRH |=(1<<12);
                      GPIOB_CRH |=(1<<13);
                      GPIOB_CRH |=(1<<15);
                      GPIOB_CRH &=~(1<<14);
                      break;
                      case 28:// PIN B12
                      GPIOB_CRH |=(1<<16);
                      GPIOB_CRH |=(1<<17);
                      GPIOB_CRH |=(1<<19);
                      GPIOB_CRH &=~(1<<18);
                      break;
                      case 29:// PIN B13
                      GPIOB_CRH |=(1<<20);
                      GPIOB_CRH |=(1<<21);
                      GPIOB_CRH |=(1<<23);
                      GPIOB_CRH &=~(1<<22);
                      break;
                      case 30:// PIN B14
                      GPIOB_CRH |=(1<<24);
                      GPIOB_CRH |=(1<<25);
                      GPIOB_CRH |=(1<<27);
                      GPIOB_CRH &=~(1<<26);
                      break;
                      case 31:// PIN B15
                      GPIOB_CRH |=(1<<28);
                      GPIOB_CRH |=(1<<29);
                      GPIOB_CRH |=(1<<31);
                      GPIOB_CRH &=~(1<<30);
                      break;
                      case 32:// PIN C13
                      GPIOC_CRH |=(1<<20);
                      GPIOC_CRH |=(1<<21);
                      GPIOC_CRH |=(1<<23);
                      GPIOC_CRH &=~(1<<22);
                      break;
                      case 33:// PIN C14
                      GPIOC_CRH |=(1<<24);
                      GPIOC_CRH |=(1<<25);
                      GPIOC_CRH |=(1<<27);
                      GPIOC_CRH &=~(1<<26);
                      break;
                      case 34:// PIN C15
                      GPIOC_CRH |=(1<<28);
                      GPIOC_CRH |=(1<<29);
                      GPIOC_CRH |=(1<<31);
                      GPIOC_CRH &=~(1<<30);
            		  break;
            		  }
            		  break;
            		case 3:// Alternate function output Open-drain  
            		switch (Pin){
            		  case 0:// PIN A0  
            		  GPIOA_CRL |=(1<<0);  
            		  GPIOA_CRL |=(1<<1);  
            		  GPIOA_CRL |=(1<<2);   
            		  GPIOA_CRL |=(1<<3);  
            		  break;  
            		  case 1:// PIN A1  
            		  GPIOA_CRL |=(1<<4);  
            		  GPIOA_CRL |=(1<<5);  
            		  GPIOA_CRL |=(1<<6);  
            		  GPIOA_CRL |=(1<<7);  
            		  break;  
            		  case 2:// PIN A2  
            		  GPIOA_CRL |=(1<<8);  
            		  GPIOA_CRL |=(1<<9);  
            		  GPIOA_CRL |=(1<<10);  
            		  GPIOA_CRL |=(1<<11);  
            		  break;  
            		  case 3:// PIN A3  
            		  GPIOA_CRL |=(1<<12);  
            		  GPIOA_CRL |=(1<<13);  
            		  GPIOA_CRL |=(1<<14);  
            		  GPIOA_CRL |=(1<<15);  
            		  break;  
            		  case 4:// PIN A4  
            		  GPIOA_CRL |=(1<<16);  
            		  GPIOA_CRL |=(1<<17);  
            		  GPIOA_CRL |=(1<<18);  
            		  GPIOA_CRL |=(1<<19);  
            		  break;  
            		  case 5:// PIN A5  
            		  GPIOA_CRL |=(1<<20);  
            		  GPIOA_CRL |=(1<<21);  
            		  GPIOA_CRL |=(1<<22);  
            		  GPIOA_CRL |=(1<<23);  
            		  break;  
            		  case 6:// PIN A6  
            		  GPIOA_CRL |=(1<<24);  
            		  GPIOA_CRL |=(1<<25);  
            		  GPIOA_CRL |=(1<<26);  
            		  GPIOA_CRL |=(1<<27);  
            		  break;  
            		  case 7:// PIN A7  
            		  GPIOA_CRL |=(1<<28);  
            		  GPIOA_CRL |=(1<<29);  
            		  GPIOA_CRL |=(1<<30);  
            		  GPIOA_CRL |=(1<<31);  
            		  break;  
            		  case 8:// PIN A8  
            		  GPIOA_CRH |=(1<<0);  
            		  GPIOA_CRH |=(1<<1);  
            		  GPIOA_CRH |=(1<<2);   
            		  GPIOA_CRH |=(1<<3);  
            		  break;  
            		  case 9:// PIN A9  
            		  GPIOA_CRH |=(1<<4);  
            		  GPIOA_CRH |=(1<<5);  
            		  GPIOA_CRH |=(1<<6);  
            		  GPIOA_CRH |=(1<<7);  
            		  break;  
            		  case 10:// PIN A10  
            		  GPIOA_CRH |=(1<<8);  
            		  GPIOA_CRH |=(1<<9);  
            		  GPIOA_CRH |=(1<<10);  
            		  GPIOA_CRH |=(1<<11);  
            		  break;  
            		  case 11:// PIN A11  
            		  GPIOA_CRH |=(1<<12);  
            		  GPIOA_CRH |=(1<<13);  
            		  GPIOA_CRH |=(1<<14);  
            		  GPIOA_CRH |=(1<<15);  
            		  break;  
            		  case 12:// PIN A12  
            		  GPIOA_CRH |=(1<<16);  
            		  GPIOA_CRH |=(1<<17);  
            		  GPIOA_CRH |=(1<<18);  
            		  GPIOA_CRH |=(1<<19);  
            		  break;  
            		  case 13:// PIN A13  
            		  GPIOA_CRH |=(1<<20);  
            		  GPIOA_CRH |=(1<<21);  
            		  GPIOA_CRH |=(1<<22);  
            		  GPIOA_CRH |=(1<<23);  
            		  break;  
            		  case 14:// PIN A14  
            		  GPIOA_CRH |=(1<<24);  
            		  GPIOA_CRH |=(1<<25);  
            		  GPIOA_CRH |=(1<<26);  
            		  GPIOA_CRH |=(1<<27);  
            		  break;  
            		  case 15:// PIN A15  
            		  GPIOA_CRH |=(1<<28);  
            		  GPIOA_CRH |=(1<<29);  
            		  GPIOA_CRH |=(1<<30);  
            		  GPIOA_CRH |=(1<<31);  
            		  break;  
            		  case 16:// PIN B0  
            		  GPIOB_CRL |=(1<<0);  
            		  GPIOB_CRL |=(1<<1);  
            		  GPIOB_CRL |=(1<<2);   
            		  GPIOB_CRL |=(1<<3);  
            		  break;  
            		  case 17:// PIN B1  
            		  GPIOB_CRL |=(1<<4);  
            		  GPIOB_CRL |=(1<<5);  
            		  GPIOB_CRL |=(1<<6);  
            		  GPIOB_CRL |=(1<<7);  
            		  break;  
            		  case 18:// PIN B2  
            		  GPIOB_CRL |=(1<<8);  
            		  GPIOB_CRL |=(1<<9);  
            		  GPIOB_CRL |=(1<<10);  
            		  GPIOB_CRL |=(1<<11);  
            		  break;  
            		  case 19:// PIN B3  
            		  GPIOB_CRL |=(1<<12);  
            		  GPIOB_CRL |=(1<<13);  
            		  GPIOB_CRL |=(1<<14);  
            		  GPIOB_CRL |=(1<<15);  
            		  break;  
            		  case 20:// PIN B4  
            		  GPIOB_CRL |=(1<<16);  
            		  GPIOB_CRL |=(1<<17);  
            		  GPIOB_CRL |=(1<<18);  
            		  GPIOB_CRL |=(1<<19);  
            		  break;  
            		  case 21:// PIN B5  
            		  GPIOB_CRL |=(1<<20);  
            		  GPIOB_CRL |=(1<<21);  
            		  GPIOB_CRL |=(1<<22);  
            		  GPIOB_CRL |=(1<<23);  
            		  break;  
            		  case 22:// PIN B6  
            		  GPIOB_CRL |=(1<<24);  
            		  GPIOB_CRL |=(1<<25);  
            		  GPIOB_CRL |=(1<<26);  
            		  GPIOB_CRL |=(1<<27);  
            		  break;  
            		  case 23:// PIN B7  
            		  GPIOB_CRL |=(1<<28);  
            		  GPIOB_CRL |=(1<<29);  
            		  GPIOB_CRL |=(1<<30);  
            		  GPIOB_CRL |=(1<<31);  
            		  break;  
            		  case 24:// PIN B8  
            		  GPIOB_CRH |=(1<<0);  
            		  GPIOB_CRH |=(1<<1);  
            		  GPIOB_CRH |=(1<<2);   
            		  GPIOB_CRH |=(1<<3);  
            		  break;  
            		  case 25:// PIN B9  
            		  GPIOB_CRH |=(1<<4);  
            		  GPIOB_CRH |=(1<<5);  
            		  GPIOB_CRH |=(1<<6);  
            		  GPIOB_CRH |=(1<<7);  
            		  break;  
            		  case 26:// PIN B10  
            		  GPIOB_CRH |=(1<<8);  
            		  GPIOB_CRH |=(1<<9);  
            		  GPIOB_CRH |=(1<<10);  
            		  GPIOB_CRH |=(1<<11);  
            		  break;  
            		  case 27:// PIN B11  
            		  GPIOB_CRH |=(1<<12);  
            		  GPIOB_CRH |=(1<<13);  
            		  GPIOB_CRH |=(1<<14);  
            		  GPIOB_CRH |=(1<<15);  
            		  break;  
            		  case 28:// PIN B12  
            		  GPIOB_CRH |=(1<<16);  
            		  GPIOB_CRH |=(1<<17);  
            		  GPIOB_CRH |=(1<<18);  
            		  GPIOB_CRH |=(1<<19);  
            		  break;  
            		  case 29:// PIN B13  
            		  GPIOB_CRH |=(1<<20);  
            		  GPIOB_CRH |=(1<<21);  
            		  GPIOB_CRH |=(1<<22);  
            		  GPIOB_CRH |=(1<<23);  
            		  break;  
            		  case 30:// PIN B14  
            		  GPIOB_CRH |=(1<<24);  
            		  GPIOB_CRH |=(1<<25);  
            		  GPIOB_CRH |=(1<<26);  
            		  GPIOB_CRH |=(1<<27);  
            		  break;  
            		  case 31:// PIN B15  
            		  GPIOB_CRH |=(1<<28);  
            		  GPIOB_CRH |=(1<<29);  
            		  GPIOB_CRH |=(1<<30);  
            		  GPIOB_CRH |=(1<<31);  
            		  break;  
            		  case 32:// PIN C13  
            		  GPIOC_CRH |=(1<<20);  
            		  GPIOC_CRH |=(1<<21);  
            		  GPIOC_CRH |=(1<<22);  
					  GPIOC_CRH |=(1<<23);  
					  break;  
					  case 33:// PIN C14  
					  GPIOC_CRH |=(1<<24);  
					  GPIOC_CRH |=(1<<25);  
					  GPIOC_CRH |=(1<<26);  
					  GPIOC_CRH |=(1<<27);  
					  break;  
					  case 34:// PIN C15  
					  GPIOC_CRH |=(1<<28);  
					  GPIOC_CRH |=(1<<29);  
					  GPIOC_CRH |=(1<<30);  
					  GPIOC_CRH |=(1<<31);  
					  break;  
					}
					break;
					
					  
					  }
					 break;
				
        }   	
    }
	#endif /* PINMODE_H*/
