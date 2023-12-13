/*
 * main.c
 *
 *  Created on: Nov 26, 2023
 *      Author: moham
 */

#include<stdio.h>

void checkPN(int num)
{
	if(num >= 0)
		printf("is positive");
	else
		printf("is negative");

}

int main()
{
	int num ;
	printf("Enter number value : "), fflush(stdout);
	scanf("%d",&num);
	checkPN(num);

	return 0;
}
