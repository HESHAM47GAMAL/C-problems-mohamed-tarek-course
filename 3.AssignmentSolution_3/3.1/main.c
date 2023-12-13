

#include <stdio.h>

int SummationR(int  , int *);

int main()
{
	int R[] = {1,2,3,4};
	short Rsize = sizeof(R) / sizeof(R[0]);
	printf("Sum of array : %d",SummationR(Rsize , R));

	return 0;
}

int SummationR(int size , int *ptr_array)
{
	int sum = 0 ;
	for(short i = 0 ; i < size ; i++)
	{
		sum += i[ptr_array];
	}
	return sum;

}

