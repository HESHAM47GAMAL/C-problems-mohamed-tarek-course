#include <stdio.h>

struct date
{
	int day ;
	int month;
	int year;
};

struct employee
{
	int age;
	int salary ;
	struct date D;
};

int main()
{

	struct employee E1={23,15000,{27,9,2000}} , * ptr_struct =&E1 ;
//	ptr_struct = &E1;
	printf("age = %d",(*ptr_struct).D.day);

	return 0;
}
