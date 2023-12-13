/*
 * main.c
 *
 *  Created on: Nov 27, 2023
 *      Author: moham
 */


#include <stdio.h>

#define No_Error_valid 1
#define Error_Invalid 0

/*Declartion of function and declaration don't need variable name and can write any name here and
 write in definition another name for variable and will work correctly*/
void  operation(double , double , char , char *);

int main()
{
	double num1 , num2 ;
	char op  , IsValidInput = No_Error_valid;
	printf("Enter num1 : "),fflush(stdout);
	scanf("%lf",&num1);
	printf("Enter num2 : "),fflush(stdout);
	scanf("%lf",&num2);
	printf("Enter Operation(+ , - , * , /) : ") ,fflush(stdout);
	scanf(" %c",&op);  /*Existing space before %c tell scanf function skip any leading whitespace character */

	operation(num1 , num2 , op , &IsValidInput);
	if(IsValidInput == Error_Invalid)
		printf("Invalid Operation");






	return 0;
}

void  operation(double N1, double N2 , char Operation , char *VilidPtr)
{

	switch(Operation)
			{
			case '+':
				printf("%lf + %lf = %lf",N1 ,N2 ,N1 + N2),fflush(stdout);
				break;
			case '-':
				printf("%lf - %lf = %lf",N1 ,N2 ,N1 - N2),fflush(stdout);
				break;
			case '*':
				printf("%lf * %lf = %lf",N1 ,N2 ,N1 * N2),fflush(stdout);
				break;
			case '/':
				if(N2 == 0)
					printf("Invalid to divide number by \" Zero(0) \""),fflush(stdout);
				else
					printf("%lf / %lf = %lf",N1 ,N2 ,N1 / N2),fflush(stdout);
				break;

			default :
				*VilidPtr = Error_Invalid;
			}

}
