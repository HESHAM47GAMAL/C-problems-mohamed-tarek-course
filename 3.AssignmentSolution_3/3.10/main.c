/*
 * main.c
 *
 *  Created on: Dec 2, 2023
 *      Author: moham
 */

#include <stdio.h>
#define NullChar '\0'

void convertUpperOnly(char *);

int main ()
{
	char String [30]= {};
	printf("Enter string to convert only upper latter to lower : "),fflush(stdout);
	gets(String);
	convertUpperOnly(String);
	printf("converted string : %s",String);


	return 0;
}

void convertUpperOnly(char *S)
{
	while(*S != NullChar)
	{
		if(*S >= 'A' && *S <= 'Z')
		{
			*S += 32;
		}
		S++;

	}

}

