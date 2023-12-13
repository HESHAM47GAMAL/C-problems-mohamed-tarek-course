/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

void Swap1(int * , int *); // method 1
void Swap2(int * , int *); // method 2
void Swap3(int * , int *); // method 3


int main()
{
	int num1 , num2;
	printf("Enter number 1 : "),fflush(stdout);
	scanf("%d",&num1);

	printf("Enter number 2 : "),fflush(stdout);
	scanf("%d",&num2);

	printf("numbers before swap %d\t%d\n",num1,num2);

	Swap3(&num1,&num2);
	printf("numbers after swap %d\t%d",num1,num2);

	return 0;
}

void Swap1(int * n1, int * n2)
{
	int temp  = *n1;
	*n1 = *n2;
	*n2 = temp;
}


void Swap2(int * n1, int * n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

void Swap3(int * n1 , int * n2)
{
	*n1 = *n1 ^ *n2;
	*n2 = *n1 ^ *n2;
	*n1 = *n1 ^ *n2;

}
