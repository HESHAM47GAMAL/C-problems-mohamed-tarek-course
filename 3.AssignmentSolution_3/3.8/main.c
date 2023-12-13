/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: moham
 */
#include <stdio.h>

#define SeriesLength 10

void  SeriesPower3(unsigned short *);

int main()
{
	unsigned short SeriesR [SeriesLength] = { };
	SeriesPower3(SeriesR);
	short Index;
	printf("Enter number index for Series (1 :10): "),fflush(stdout);
	scanf("%hi",&Index);
	printf("Value of index %hi in series = %d",Index ,SeriesR[Index - 1] );


	return 0;
}


void  SeriesPower3(unsigned short * T)
{
	unsigned short CurrentSeriesvalue = 1;
	for(char I = 1 ; I <= SeriesLength ;I++ )
	{
		T[I - 1 ] = CurrentSeriesvalue;
		CurrentSeriesvalue *= 3 ;
	}

}

