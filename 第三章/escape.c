/* escape.c -- 实用转移序列 */
#include <stdio.h>
int main(void)
{
	float salary;
	
	printf("\aEnter your desired monthly salary:");		/* 1*/
	printf(" $_______\b\b\b\b\b\b\b");					/* 2 */
	scanf("%f", &salary);
	printf("\n\t$%.2f a month a $%.2f a year.", salary, salary*12.0);
	printf("\rGee!\n");
	
	return 0;
 } 
 
