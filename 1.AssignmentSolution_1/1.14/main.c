/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */
#include <stdio.h>

int main()
{
	char alpha = 'A';
	printf("%c ", alpha );
	fflush(stdout);
	while(1)
	{
		alpha++;
		printf("%c ", alpha );
		fflush(stdout);
		if(alpha == 'Z')
			break;

	}

	return 0;
}

