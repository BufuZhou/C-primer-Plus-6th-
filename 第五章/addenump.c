/* addenump.c -- 几种常见的语句 */
#include <stdio.h>
int main(void)			/* 计算前20个整数的和 */ 
{
	int count, sum, days;		/* 声明  			  */
	
	printf("Please input the days: ");
	scanf("%d", &days);
	if(days>0)
	{
		count = 0;		/* 表达式语句 */
		sum = 0;
		while(count++<days)
			sum = sum + count * count;
		printf("sum = %d\n", sum);
	}	
	return 0; 
} 
