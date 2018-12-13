/* exercise10_13_7.c */
#include <stdio.h>

void copy_ptr(double target[][4], int (*ptr)[4], int m, int n);
void print_array(double target[][4], int m, int n);

int main(void)
{
	double ar[3][4];
	double source[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int (*ptr)[4];
	
	ptr = source;
	copy_ptr(ar, ptr, 3, 4);
	print_array(ar, 3, 4);
	
	return 0;
}

void copy_ptr(double target[][4], int (*ptr)[4], int m, int n)
{
	int ii, jj;
	double (*pt)[m];
	
	pt = target;
	for(ii=0; ii<m; ii++)
		for(jj=0; jj<n; jj++)
			*(*(pt+ii)+jj) = *(*(ptr+ii)+jj);
}

void print_array(double target[][4], int m, int n)
{
	int ii, jj;
	
	for(ii=0; ii<m; ii++)
		for(jj=0; jj<n; jj++)
			printf("%lf ", target[ii][jj]);
}
