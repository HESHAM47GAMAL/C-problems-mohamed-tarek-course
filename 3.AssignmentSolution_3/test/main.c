#include <stdio.h>


void InsertionSort( int * const  , short);

int main() {

    int R[]= {2 , 7 , 4 , 1 , 5 ,3};
    short sizeR = sizeof(R) / sizeof(R[0]);
    InsertionSort(R ,sizeR );
    printf ( "Sorted array by Selection : ");
    for(short i =0 ; i< sizeR ; i++)
        printf("%d ",R[i]);

    return 0;
}

void InsertionSort(int *const T, short size_R)
{
    for(short outer = 0 ; outer < size_R - 1 ; outer ++)
    {
        short MinIndex = outer ;
        for(short inner = outer + 1 ;  inner < size_R ; inner ++)
        {
            if(T[MinIndex] > T[inner])
                MinIndex = inner;
        }
        int temp = T[outer];
        T[outer] = T[MinIndex];
        T[MinIndex] = temp;
    }

}

