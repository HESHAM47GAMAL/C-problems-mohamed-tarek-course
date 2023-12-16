/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>

#define Rsize 4

void swap2arrayContent( int * const , int * , int);

int main()
{
	void (*ptr_func) (int *, int * , int);
	ptr_func = swap2arrayContent ;
	int R1 [] = {1,2,3,4};
	int R2 [] = {5,6,7,8};
	printf("Before swap : \n");
	printf("R1 content : ");
	for(short i = 0 ; i <Rsize ; i++)
		printf("%d ",R1[i]);
	printf("\nR2 content : ");
		for(short i = 0 ; i <Rsize ; i++)
			printf("%d ",R2[i]);

	(*ptr_func)(R1 , R2 , Rsize); /*Call function*/

	printf("\nafter swap : \n");

	printf("R1 content : ");
		for(short i = 0 ; i <Rsize ; i++)
		printf("%d ",R1[i]);
	printf("\nR2 content : ");
		for(short i = 0 ; i <Rsize ; i++)
			printf("%d ",R2[i]);


	return 0;
}

void swap2arrayContent(int T1[] , int T2[] , int sizeR)
{

	for(short  i = 0 ; i < sizeR ; i++)
	{
		*T1 = *T1 ^ T2[i];
		T2[i] = *T1 ^ T2[i];
		*T1 = *T1 ^ T2[i];
		T1++;
	}


}


