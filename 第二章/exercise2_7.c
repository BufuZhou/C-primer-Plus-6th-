#include <stdio.h>

void smile(void);

int main(void)
{
	int ii, jj, Iteration = 3;
	
	for(ii=0; ii<Iteration; ii++)
	{
		for(jj=Iteration; jj>ii; jj--)
		{
			smile();
		}
		printf("\n");			
	}
	
	return 0;	
}

void smile(void) 
{
	printf("Smile!");
}
