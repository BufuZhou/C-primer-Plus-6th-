#include <stdio.h>

int main(void)
{
	int firstOperInt = 1, secondOperInt, result;
	
	printf("This program computes mouli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &secondOperInt);
	while(firstOperInt>0)
	{
		printf("\nNow enter the first operand: ");
		scanf("%d", &firstOperInt);
		
		result = firstOperInt % secondOperInt;
		
		printf("%d %% %d is %d", firstOperInt, secondOperInt, result);
	}
	
	return 0;
}
