/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */


#include <stdio.h>


int main()
{
	int num1 , num2;
	printf("please enter to values : ");
	fflush(stdout);
	scanf("%d %d",&num1,&num2);
	if(num1 > num2 )
	{
		printf("num1 Greater than num2");
	}
	else if(num2 > num1)
	{
		printf("num2 Greater than num1");
	}
	else
		printf("num1 Equal num2");
	fflush(stdout);
	return 0;
}
