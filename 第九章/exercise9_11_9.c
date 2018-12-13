/* exercise9_11_9.c */
#include <stdio.h>

double power(double n, int p);

int main(void)
{
	double n;
	int p;
	
	printf("Enter a number and the integer power:");
	scanf("%lf %d", &n, &p);
	
	printf("The result is %.5lf\n", power(n, p));
	
	return 0;
}


double power(double n, int p)		// º¯Êý¶¨Òå
{	
	if(n==0)
	{
		if(p==0)
			printf("your input is Error.\n");
		else
			return 0;
	}		
	if(p==0)
		return 1;
			
	if(p<0)
	{
		return (1/n*power(n,p+1));
	}
	else
	{
		return (n*power(n, p-1));
	}	
} 
