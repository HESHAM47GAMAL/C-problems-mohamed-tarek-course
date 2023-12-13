/*
 * main.c
 *
 *  Created on: Dec 10, 2023
 *      Author: moham
 */

#include <stdio.h>

void freqCharacter(char [] , int [] );

int main()
{
	char string [40] ={ };
	int freq[94] = { };
	printf("Enter string to get frequency of each character : "),fflush(stdout);
	gets(string);
	freqCharacter(string , freq);
	printf("frequency for exist characters : \n");
	for(short  i = 0 ; i < 94 ; i++)
	{
		if(freq[i] > 0)
		{
			printf("charcter %c repeated %d times\n",i+'!',freq[i]);
		}
	}



	return 0;
}

void freqCharacter(char T[] , int Tfreq[] )
{
	int i = 0 ;
	while(T[i] != '\0')
	{
		if(T[i] >= '!' && T[i] <= '~')
		{
			Tfreq[T[i] - '!']++;
		}
		i++;
	}
}
