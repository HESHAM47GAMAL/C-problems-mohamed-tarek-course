/**************************************************************************************************
 Name        : ex11.c
 Author      : Mohamed Tarek
 Description : Assignment 4 - Ex 11
 **************************************************************************************************/
#include <stdio.h>

int main(void)
{
	int num1 =  0xFFFFAAAA;
	int num2 = 0;

	//point to the first integer using pointer to short to access 2-bytes
	short * ptr1 = (short *)&num1;

	//point to the second integer using pointer to short to access 2-bytes
	short * ptr2 = (short *)&num2;

	// make the first 2-bytes in num2 equals to the second two bytes of num1
	ptr2[0] = ptr1[1];

	// make the second 2-bytes in num2 equals to the first two bytes of num1
	ptr2[1] = ptr1[0];

	printf("The value after swapping %x",num2);

	return 0;
}
