/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

char power3(int);

int main()
{
	int num;
	printf("Enter number to check is power of 3 : "),fflush(stdout);
	scanf("%d",&num);
	char res = power3(num);
	if(res == 1)
		printf("Is power of 3");
	else
		printf("Not power of 3");



	return 0;
}

char power3(int N)
{
	if(N == 0) //should Handle case if N = 0 ---> lead to infinity loop
		return 0;
	while(1)
	{
		if(N % 3 == 0)
		{
			if(N == 3)
				return 1;
			N /= 3;
		}
		else
			return 0;
	}
}

