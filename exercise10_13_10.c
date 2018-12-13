/* exercise10_13_10.c */
#include <stdio.h>

#define COLUMNS 4

void copy_ptr(double target[], double ar1[], double ar2[], int M);

void print_arr(double target[], int M);

int main(void)
{
	double ar1[COLUMNS] = {2, 4, 5, 8};
	double ar2[COLUMNS] = {1, 0, 4, 6};
	double target[COLUMNS];
	int ii;
		
	copy_ptr(target, ar1, ar2, COLUMNS);
	print_arr(target, COLUMNS);
	
	return 0;
}

void copy_ptr(double target[], double ar1[], double ar2[],int M)
{
	int jj;
	
	for(jj=0; jj<COLUMNS; jj++)
		target[jj] = ar1[jj] + ar2[jj];
}

void print_arr(double target[], int M)
{
	int jj;
	
	for(jj=0; jj<COLUMNS; jj++)
		printf("%g ", target[jj]);
	printf("\n");	
}
