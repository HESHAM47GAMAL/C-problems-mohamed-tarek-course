/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

typedef struct numComplex
{
	int real;
	int imag;
}Complex;

Complex sumComplexNumberByValue(Complex , Complex); //pass by value take more memory

Complex sumComplexNumberByAddress(Complex * , Complex *); //pass by address take less memory

int main()
{
	Complex v1 , v2;
	printf("Enter real for n1 : "),fflush(stdout),  scanf("%d",&v1.real);
	printf("Enter imag for n1 : "),fflush(stdout),  scanf("%d",&v1.imag);

	printf("Enter real for n2 : "),fflush(stdout),  scanf("%d",&v2.real);
	printf("Enter imag for n2 : "),fflush(stdout),  scanf("%d",&v2.imag);



	Complex Result = sumComplexNumberByAddress(&v1,&v2);

	printf("Result of sum to complex number  %d %c %di",Result.real, ( (Result.imag>0)?'+':'-' ) ,( Result.imag > 0?Result.imag :Result.imag*-1) );

	return 0;
}

Complex sumComplexNumberByValue(Complex T1, Complex T2)
{
	Complex temp = {T1.real + T2.real , T1.imag + T2.imag};
	return temp;
}

Complex sumComplexNumberByAddress(Complex *T1, Complex *T2)
{
	Complex temp = {T1->real + T2->real , T1->imag + T2->imag };
	return temp ;
}

