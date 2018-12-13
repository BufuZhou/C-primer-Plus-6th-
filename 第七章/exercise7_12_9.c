/* exercise7_12_9.c */
#include <stdio.h>

int main(void)
{
	int ii, jj, kk, num;
	
	printf("Please input a positive integer:");
	scanf("%d", &num);
	
	printf("The prime in range:\n");
	for(ii=2; ii<=num; ii++)
	{
		for(jj=2; jj<ii; jj++)
		{
			if(ii%jj==0)
			{
				break;
			}	 
		}	
		if(ii==jj)
			printf("%d ", ii);
	}
	printf("\n");
	
	return 0;
} 
