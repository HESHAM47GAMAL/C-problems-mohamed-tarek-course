/*
 * main.c
 *
 *  Created on: Dec 9, 2023
 *      Author: moham
 */

#include <stdio.h>

void swap2array(int [] , int , int [] ,int );

void printR(int [] , int);

int main()
{
	int R1 []={10, 5 , 6 , 9 , 4 ,101 };
	int R2 [] = {54 , 89 , 77 , 32 , 4 , 99};
	short sizeR1 = sizeof(R1) / sizeof(R1[0]) , sizeR2 = sizeof(R2)/sizeof(R2[0]);
	printf("R1 before swap : ");
	printR(R1 , sizeR1);
	printf("\nR1 before swap : ");
	printR(R2 , sizeR2);

	swap2array(R1 , sizeR1 , R2 ,sizeR2);

	printf("\nR1 After swap : ");
	printR(R1 , sizeR1);
	printf("\nR1 After swap : ");
	printR(R2 , sizeR2);


	return 0 ;
}

void printR(int T[] , int sizeR)
{
	for(short i = 0 ; i <sizeR ; i++)
	{
		printf("%d ", T[i]);
	}
}

void swap2array(int T1[] , int s1, int T2[] ,int s2 )
{
	int Min = (s1 < s2 ?  s1 : s2);
	int temp ;
	for(short i =0 ; i < Min ; i++)
	{
		temp = T1[i];
		T1[i] = T2[i];
		T2[i] =temp;
	}
}

