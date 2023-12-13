/*
 * main.c
 *
 *  Created on: Dec 9, 2023
 *      Author: moham
 */

#include <stdio.h>

int GlobalR[100];

int * CreateArray(int , int , int *);


int main()
{
	int lowerValue = 8 , upperValue = 17;
	int size_used = 0 ;
	int * ptrR = 0;

	ptrR = CreateArray(lowerValue , upperValue , &size_used);

	printf("Output array : ");
	for(short i = 0 ; i < size_used ; i++)
	{
		printf("%d ",ptrR[i]);
	}

	printf("\nOutput array size : %d",size_used);

	return 0;
}

int * CreateArray(int Lvalue , int Uvalue , int * sizeUsed)
{
	*sizeUsed  = 0;
	if(Lvalue >= Uvalue )
	{
		GlobalR[0] = 0xFF;
		GlobalR[1] = 0xFF;
		*sizeUsed  = 2;
	}
	else
	{
		for(int i = Uvalue  ; i >= Lvalue ; i--)
		{
			GlobalR[*sizeUsed] = i;
			(*sizeUsed)++;
		}
	}
	return GlobalR;
}



