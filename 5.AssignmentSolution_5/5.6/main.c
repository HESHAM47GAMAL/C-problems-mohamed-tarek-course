/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

union family_name
{
	char first_name[30];
	char last_name[30];
};

int main()
{
	union family_name Fn1 ;
	printf("Enter first name : "),fflush(stdout);
	scanf("%s",Fn1.first_name);

	printf("content of last name : %s \n",Fn1.last_name);

	printf("size of union : %d",sizeof(union family_name));



	return 0;
}




