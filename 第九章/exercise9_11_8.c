/* exercise9_11_8.c */
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
	double ii, pow = 1;
	
	if(n==0)
		return 0;
	if(p==0)
		return 1;
		
	if(p<0)
	{
		for(ii=0; ii<(-p); ii++)
			pow *= n;
		pow = 1/pow;	
	}
	else
	{
		for(ii=0; ii<(-p); ii++)
			pow *= n;
	}
	return pow;	
} 
