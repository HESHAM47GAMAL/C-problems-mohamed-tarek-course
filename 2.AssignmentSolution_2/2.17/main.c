/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

int maxXOR(int , int);

int main()
{
	int start , end;
	printf("Enter start : "),fflush(stdout);
	scanf("%d",&start);
	printf("Enter end : "),fflush(stdout);
	scanf("%d",&end);
	printf("Max = %d",maxXOR(start , end) );


	return 0;
}

int maxXOR(int n1, int n2)
{
	int max = 0;
	for(short i = n1 ; i <= n2 ;i++ )
	{
		for(short j = i ; j <= n2 ;j++)
		{
			printf("%d ^ %d = %d\n",i , j , i^j),fflush(stdout);
			if( (i^j) >max)
				max =i^j;
		}
	}
	return max;
}

