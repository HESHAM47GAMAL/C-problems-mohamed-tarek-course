#include <stdio.h>

int main()
{
	int num1 , num2 ;
	printf("Enter first num : ");
	fflush(stdout);
	scanf("%d" ,&num1);
	printf("Enter second num : ");
	fflush(stdout);
	scanf("%d",&num2);
	int result = (num1 + num2) *3 -10;
	printf("Result = %d",result);
	fflush(stdout);

	return 0;
}

