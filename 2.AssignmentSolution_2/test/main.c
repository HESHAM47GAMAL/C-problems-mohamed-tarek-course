/**************************************************************************************************
 Name        : ex17.c
 Author      : Mohamed Tarek
 Description : Assignment 2 - Ex17
 **************************************************************************************************/

#include <stdio.h>
#include <string.h>

union Data
{
	int i ;
	float f ;
	char C;
};

int main()
{
	union Data D1 ;
	D1.i = 50;
	D1.f = 220.5;
	D1.C = 'f';
	printf("%d\n",D1.i),fflush(stdout);
	printf("%f\n",D1.f),fflush(stdout);
	printf("%s\n",D1.C),fflush(stdout);
	printf("union size = %d",sizeof(D1));

	return 0;
}
