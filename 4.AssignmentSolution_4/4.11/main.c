/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>


int main ()
{
	long num1 = 0xFFFFAAAA ;
	long num2;
	short *ptr1 = (short *)&num1 ;
	short *ptr2 = (short *)&num2 ;

	ptr2[0] = ptr1[1];
	ptr2[1] = ptr1[0];
	printf("value after swap two 16 bits : %x",(unsigned int)num2);

	return 0;
}



