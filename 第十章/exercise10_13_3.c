/* exercise10_13_3.c */
#include <stdio.h>

int max(int ar[]);

int main(void)
{
	int ar[9] = {9, 8, 11, 25, 32, 34, 98, 100, 3};
	
	printf("The max of the array is %d\n", max(ar));
	
	return 0;
}

int max(int ar[])
{
	int ii = 0, max = ar[0];
	
	for(ii=1; ii<9; ii++)
	{
		if(ar[ii]>max)
			max = ar[ii];	
	}
	return max;
}
