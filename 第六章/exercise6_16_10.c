#include <stdio.h>

int main(void)
{
	int num1, num2, result, ii;
	
	while(1)
	{
		printf("Enter lower and upper integer limits: ");
		scanf("%d %d", &num1, &num2);
		
		if(num1==num2)		
		{
			printf("Done\n");
			break;
		}
		result = 0;
		for(ii = num1; ii<=num2; ii++)
		{
			result = result + ii*ii;
		}
		
		printf("The sum of the squares from %d to %d is %d\n", num1*num1, num2*num2, result);	
	}

	return 0;
}
