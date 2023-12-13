/*
 * main.c
 *
 *  Created on: Nov 26, 2023
 *      Author: moham
 */

#include <stdio.h>

void Isalpha(char T)
{
	if( (T >= 'A' && T <= 'Z') || ( T >= 'a' && T <= 'z' ) )
		printf("Is Alpha");
	else
		printf("Not Alpha");
}

int main()
{

	char character;
	printf("Enter character that check if alphabet : "), fflush(stdout);
	scanf("%c",&character);
	Isalpha(character);
	return 0;
}
