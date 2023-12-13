/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>

int main()
{
	int level ;
	printf("Enter level of Half primid : ");
	fflush(stdout);
	scanf("%d",&level);
	for(short i = 1; i <= level ; i++)
	{
		for(short starts = 1 ; starts <= i ; starts++)
		{
			printf("*");
			fflush(stdout);

		}
		printf("\n");
		fflush(stdout);
	}

	return 0;
}

