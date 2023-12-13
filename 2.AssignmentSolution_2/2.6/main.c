/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include<stdio.h>

/*Declare function to convert any low case to upper case */
void ToupperCase(char * const );

int main()
{
	char InputCharacter ;
	printf("Enter character to convert from low case to upper case : "),fflush(stdout);
	scanf(" %c",&InputCharacter) ; /*Putting space before "%c" to remove any white spaces like \t \n space*/
	ToupperCase(&InputCharacter);

	return 0;
}


void ToupperCase(char * const ptrChar)
{
	if(*ptrChar >= 'a' && *ptrChar <= 'z')
		printf("letter before : %c after : %c",*ptrChar , *ptrChar - 32);
	else
		printf("Invalid input ");

}
