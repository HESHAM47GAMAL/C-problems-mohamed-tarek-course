/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

typedef struct Time
{
	int sec;
	int min;
	int hour;
}Time;

Time calTimeDiff(Time *, Time *);

int main()
{
	Time V1 = {11 , 30 ,9}, V2 ={29,21,8};
	printf("Please enter first time : second , minute , hour with respect order :"),fflush(stdout);
	scanf(" %d %d %d", &V1.sec , &V1.min , &V1.hour);

	printf("Please enter second time : second , minute , hour with respect order :"),fflush(stdout);
	scanf(" %d %d %d", &V2.sec , &V2.min , &V2.hour);

	Time result = calTimeDiff(&V1 ,&V2);

	printf("%d : %d : %d", result.sec , result.min , result.hour);


	return 0;
}

/*
 * First implement Idea
 */
//Time calTimeDiff(Time *T1, Time *T2)
//{
//	Time res;
//	res.sec = T1->sec - T2->sec ;
//
//	if(res.sec < 0 )
//	{
//		res.min = T1->min - T2->min -1;
//		res.sec += 60;
//	}
//	else
//		res.min = T1->min - T2->min ;
//
//	if(res.min < 0)
//	{
//		res.hour = T1->hour - T2->hour -1;
//		res.min += 60;
//	}
//	else
//		res.hour = T1->hour - T2->hour;
//
//	return res;
//}

/*
 * Second implement Idea
 */

Time calTimeDiff(Time *T1, Time *T2)
{
	Time res;
	if(T2->sec > T1->sec)
	{
		T1->min--;
		T1->sec += 60;
	}
	res.sec = T1->sec - T2->sec ;

	if(T2->min > T1->min)
	{
		T1->hour--;
		T1->min += 60 ;
	}
	res.min = T1->min - T2->min ;
	res.hour = T1->hour - T2->hour ;
	return res ;
}




