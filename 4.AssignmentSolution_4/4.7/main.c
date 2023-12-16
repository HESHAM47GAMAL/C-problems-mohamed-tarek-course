/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>

void swapXOR(int * , int  *);

int main()
{
	int X = 5 , Y =10;
	void(*ptr_func) (int* , int*);
	ptr_func = swapXOR;
	printf("X : %d , Y: %d before swap\n",X,Y);

//	ptr_func(&X,&Y);
	// OR
	(*ptr_func)(&X,&Y);

	printf("X : %d , Y: %d after swap",X,Y);


	return 0;
}


void swapXOR(int *T1 , int  *T2)
{
	*T1 = *T1 ^ *T2 ;
	*T2 = *T1 ^ *T2 ;
	*T1 = *T1 ^ *T2 ;
}

