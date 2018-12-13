#include <stdio.h>

int main(void)
{
	double num1, num2, result;
	_Bool input_is_good;
	
	do
	{
		printf("Please input two number: ");
		input_is_good = (scanf("%lf %lf", &num1, &num2) == 2);
		
		result = (num1-num2) / (num1*num2);
		
		printf("The result is %.2lf\n", result);	
	}while(input_is_good);

	return 0;
}
