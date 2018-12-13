/* exercise9_11_4.c */
#include <stdio.h>

double exchange(double *num1, double *num2, double *num3);

int main(void)
{
	double num1, num2, num3;
	
	printf("Enter three numbers:");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	
	exchange(&num1, &num2, &num3);
	
	printf("The exchange reuslt is %.2lf, %.2lf, %.2lf", num1, num2, num3);
	
	return 0;
}

double exchange(double *num1, double *num2, double *num3)
{
	int ii, num[3] = {*num1, *num2, *num3};
	
	for(ii=0; ii<3; ii++)
	{
		if(num[ii]>=*num1)
			*num1 = num[ii];
	}
	for(ii=0; ii<3; ii++)
	{
		if(num[ii]<=*num3)
			*num3 = num[ii];
	}
	for(ii=0; ii<3; ii++)
	{
		if(num[ii]!=*num1||num[ii]!=*num3)
			*num2 = num[ii];
	}
}
