/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

typedef struct FullName
{
	char Fname[20];
	char Lname[20];
}FullName;

typedef struct student
{
	FullName name;
	int Id;
	char grade;
}Student;

void takeInfoStudent(Student * , int);

void DisplayStudentInfo(Student * , int);

int main()
{

	Student liststudent[10];
	takeInfoStudent(liststudent , 10);
	DisplayStudentInfo(liststudent , 10);


	return 0;
}

void takeInfoStudent(Student *T , int Size)
{
	printf("Currently Will fill Information for student\n"),fflush(stdout);
	for(short I = 0 ; I < Size ; I++)
	{
		printf("Enter First and last name respectively for student %d : ",I+1),fflush(stdout), scanf(" %s %s",&T[I].name.Fname,&T[I].name.Lname);
		printf("Enter Id for student %d : ",I+1),fflush(stdout), scanf("%d",&T[I].Id);
		printf("Enter grade for student %d : ",I+1),fflush(stdout), scanf("%d",&T[I].grade);
	}


}

void DisplayStudentInfo(Student *T , int Size)
{
	printf("All info for student [\n"),fflush(stdout);

	for(short i =0 ; i < Size ; i++)
	{
		printf("Name : %s %s\tId : %d\tGrade : %d\n",T[i].name.Fname,T[i].name.Lname,T[i].Id,T[i].grade);
	}
	printf("]");

}



