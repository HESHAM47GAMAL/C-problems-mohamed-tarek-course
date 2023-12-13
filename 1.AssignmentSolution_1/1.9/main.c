/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>

int main()
{
	int grade ;
	printf("Enter your grade : ");
	fflush(stdout);
	scanf("%d",&grade);
	switch(grade)
	{
	case 85 ... 100:
		printf("Excellent");
		break;
	case 75 ... 84:
		printf("Very Good");
		break;
	case 65 ... 74 :
		printf("Good");
		break;
	case 50 ... 64:
		printf("Pass");
		break;
	default :
		printf("Fail");

	}

	return 0;
}
