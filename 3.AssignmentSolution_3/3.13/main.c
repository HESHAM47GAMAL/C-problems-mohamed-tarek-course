/*
 * main.c
 *
 *  Created on: Dec 8, 2023
 *      Author: moham
 */

#include <stdio.h>


void RemainAlphabetOnly(char []);

int main()
{
	char String [50];
	printf("Enter string to remove all characters except alphabet  : "),fflush(stdout);
	gets(String);
	RemainAlphabetOnly(String);
	printf("String after edit : %s",String);


	return 0;
}

void RemainAlphabetOnly(char T[])
{
	int I = 0;
	while(T[I] != '\0')
	{
		if (! ( (T[I] >= 'a' && T[I] <= 'z') || (T[I] >= 'A' && T[I] <= 'Z') ) )
		{
			int NewI = I--;
			while(T[NewI] != '\0')
			{
				T[NewI] = T[NewI + 1];
				NewI++;
			}
		}
		I++;
	}
}

