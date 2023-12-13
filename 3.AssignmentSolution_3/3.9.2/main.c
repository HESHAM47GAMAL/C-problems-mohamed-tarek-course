/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: moham
 */

#include <stdio.h>

int fab(int);

int main()
{
	short Index;
	printf("Enter number index for Series (1 :100): "),fflush(stdout);
	scanf("%hi",&Index);
	printf("Value of index %hi in series = %d",Index , fab(Index));



	return 0;
}

int fab(int n)
{

	if( n  == 1 || n == 2)
	{
		return 1;
	}
	return fab(n-1) + fab(n-2);
}
