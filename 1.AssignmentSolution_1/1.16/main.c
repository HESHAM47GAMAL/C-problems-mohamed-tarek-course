/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */


#include <stdio.h>

int main()
{
	int num  = -56;
//	printf("Enter number want to reverse : ");
//	fflush(stdout);
//	scanf("%d",&num);
	int reversed = 0;
	while(num != 0 )
	{
		reversed *= 10;
		reversed += num%10;
		num/= 10;
	}
	printf("reversed number  = %d",reversed);

	return 0;
}
