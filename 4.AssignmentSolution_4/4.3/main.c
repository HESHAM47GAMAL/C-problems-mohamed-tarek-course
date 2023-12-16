/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: moham
 */

#include <stdio.h>

#define Array_Size 10
#define Null (void *)0

int main()
{
	int R[Array_Size]= {};

	int * ptr = R;

	printf("Enter 10 element for array\n"),fflush(stdout);
	for(int i = 0 ; i < Array_Size ; i++)
	{
		printf("Enter element %d : ",i+1),fflush(stdout);
		scanf("%d",ptr);
		ptr++;
	}
	printf("Array content will display in reverse order : "),fflush(stdout);
	ptr = & R[Array_Size - 1];
	for(int i = 1 ; i <= Array_Size ; i++)
	{
		printf("%d ",(*ptr)--);
	}

	ptr = Null;


	return   0;
}
