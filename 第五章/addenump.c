/* addenump.c -- ���ֳ�������� */
#include <stdio.h>
int main(void)			/* ����ǰ20�������ĺ� */ 
{
	int count, sum, days;		/* ����  			  */
	
	printf("Please input the days: ");
	scanf("%d", &days);
	if(days>0)
	{
		count = 0;		/* ���ʽ��� */
		sum = 0;
		while(count++<days)
			sum = sum + count * count;
		printf("sum = %d\n", sum);
	}	
	return 0; 
} 
