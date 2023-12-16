/*
 * main.c
 *
 *  Created on: Dec 14, 2023
 *      Author: moham
 */

#include <stdio.h>

#define ArrayS 10
void displayR(int *[] , int );

int main()
{
	int R1[ArrayS] ={100, 50 ,-90 ,+64 , 88 , 32 , 98,664,54,31};
	int i , *ptr_R[ArrayS];
	printf("before any address of ptr_R : %p\n",&ptr_R);
	for(i = 0 ; i < ArrayS ; i++)
	{
		ptr_R[i] = (R1 + i); // ptr_R[i] = &R1[i];
	}
	displayR(ptr_R , ArrayS);


	return 0;
}

void displayR(int *T_R[] , int sizeR)
{
	printf("before in func any address of T_R : %p\n",T_R);
	printf("Array content : ");
	for(short i = 0 ; i < sizeR ; i++)
	{
		printf("%d ",*T_R[i]);
	}

}


