#include <stdio.h>

const int SIZE = 8;

int main(void)
{
	int ii;
	double inputN[SIZE], outputN[SIZE];
	
	printf("Please input eight numbers: ");	
	for(ii=0; ii<SIZE; ii++)
		scanf("%lf", &inputN[ii]);
		
	outputN[0] = inputN[0];
	for(ii=1; ii<SIZE; ii++)
	{
		outputN[ii] = outputN[ii-1] + inputN[ii];
	}
	
	for(ii=0; ii<SIZE; ii++)
		printf("%10lf", outputN[ii]);	
		
	return 0;		
} 
