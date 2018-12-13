#include <stdio.h>

const SIZE = 5;

int main(void)
{
	int ii, jj;
	
	for(ii=1; ii<=SIZE; ii++)
	{
		for(jj=0; jj<ii; jj++)
		{
			printf("$");
		}
		printf("\n");
	}
	
	return 0;
}
