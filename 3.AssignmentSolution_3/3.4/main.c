/*
 * main.c
 *
 *  Created on: Dec 7, 2023
 *      Author: moham
 */
#include <stdio.h>

void SelectionSort(int [] , int);
void Swap(int *, int *);

int main()
{
	int R[]= {20,14,31,87,6 ,24};
	int sizeR = sizeof(R)/ sizeof(R[0]);

	SelectionSort(R , sizeR);
	printf("After apply Selection sort : ");
	for(short i = 0 ; i < sizeR ; i++)
		printf("%d ", R[i]);

	return 0;
}

void SelectionSort(int T[] , int SizeR)
{
	for(short i = 0 ; i < SizeR - 1; i++)
	{
		int indexMinV = i ;
		for(short j = i +1 ; j < SizeR ; j++)
		{
			if(T[j] <= T[indexMinV])
			{
				indexMinV = j ;
			}
		}
		Swap(&T[i],&T[indexMinV]);

	}
}

void Swap(int *V1, int *V2)
{
	int temp = *V1;
	*V1 = *V2;
	*V2 = temp;
}
