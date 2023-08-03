/*
 * DigitlWrite.h
 *
 *  Created on: Aug 3, 2023
 *      Author: Lahouasna Abderrahmane
 */

#ifndef DIGITALWRITE_H_
#define DIGITALWRITE_H_
void DigitalWrite(unsigned char Pin,unsigned char value){
	switch(Pin){
		case 0:// pin A0
		       switch(value){
				        case 0:// LOW
						   GPIOA_ODR &=~(1<<0);
						   break;
						case 1://HIGH
						   GPIOA_ODR |=(1<<0);


			                }
							break;
		case 1:// pin A1

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<1);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<1);


			 			      }
			 			break;
         case 2:// pin A2

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<2);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<2);


			 			      }
			 			break;

		case 3:// pin A3

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<3);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<3);


			 			      }
			 			break;

		case 4:// pin A4

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<4);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<4);


			 			      }
			 			break;
		case 5:// pin A5

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<5);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<5);


			 			      }
			 			break;

		case 6:// pin A6

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<6);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<6);


			 			      }
			 			break;

		case 7:// pin A7

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<7);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<7);


			 			      }
			 			break;
		case 8:// pin A8

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<8);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<8);


			 			      }
			 			break;
		case 9:// pin A9

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<9);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<9);


			 			      }
			 			break;
		case 10:// pin A10

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<10);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<10);


			 			      }
			 			break;
		case 11:// pin A11

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<11);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<11);


			 			      }
			 			break;
		case 12:// pin A12

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<12);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<12);


			 			      }
			 			break;
		case 13:// pin A13

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<13);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<13);


			 			      }
			 			break;
		case 14:// pin A14

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<14);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<14);


			 			      }
			 			break;
		case 15:// pin A15

		   switch(value){
		          case 0:// LOW
	      		   GPIOA_ODR &=~(1<<15);
	      		   break;
	      		case 1://HIGH
         		   GPIOA_ODR |=(1<<15);


			 			      }
			 			break;

		case 16:// pin B0
		       switch(value){
				        case 0:// LOW
						   GPIOB_ODR &=~(1<<0);
						   break;
						case 1://HIGH
						   GPIOB_ODR |=(1<<0);


			                }
							break;
		case 17:// pin B1

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<1);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<1);


			 			      }
			 			break;
         case 18:// pin B2

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<2);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<2);


			 			      }
			 			break;

		case 19:// pin B3

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<3);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<3);


			 			      }
			 			break;

		case 20:// pin B4

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<4);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<4);


			 			      }
			 			break;
		case 21:// pin B5

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<5);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<5);


			 			      }
			 			break;

		case 22:// pin B6

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<6);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<6);


			 			      }
			 			break;

		case 23:// pin B7

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<7);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<7);


			 			      }
			 			break;
		case 24:// pin B8

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<8);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<8);


			 			      }
			 			break;
		case 25:// pin B9

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<9);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<9);


			 			      }
			 			break;
		case 26:// pin B10

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<10);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<10);


			 			      }
			 			break;
		case 27:// pin B11

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<11);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<11);


			 			      }
			 			break;
		case 28:// pin B12

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<12);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<12);


			 			      }
			 			break;
		case 29:// pin B13

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<13);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<13);


			 			      }
			 			break;
		case 30:// pin B14

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<14);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<14);


			 			      }
			 			break;
		case 31:// pin B15

		   switch(value){
		          case 0:// LOW
	      		   GPIOB_ODR &=~(1<<15);
	      		   break;
	      		case 1://HIGH
         		   GPIOB_ODR |=(1<<15);


			 			      }
			 			break;

		case 32:// pin C13

		   switch(value){
		          case 0:// LOW
	      		   GPIOC_ODR &=~(1<<13);
	      		   break;
	      		case 1://HIGH
         		   GPIOC_ODR |=(1<<13);


			 			      }
			 			break;
		case 33:// pin C14

		   switch(value){
		          case 0:// LOW
	      		   GPIOC_ODR &=~(1<<14);
	      		   break;
	      		case 1://HIGH
         		   GPIOC_ODR |=(1<<14);


			 			      }
			 			break;
		case 34:// pin C15

		   switch(value){
		          case 0:// LOW
	      		   GPIOC_ODR &=~(1<<15);
	      		   break;
	      		case 1://HIGH
         		   GPIOC_ODR |=(1<<15);


			 			      }
			 			break;

	}
}


#endif /* DIGITALWRITE_H_ */
