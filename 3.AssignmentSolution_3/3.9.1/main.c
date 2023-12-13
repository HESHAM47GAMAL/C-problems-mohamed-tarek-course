/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: moham
 */
/****** Fibonacci number using while 1 *****///

#include <stdio.h>

int main()
{

	int arr [100];
	arr[0]= 1 ;
	arr[1]= 1;


	for(short i = 2 ; i < 100; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	short Index;
	printf("Enter number index for Series (1 :100): "),fflush(stdout);
	scanf("%hi",&Index);
	printf("Value of index %hi in series = %d",Index ,arr[Index - 1] );

	return 0;
}


