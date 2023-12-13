/*
 * main.cpp
 *
 *  Created on: Dec 4, 2023
 *      Author: moham
 */


#include <iostream>

typedef enum {AscendingSort  = 0  , DescendingSort = 1}SortType;
typedef enum {True = 1 , False = 0}Bool;

void SelectionSort(int * const , short ,SortType);

void BubbleSort(int * const , short , SortType  );

void InsertionSort(int * ,short ,SortType);

void mergeS(int [], int, int, int);

void mergeSort(int[], int, int);

int main() {

    int R[]= {2 , 7 , 4 , 1 , 5 ,3};
    short sizeR = sizeof(R) / sizeof(R[0]);
//    SelectionSort(R ,sizeR , AscendingSort );
//    std::cout << "Sorted array Ascending by Selection : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";
//
//    SelectionSort(R ,sizeR , DescendingSort );
//    std::cout << "\n\nSorted array Descending by Selection : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";

//    BubbleSort(R , sizeR  , AscendingSort );
//    std::cout << "\n\nSorted array Ascending by Bubble : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";
//
//    BubbleSort(R , sizeR  , DescendingSort );
//    std::cout << "\n\nSorted array Descending by Bubble : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";

//    InsertionSort(R , sizeR  , AscendingSort );
//    std::cout << "\n\nSorted array Ascending by Insertion : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";
//
//    InsertionSort(R , sizeR  , DescendingSort );
//    std::cout << "\n\nSorted array Descending by Insertion : ";
//    for(short i =0 ; i< sizeR ; i++)
//        std::cout << R[i] << " ";
//
    mergeSort(R , 0, sizeR-1   );
    std::cout << "\n\nSorted array Ascending by Insertion : ";
    for(short i =0 ; i< sizeR ; i++)
        std::cout << R[i] << " ";


    return 0;
}

void SelectionSort(int *const T, short size_R , SortType As_Des)
{
    for(short i = 0 ; i < size_R -1 ; i++)
    {
        int MinIndex = i;
        if ( As_Des == AscendingSort)
        {
            for(short j = i +1  ; j <size_R ; j++)
            {
                if(T[MinIndex] > T[j])
                    MinIndex = j;
            }
        }
        else if(As_Des == DescendingSort)
        {
            for(short j = i +1  ; j <size_R ; j++)
            {
                if(T[MinIndex] < T[j])
                    MinIndex = j;
            }
        }
        int temp = T[i];
        T[i] = T[MinIndex];
        T[MinIndex]= temp;
    }
}



void BubbleSort(int * const T , short size_R , SortType As_Des)
{
    for(short i = 1 ;  i < size_R ; i++)
    {
        Bool IsSwapped = False ;
        if(As_Des == AscendingSort)
        {
            for(short j =  0 ; j < size_R  - i ; j ++)
            {
                if(T[j] > T[j+1])
                {
                    IsSwapped = True ;
                    int temp = T[j];
                    T[j] = T[j+1];
                    T[j+1] = temp;
                }
            }
        }
        else if(As_Des ==  DescendingSort)
        {
            for(short j =  0 ; j < size_R  - i ; j ++)
            {
                if(T[j] < T[j+1])
                {
                    IsSwapped = True ;
                    int temp = T[j];
                    T[j] = T[j+1];
                    T[j+1] = temp;
                }
            }
        }
        if(IsSwapped == False)
            break;
    }

}


void InsertionSort(int * T ,short size_R ,SortType As_Des)
{
    for(short i = 1 ; i < size_R ; i++)
    {
        int value = T[i];
        short hole = i;
        if(As_Des == AscendingSort)
        {

            while(hole >0 && T[hole - 1] > value)
            {
                T[hole]  = T[hole - 1];
                hole--;
            }
        }
        else if (As_Des == DescendingSort)
        {
            while(hole >0 && T[hole - 1] < value)
            {
                T[hole]  = T[hole - 1];
                hole--;
            }
        }
        T[hole]  = value;
    }

}



void mergeSort(int T[] , int L, int R)
{
	if (L < R)
	{
		int Mid = L + (R - L) / 2; // To avoid overflow
		mergeSort(T,L, Mid);
		mergeSort(T,Mid + 1,R);
		mergeS(T, L, Mid, R);
	}
}


void mergeS(int T[], int L, int Mid, int R)
{
	int i, j, k;
	int Lsize = Mid - L + 1;
	int Rsize = R - Mid;

	/* create new array Left and Right*/
	int Lsort[Lsize], Rsort[Rsize];

	/*copy part of sorted left*/
	for (i = 0; i < Lsize; i++)
	{
		Lsort[i] = T[L + i];
	}
	/*copy part of sorted right*/
	for (j = 0; j < Rsize; j++)
	{
		Rsort[j] = T[Mid + j];
	}
	i = 0; //Initialize index to start of first sorted subarray
	j = 0; //Initialize index to start of second sorted subarray
	k = L; //Initialize index to start of sorted subarray
	while (i < Lsize && j < Rsize)
	{
		if (Lsort[i] < Rsort[j])
		{
			T[k] = Lsort[i];
			i++; // go to next index of first sorted subarray
		}
		else if (Rsort[i] < Lsort[j])
		{
			T[k] = Rsort[j];
			j++; // go to next index of second sorted subarray
		}
		k++; // go to next index of sorted subarray
	}
	/*Copy remaining element of first sorted subarray*/
	while (i < Lsize)
	{
		T[k] = Lsort[i];
		i++, k++;
	}
	/*Copy remaining element of second sorted subarray*/
	while (j < Rsize)
	{
		T[k] = Rsort[i];
		j++, k++;
	}

}


