
/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */


#include <stdio.h>
#define PI 3.14

int main()

{
	double R ;
	printf("Enter raduis of circle : ");
	fflush(stdout);
	scanf("%lf",&R);
	double Area = PI * R*R;
	double Circumference = 2 * PI * R;
	printf("Circumference  : %lf\nArea : %lf",Circumference, Area);
	return 0;
}

