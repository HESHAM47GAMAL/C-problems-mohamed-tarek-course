/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>
#include<math.h>
#define True 1
#define False 0

void FindPrimes(int , int);
char IsPrime(int);

int main()
{
	int startInterval , endInterval ;
	printf("Enter start of Interval : "),fflush(stdout);
	scanf("%d",&startInterval);
	printf("Enter end of Interval : "),fflush(stdout);
	scanf("%d",&endInterval);
	FindPrimes(startInterval,endInterval);

	return 0;
}

void FindPrimes(int num1, int num2)
{
	printf("Prime number founded : "),fflush(stdout);
	char anyPrimeFound = False;
	for(int i = num1 ; i <= num2 ; i++)
	{
		if(i == 0 || i == 1)
			continue;
		if( IsPrime(i) == True )
		{
			printf("%d\t",i),fflush(stdout);
			anyPrimeFound = True;
		}
	}
	if(anyPrimeFound == False)
		printf("No primes Founded");

}

char IsPrime(int number)
{

	short div = sqrt(number);
	for(short counter = 2 ; counter <= div ; counter++)
	{
		if(number % counter == 0)
		{
			return False;
		}
	}
	return True;

}
