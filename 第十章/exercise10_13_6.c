/* exercise10_13_6.c */
#include <stdio.h>

#define N  9

void reverse(double ar[], int n);

int main(void)
{
	double ar[N] = {9, 8, 11, 25, 32, 34, 98, 100, 3};
	
	reverse(ar, N);
	
	return 0;
}

void reverse(double ar[], int n)
{
	int ii = 0;
	double rev[n], *pt, *ptr;
	
	pt = rev;
	for(ptr=(ar+N-1), pt=rev; ptr>=ar; ptr--, pt++)
	{
		*pt = *ptr;
	}
	for(ii=0; ii<n; ii++)
	{
		ar[ii] = rev[ii];
		printf("%.2lf ", ar[ii]);
	}

	printf("\n");
}
