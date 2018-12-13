#include <stdio.h>

int main(void)
{
	int items, ii;
	double sum1=0, sum2=0;
	
	printf("Enter the items: ");
	scanf("%d", &items);
	
	for(ii=1; ii<=items; ii++)
	{
		sum1 = sum1 + 1.0/ii; 
		if(ii%2==1)
		{
			sum2 = sum2 + 1.0/ii;
		}
		else
		{
			sum2 = sum2 - 1.0/ii; 
		}
	}
	printf("The result is %.5lf and %.5lf.\n", sum1, sum2);
		
	return 0;	
}
