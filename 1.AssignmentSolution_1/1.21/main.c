/*
 * main.c
 *
 *  Created on: Nov 23, 2023
 *      Author: moham
 */

#include <stdio.h>


/*
 * Solution 1
 */
//int main()
//{
//	int level ;
//	printf("Enter level of inverted Half primid : ");
//	fflush(stdout);
//	scanf("%d",&level);
//	for(short i = 1 ; i <= level ;i++)
//	{
//		for(int spaces1 = i -1 ; spaces1 >=1 ; spaces1--)
//		{
//			printf(" "),fflush(stdout);
//		}
//		printf("*"),fflush(stdout);
//		for(int spaces2 = (level *2) - (2*i) ; spaces2 >= 1 ; spaces2--)
//		{
//			printf(" "),fflush(stdout);
//		}
//		printf("*"),fflush(stdout);
//		printf("\n"),fflush(stdout);/*for new line*/
//
//	}
//	for(short i = level ; i >= 1 ;i--)
//		{
//			for(int spaces1 = i -1 ; spaces1 >=1 ; spaces1--)
//			{
//				printf(" "),fflush(stdout);
//			}
//			printf("*"),fflush(stdout);
//			for(int spaces2 = (level *2) - (2*i) ; spaces2 >= 1 ; spaces2--)
//			{
//				printf(" "),fflush(stdout);
//			}
//			printf("*"),fflush(stdout);
//			printf("\n"),fflush(stdout);/*for new line*/
//
//		}
//
//	return 0;
//}


/*
 * Solution 2
 */

int main()
{

	int Row_Col ;
	printf("Enter size : ");
	fflush(stdout);
	scanf("%d", &Row_Col);
	for(short row = 0 ; row < Row_Col ;row++)
	{
		for(short col = 0 ; col < Row_Col ;col++ )
		{
			if(row == col || col == Row_Col - row - 1)
			{
				printf("*"), fflush(stdout);
			}
			else
				printf(" "), fflush(stdout);
		}
		printf("\n"), fflush(stdout);
	}
	return 0;
}

