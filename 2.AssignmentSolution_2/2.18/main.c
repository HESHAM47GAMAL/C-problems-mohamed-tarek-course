/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>
#include <math.h>

void IsSquare(int);

int main(){

	int num ;
	printf("Enter number to check is Sqaure :"),fflush(stdout);
	scanf("%d",&num);
	IsSquare(num);


	return 0;
}

void IsSquare(int N)
{
	int root = sqrt(N);
	if(N == (root * root))
		printf("Is Square");
	else
		printf("Not square");
}

