#include <stdio.h>

int main(void)
{
	int i, j;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("$");
		}
		printf("\n");
	}
	
	int m, n;
	
	for(n=5; n>0; n--)
	{
		for(m=0; m<=n; m++)
		{
			printf("=");
		}
		printf("\n");
	}
}
