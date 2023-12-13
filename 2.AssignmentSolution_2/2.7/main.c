/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */
#include <stdio.h>

void IsMultiple(int , int);

int main()
{
	int num1 , num2 ;
	printf("Enter number1 : "),fflush(stdout);
	scanf("%d",&num1);
	printf("Enter number2 : "),fflush(stdout);
	scanf("%d",&num2);
	IsMultiple(num1 ,num2);

	return 0;
}

void IsMultiple(int num1 , int num2)
{
	if(num2 % num1 == 0)
		printf("number 1 is multiple of number 2");
	else
		printf("number 1 is NOT multiple of number 2");

}


