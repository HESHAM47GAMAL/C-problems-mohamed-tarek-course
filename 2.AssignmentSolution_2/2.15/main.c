/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include<stdio.h>

char calOnes(unsigned long );

int main()
{
	unsigned long value = 0xF0000000;
	printf("Number of ones in %x = %hi", value ,(signed short) calOnes(value) );


	return 0;
}

char calOnes(unsigned long N)
{
	char count = 0 ;
	unsigned long mask = 0x80000000;
	for(short i =0 ; i<32 ;i++)
	{
		if( (N << i) & mask )
			count++;
	}
	return count;
}

