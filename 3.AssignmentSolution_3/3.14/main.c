/*
 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: moham
 */

#include <stdio.h>

int GetStringLength(char []);

void reverseString(char [] , int);

int main()
{

	char String [50]={ };
	printf("Enter string to reverse : "),fflush(stdout);
	gets(String);
	reverseString(String ,GetStringLength (String) );
	printf("String after reverse : %s",String);


	return 0;
}

int GetStringLength(char T[])
{
	int counter = 0 ;

	for( ; T[counter] != '\0' ; counter++);
	return counter ;
}


void reverseString(char T[] , int SizeR)
{
	int mid = SizeR/2;
	for(short i = 0 ; i < mid ; i++)
	{
		int temp = T[i];
		T[i] = T[SizeR - 1 - i] ;
		T[SizeR - 1 - i]  = temp;
	}

}


