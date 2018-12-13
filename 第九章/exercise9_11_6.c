/* exercise9_11_6.c */
#include <stdio.h>

void larger_of(double *x, double *y);

int main(void) 
{
	double x, y;
	
	printf("Enter two numbers: ");
	scanf("%lf %lf", &x, &y);
	
	larger_of(&x, &y);
	
	printf("The number is %.2lf and %.2lf\n", x, y);
	
	return 0;
}

void larger_of(double *x, double *y)
{	
	*x>*y?(*y=*x):(*x=*y);
}
