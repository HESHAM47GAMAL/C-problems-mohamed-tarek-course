/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: moham
 */
#include <stdio.h>

#define SeriesLength 100

void SeriesP2(int [] );

int main ()
{
	int SeriesR[SeriesLength] = { } ;
	SeriesP2(SeriesR);
	short Index;
	printf("Enter number index for Series (1 :100): "),fflush(stdout);
	scanf("%hi",&Index);
	printf("Value of index %hi in series = %d",Index ,SeriesR[Index - 1] );



	return 0;
}

void SeriesP2(int T[])
{
	long  series_index = 1;
	for(short i = 1 ; i <= SeriesLength ; i++)
	{
		*T = series_index ;
		series_index += 2;
		T++;
	}

}

