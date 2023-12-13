
/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>

int main ()
{
	int numFac ;
	printf("Enter number :  ");
	fflush(stdout);
	scanf("%d",&numFac);
	int result = 1 ;
	for(short i = 2 ; i <= numFac ; i++)
	{
		result *= i;
	}
	printf("result : %d",result);
	fflush(stdout);

	return  0;
}
