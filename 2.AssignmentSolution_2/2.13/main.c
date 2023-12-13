/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

int floorRealNum(float ,float);

int main()
{
	float num1 , num2 ;
	printf("Enter number 1 : "),fflush(stdout);
	scanf("%f",&num1);
	printf("Enter number 2 : "),fflush(stdout);
	scanf("%f",&num2);
	printf("Result = %d",floorRealNum(num1 ,num2));



	return 0;
}


int floorRealNum(float n1 ,float n2)
{
	return (int)(n1 + n2);
}
