/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>

char * getLast2Character(char * );
char  String_result [4];
#define Null (void *) 0

int main()
{
	char String_input [30] = {};
	char *ptr_String_result = Null;

	printf("Enter string you want : "),fflush(stdout);
	gets(String_input);
	char * (*ptr_func) (char *);
	ptr_func = getLast2Character;
	ptr_String_result = (*ptr_func)(String_input);
	printf("last two character reversed : %s",ptr_String_result);


	return 0;
}

char * getLast2Character(char *T )
{
	int Count = 0;
	while(T[Count] != '\0')
		Count++;
	String_result[0] = T[--Count];
	String_result[1] = ' ';
	String_result[2] = T[--Count];
	String_result[3] = '\0';

	return String_result ;
}


