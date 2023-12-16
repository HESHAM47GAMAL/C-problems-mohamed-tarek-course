/*
 * main.c
 *
 *  Created on: Dec 14, 2023
 *      Author: moham
 */

#include <stdio.h>
#define ArrayS 6

#define Null (void * )0

void getSmallValue(int [] ,int , int **);

int main ()
{
	int R[ArrayS];
	printf("Enter value of array\n"),fflush(stdout);
	int  * ptr_R = R;
	for(int i = 0 ; i < ArrayS ; i++)
	{
		printf("Enter element %d in array : ",i+1),fflush(stdout);
		scanf("%d",ptr_R);
		ptr_R++;
	}
	ptr_R = Null;
	getSmallValue(R,ArrayS,&ptr_R );
	if(ptr_R == Null)
	{
		printf("There are Error check your Implement");
	}
	else
		printf("Small value in array : %d",*ptr_R);


	return 0;
}

void getSmallValue(int TR[] , int sizeR , int **ptr_S)
{
	*ptr_S = TR;
	for(short i = 1 ; i < sizeR ; i++)
	{
		if(TR[i] < **ptr_S)
			*ptr_S = (TR + i);
	}
}

