/* exercise10_13_5.c */
#include <stdio.h>

int max_min(double ar[]);

int main(void)
{
	double ar[9] = {9, 8, 11, 25, 32, 34, 98, 100, 3};
	
	printf("The difference between the maximum and minimum is %d\n", max_min(ar));
	
	return 0;
}

int max_min(double ar[])
{
	int ii = 0, max_index, min_index;
	
	for(min_index=0, max_index=0, ii=1; ii<9; ii++)
	{
		if(ar[ii]>ar[max_index])
			max_index = ii;
		if(ar[ii]<ar[min_index])
			min_index = ii;
	}
	return (ar[max_index] - ar[min_index]);
}
