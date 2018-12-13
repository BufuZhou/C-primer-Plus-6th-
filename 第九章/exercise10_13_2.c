/* exercise10_13_2.c */
#include <stdio.h>

const int SIZE = 5;

void copy_arr(double target[], double source[], int size);

void copy_ptr(double *pt, double *ptr, int size);

void copy_ptrs(double target[], double source[], double *ptrs);

int main(void)
{
	int ii = 0;
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5], target2[5], target3[5];
	
	copy_arr(target1, source, SIZE);
	copy_ptr(target2, source, SIZE);
	copy_ptrs(target3, source, (source+SIZE));
	
	printf("target1 	target2		target3\n");
	for(ii=0; ii<5; ii++)
	{	
		printf("%10.2lf%10.2lf%10.2lf\n", target1[ii], target2[ii], target3[ii]);	
	}
	
	return 0;	
}

void copy_arr(double target[], double source[], int size)
{
	int ii = 0;
	for(ii=0; ii<size; ii++) 
	{
		target[ii] = source[ii];
	}
} 

void copy_ptr(double * pt, double * ptr, int size)
{
	int ii = 0;
	
	for(ii=0; ii<size; ii++)
		*(pt++) = *(ptr++);
}

void copy_ptrs(double target[], double source[], double *ptrs)
{
	double *ptr1, *ptr2;
	
	ptr1 = target;
	ptr2 = source;
	while(ptr2<ptrs)
	{
		*(ptr1++) = *(ptr2++);
	}
}

