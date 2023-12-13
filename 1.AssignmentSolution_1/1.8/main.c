/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>
#include <math.h>

int main()
{
	int num ;
	printf("Enter number want to check : ");
	fflush(stdout);
	scanf("%d",&num);
	int root = sqrt(num);
	if(num == root * root )
		printf("number is Perfect square");
	else
		printf("Not perfect aqaure");
	fflush(stdout);

	return 0;
}
