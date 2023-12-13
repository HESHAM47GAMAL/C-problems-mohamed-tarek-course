
/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>

int main()
{
	int number ;
	printf("Enter number want to count until : ");
	fflush(stdout);
	scanf("%d",&number);
	long sum = number *(number + 1) /2;
	printf("sum = %ld", sum);


	return 0;
}
