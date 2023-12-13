/*
 * main.c
 *
 *  Created on: Nov 21, 2023
 *      Author: moham
 */

#include <stdio.h>
#include <math.h>
//int maxValue(int n1 ,int n2  );




int main(void)
{

	int R[3][4]= { {1,2,3,4} , {5,6,7,8} , {9,10,11,12} };

	printf("%p %p %p %p %p %p",R ,&R+1 ,R+1,R[0]+1 ,&R[0]+1,&R[0][0]+1);

	return 0;

}



