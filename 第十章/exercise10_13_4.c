/* exercise10_13_4.c */
#include <stdio.h>

int max_index(double ar[]);

int main(void)
{
	double ar[9] = {9, 8, 11, 25, 32, 34, 98, 100, 3};
	
	printf("The max index of the array is %d\n", max_index(ar));
	
	return 0;
}

int max_index(double ar[])
{
	int ii = 0, max_index;
	
	for(max_index=0, ii=1; ii<9; ii++)
	{
		if(ar[ii]>ar[max_index])
			max_index = ii;
	}
	return max_index;
}
