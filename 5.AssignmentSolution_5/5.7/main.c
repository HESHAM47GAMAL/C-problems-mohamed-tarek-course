/*
 * main.c
 *
 *  Created on: Dec 16, 2023
 *      Author: moham
 */

#include <stdio.h>

enum fan_Level {level_1 , level_2 , level_3 };

int main()
{
	enum fan_Level fan_1 = level_1 ;

	printf("level 1 : %d\n",level_1);
	if(fan_1 == level_1)
	{
		fan_1 = level_2;
	}
	printf("level 2 : %d\n",level_2);
	if(fan_1 == level_2)
	{
		fan_1 = level_3;
	}
	printf("level 3 : %d\n",level_3);

	return 0;
}





