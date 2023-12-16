/*
 * main.c
 *
 *  Created on: Dec 15, 2023
 *      Author: moham
 */

#include <stdio.h>

void pointerSwap(int ** , int **);

int main()
{
	void (*ptr_func)(int** , int **);
	ptr_func = pointerSwap;
	int x = 5 , y =10;
	int *ptr_x , *ptr_y;
	ptr_x = &x;
	ptr_y = &y;
	printf("Before pointer change\n");
	printf("ptr_x point to value : %d\n",*ptr_x);
	printf("ptr_y point to value : %d\n",*ptr_y);

	(*ptr_func)(&ptr_x,&ptr_y);

	printf("after pointer change\n");
	printf("ptr_x point to value : %d\n",*ptr_x);
	printf("ptr_y point to value : %d\n",*ptr_y);

	return 0;
}

void pointerSwap(int **T1 , int **T2)
{
	int *ptr_temp = *T1 ;
	*T1 = *T2 ;
	*T2 = ptr_temp;
}




