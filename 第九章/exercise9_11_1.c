/* exercise9_11_1.c */
#include <stdio.h>

double min(double x, double y);

int main(void)
{
	double x, y;
	
	do
	{
		printf("Please enter two number:");
	}while(scanf("%lf%lf", &x, &y)!=2);
	
	printf("The smaller of the two number is %.2lf.\n", min(x, y));
	
	return 0;	
}

double min(double x, double y)
{
	return (x>y?y:x);
}
