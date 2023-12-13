/*
 * main.c
 *
 *  Created on: Dec 9, 2023
 *      Author: moham
 */

#include <stdio.h>

char IsIdenticalArray(int[],int[],int);

int main()
{

	int R1[] = {1,2,3,4,5};
	int R2[] = {0,2,3,4,5};
	int sizeR= sizeof(R1)/sizeof(R1[0]);
	char result = IsIdenticalArray(R1 , R2 ,sizeR );
	if(result == 0)
		printf("Is Identical Array");
	else
		printf("Is Not Identical Array");



	return 0 ;
}

char IsIdenticalArray(int T1[],int T2[],int SizeR)
{
	for(short i = 0 ; i < SizeR ;i++)
	{
		if(T1[i] != T2[i])
			return 1;
	}
	return 0;
}

