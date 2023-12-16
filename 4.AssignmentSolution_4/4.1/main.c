/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: moham
 */

#include <stdio.h>


void Compute_1(const int [] , int , int * );

int main()
{
	int result = 0;
	int R[] = {1,2,3,4,5,6};
	int Size = sizeof(R) / sizeof(R[0]);
	Compute_1(R , Size , &result );
	if(result == 0)
	{
		printf("This function not work correctly ):");
	}
	else
	{
		printf("Reslut of function : %d",result);
	}

	return 0;
}

void Compute_1(const int T[] , int sizeR  ,int * ptr_sum)
{
	for(int I = 0 ; I < sizeR ;I++)
	{
		* ptr_sum += T[I];
	}

}

