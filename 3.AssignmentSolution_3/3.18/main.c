/*
 * main.c
 *
 *  Created on: Dec 9, 2023
 *      Author: moham
 */


#include <stdio.h>

struct Repeation
{
	int value;
	int repeat;
};

struct Repeation LConsecutiveOccurrence(int [] , int);

int LConsecutiveOccurrenceValue(int [] , int , int);

int main ()
{
	int R[]={1,2,2,3,3,3,3,3,4,4,4,4,4,4,3,3,3,3};
	int sizeR = sizeof(R) / sizeof(R[0]);
	struct Repeation result = LConsecutiveOccurrence(R , sizeR);

	printf("number %d has max repeat Consecutive = %d",result.value , result.repeat);


	printf("\n\nnumber  3 has max repeat Consecutive : %d" ,LConsecutiveOccurrenceValue(R,sizeR,3));
	return 0;
}

struct Repeation LConsecutiveOccurrence(int Tarray[] , int sizeR)
{
	int MaxCount = 0 ;
	int currentCount = 1 ;
	int value  = Tarray[0];
	for(short  i = 1 ; i < sizeR ; i++ )
	{
		if(Tarray[i] == Tarray[i-1])
		{
			currentCount++;
		}
		else
		{
			currentCount =1 ;
		}
		if(currentCount >= MaxCount)
		{
			MaxCount = currentCount ;
			value = Tarray[i];
		}
	}
	struct Repeation T = {value , MaxCount};
	return T;
}

int LConsecutiveOccurrenceValue(int T[] , int sizeR , int value)
{
	int MaxCount = 0 ;
	int currentCount = 0 ;

	for(short  i = 0; i < sizeR ; i++)
	{
		if(T[i] == value )
		{
			currentCount++;
		}
		else
			currentCount = 0;
		if(currentCount > MaxCount )
		{
			MaxCount = currentCount ;
		}
	}
	return MaxCount;
}


