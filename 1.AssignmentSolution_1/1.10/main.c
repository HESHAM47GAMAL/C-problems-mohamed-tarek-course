
/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>

int main()
{
	int num1, num2;
	char op;
	printf("Enter Num 1 : ");
	fflush(stdout);
	scanf("%d", &num1);
	printf("Enter Num 2 : ");
	fflush(stdout);
	scanf("%d", &num2);
	fflush(stdin);
	printf("Operation : ");
	fflush(stdout);
	scanf("%c", &op);
	switch(op)
	{

	case '+':
		printf("%d + %d = %d\n",num1,num2,num1 + num2);
		fflush(stdout);
		break ;
	case '-':
		printf("%d - %d = %d\n",num1,num2,num1 - num2);
		fflush(stdout);
		break ;
	case '*':
		printf("%d * %d = %d\n",num1,num2,num1 * num2);
		fflush(stdout);
		break;
	case '/':
		if(num2 != 0)
			printf("%d / %d = %d\n",num1,num2,num1 / num2);
		else
			printf("exception Can't divide by \"0\"");
		fflush(stdout);
		break;
	default :
		printf("Can't handle this ");
	}

	return 0;
}
