/*
 * main.c
 *
 *  Created on: Nov 29, 2023
 *      Author: moham
 */

#include <stdio.h>

int calTime(int );

int main()
{
	int Temperature ;
	printf("Enter Current temperature : "),fflush(stdout);
	scanf("%d",&Temperature);
	printf("Heating time  : %d",calTime(Temperature));


	return 0;
}

int calTime(int val )
{
	switch(val)
	{
	case 0 ... 30 :
		return 7;
	case 31 ... 60:
		return 5;
	case 61 ... 90:
		return 3;
	case 91 ... 100 :
		return 1;
	default :
		return 0;
	}

}
