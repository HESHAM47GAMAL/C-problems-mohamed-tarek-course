/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

/*Function declare and don't need to give argument name only need argument type*/
short IsOddEven(int);

int main ()
{
	int num ;
	printf("Enter number to check \"Even\" or \"Odd\" : "), fflush(stdout);
	scanf("%d", &num);
	printf("Result  = %s",(IsOddEven(num) == 0? "Even" : "Odd" ) );


	return 0;
}

short IsOddEven(int num)
{
	if(num %2 == 0) // Even
		return 0;
	else
		return 1;
}
