/* exercise9_11_11.c */
#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int num;
	
	printf("Enter a number:");
	scanf("%d", &num);
	
	printf("The result of Fibonacci is %d\n", Fibonacci(num));
	
	return 0;
}

int Fibonacci(int n)
{
	int ii, Fib, temp1 = 1, temp2 = 1;
	
	if(n<=2)
		Fib = 1;
	else
	{
		for(ii=3; ii<=n; ii++)	
		{
			Fib = temp1 + temp2;
			temp2 = temp1;	
			temp1 = Fib;
		}
	}
	
	return Fib;
		
}
