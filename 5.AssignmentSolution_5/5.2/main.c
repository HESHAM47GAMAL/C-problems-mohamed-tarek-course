/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

struct Distance
{
	int foot ;
	int inch ;
};

int main()
{

	struct Distance D1 , D2 , sumDistance ;
	printf("Enter Data for first instance : \n"),fflush(stdout);
	printf("Enter foot : "),fflush(stdout), scanf("%d",&D1.foot);
	printf("Enter inch : "),fflush(stdout),  scanf("%d",&D1.inch);

	printf("Enter Data for second instance : \n"),fflush(stdout);
	printf("Enter foot : "),fflush(stdout),  scanf("%d",&D2.foot);
	printf("Enter inch : "),fflush(stdout),  scanf("%d",&D2.inch);

	sumDistance.foot = D1.foot + D2.foot ;
	sumDistance.inch = D1.inch + D2.inch ;

	if(sumDistance.inch >= 12)
	{
		sumDistance.inch -= 12;
		sumDistance.foot ++;
	}

	printf("Result distance foot : %d , inch :%d",sumDistance.foot,sumDistance.inch);


	return 0;
}




