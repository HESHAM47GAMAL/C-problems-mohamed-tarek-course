/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>
#define ARRAY_SIZE 13

int getOddRepeat(int * , int);

int main()
{
	int arr[ARRAY_SIZE] = {1,2,3,1,2,3,1,1,1,1,3,3,3};

	int result = getOddRepeat(arr , ARRAY_SIZE);
	printf("number that is repeated odd times is : %d",result);
	return 0;
}


int getOddRepeat(int *T , int S)
{
	int repeat = 0, index =0 ;
	for(short i = 0 ; i < S ;i++)
	{
		for(short j =0 ; j < S ;j++)
		{
			if(T[i] == T[j])
			{
				index = i ;
				repeat ++;

			}
		}
		if(repeat % 2 != 0)
			return T[index] ;

		repeat = 0 ;
	}


	return -1;
}


