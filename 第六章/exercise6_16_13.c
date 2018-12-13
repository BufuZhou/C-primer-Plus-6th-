#include <stdio.h>

const int SIZE = 8; 

int main(void)
{
	int ii, jj=0, result[8] = {2};
	
	for(ii=1; ii<8; ii++)
		result[ii] = result[ii-1] * 2;
	do
	{
		printf("%5d", result[jj]);
		jj++;
	}while(jj<8);
	
	return 0;	
}
