/* exercise10_13_8.c */
#include <stdio.h>
#define SIZE_SOURCE 7
#define COPY  3

void  copy_ptr(double *target, double *ar, int n);

int main(void)
{
	double ar[SIZE_SOURCE] = {1, 2, 3, 4, 5, 6, 7};
	double target[COPY];
	int ii;
	
	copy_ptr(target, ar+3, COPY);
	
	for(ii=0; ii < COPY; ii++)
		printf("%lf ", target[ii]);
	printf("\n");
	
	return 0;
}

void  copy_ptr(double *target, double *ar, int n)
{
	int ii;
	
	for(ii=0; ii<n; ii++)
		target[ii] = *(ar+ii);
}
