/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

void Ispower2(int);

int main()
{
	int num ;
	printf("Enter number to check power of 2 : "),fflush(stdout);
	scanf("%d",&num);

	Ispower2(num);

	return 0;
}

void Ispower2(int n)
{
	if(n == 0)
		printf("Not power of 2");
	else if(n == 1)
		printf("power of 2");

	else
		while(1)
		{
			if(n % 2 == 0)
			{
				if(n == 2)
				{
					printf("power of 2");
					return;
				}
				n /= 2;
			}
			else
			{
				printf("Not power of 2");
				return ;

			}
		}

}
