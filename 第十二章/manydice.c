/* manydice.c -- 多次掷骰子的模拟程序 */
/* 与diceroll.c一起编译 */
#include <stdio.h>
#include <stdlib.h>			/* 为库函数srand()提供原型 */
#include <time.h>			/* 为time()提供原型 */
#include "diceroll.h"		/* 为roll_n_dice提供原型，为roll_count变量提供声明 */

int main(void)
{
	int dice, roll;
	int sides;
	int status;
	
	srand((unsigned int) time(0));			/* 随机种子 */
	printf("Enter the number of sides per die, 0 to stop.\n");
	while(scanf("%d", &sides)==1&&sides>0)
	{
		printf("How many dice?\n");
		if((status=scanf("%d", &dice))!=1)
			break;			/* 退出循环  */
		else
		{
			printf("You should have entered an integer.");
			printf(" Let's begin again.\n'");
			while(getchar()!='\n')
				continue;		/* 处理错误的输入 */
			printf("How many sides? Enter 0 to stop.\n");
			continue;	
		}	
	roll = roll_n_dice(dice, sides);
	printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
	printf("How many sides? Enter 0 to stop.\n");		
	}
	printf("The rollem() function was called %d times.\n", roll_count);		/* 使用外部变量 */
	
	printf("GOOD FORTUNE TO YOU!\n");
	
	return 0; 	
} 


