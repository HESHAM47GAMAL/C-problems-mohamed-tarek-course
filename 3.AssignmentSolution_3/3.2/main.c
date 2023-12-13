/*
 * main.c
 *
 *  Created on: Dec 1, 2023
 *      Author: moham
 */

#include <stdio.h>
#define NullCharacter '\0'

typedef enum
{
	False = 0 ,
	True = 1
}bool;


bool IsCharacterRepetead(const char *);

int main()
{

	char str [20] = "hesham  ";
	printf("Enter string to check if any character repeated : "),fflush(stdout);
	gets(str);

	bool result = IsCharacterRepetead(str);
	if(result == False )
		printf("No Characters Repeated"),fflush(stdout);
	else
		printf("Characters Repeated"),fflush(stdout);



	return 0;
}

bool IsCharacterRepetead(const char *ptr_str)
{
	short character[94] = {};//Here Initialize all element with zero
	bool state = False;
	while(NullCharacter != *ptr_str)
	{
		if(*ptr_str < 33 ) // to check is there any character it's value lower than character  "!" escape it
		{
			ptr_str++;
			continue;
		}

		character[ *ptr_str - 33 ]++;
		if(character[ *ptr_str - 33 ] > 1 )
		{
			state = True;
			break;
		}
		ptr_str++;
	}
//	for(short it = 0 ; it <94 ;it++)
//	{
//		if(character[it] != 0 )
//		{
//			state = True;
//			break;
//		}
//	}
	return state;
}

