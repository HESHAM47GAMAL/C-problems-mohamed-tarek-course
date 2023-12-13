/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>
int countHoles(int);

int main()
{
	int num ;
	printf("Enter number that you want to count holes inside : "),fflush(stdout);
	scanf("%d",&num);
	printf("number of holes = %d",countHoles(num));


	return 0;
}

int countHoles(int number)
{
	int counter = 0;
	if(number == 0)
		counter++;
	while(number) /// if number == 0 , so can't enter while loop
	{
		char digit = number %10;
		if(digit == 0 || digit == 6 || digit == 9)
			counter++;
		else if(digit == 8)
			counter += 2;
		number /= 10;
	}

	return counter;
}
