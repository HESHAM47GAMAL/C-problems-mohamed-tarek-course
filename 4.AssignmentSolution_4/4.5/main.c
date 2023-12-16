/*
 * main.c
 *
 *  Created on: Dec 14, 2023
 *      Author: moham
 */

#include <stdio.h>

#define ArrayS 6

void copyArray(int [] , int [] , int );

int main()
{
	int R1[ArrayS] , R2[ArrayS];
	printf("Enter value of array\n"),fflush(stdout);
	int  * ptr_R = R1;
	for(int i = 0 ; i < ArrayS ; i++)
	{
		printf("Enter element %d in array : ",i+1),fflush(stdout);
		scanf("%d",ptr_R);
		ptr_R++;
	}

	printf("Display array after copy : ");
	copyArray(R1, R2, ArrayS);

	for(int i = 0 ; i < ArrayS ;i++)
	{
		printf("R1[%d] : %d\tR2[%d] : %d\n",i,*(R1+i),i,R2[i]);
	}



	return 0;
}

void copyArray(int T1[] , int T2[] , int sizeR)
{
	for(short i = 0 ; i<sizeR ;i++)
	{
		*(T2 + i) = *(T1 + i);
	}
}

