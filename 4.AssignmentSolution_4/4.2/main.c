/*
 * main.c
 *
 *  Created on: Dec 13, 2023
 *      Author: moham
 */

#include <stdio.h>

int strLength(const char [] );

int main()
{
	char String [30] = {};
	int result ;
	printf("Enter string to get length : " ),fflush(stdout);
	gets(String);

	result = strLength(String);
	if(result == 0 )
	{
		printf("Length = 0 , SO check function implement");
	}
	else
		printf("Length of string : %d",result);

	return 0;
}

int strLength(const char * T )
{
	int length = 0 ;

	while(*T != '\0')
		length++, T++;

	return  length;
}




