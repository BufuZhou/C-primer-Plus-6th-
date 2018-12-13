#include <stdio.h>

const int SIZE = 8;

int main(void)
{
	int ii, num[SIZE];
	
	printf("Enter the number: ");
	for(ii=0; ii<SIZE; ii++)
	{
		scanf("%d", &num[ii]);
	}
	for(ii=SIZE-1; ii>=0; ii--)
	{
		printf("%d ", num[ii]);
	}
	printf("\n");
	
	return 0;
} 


