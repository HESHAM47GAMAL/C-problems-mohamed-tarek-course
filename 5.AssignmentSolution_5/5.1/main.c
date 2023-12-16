/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

struct student
{
	char name [30];
	int roll ;
	float marks ;
}s;


int main()
{
	printf("Enter your information :\n"),fflush(stdout);

	printf("Enter your name : "),fflush(stdout);
	gets(s.name);

	printf("Enter your roll : "),fflush(stdout);
	scanf("%d",&s.roll);

	printf("Enter your marks : "),fflush(stdout);
	scanf("%f",&s.marks);

	printf("Display info : \n"),fflush(stdout);
	printf("name : %s\n",s.name),fflush(stdout);
	printf("roll number : %d\n",s.roll),fflush(stdout);
	printf("marks : %0.1f",s.marks),fflush(stdout);

	return 0;
}

