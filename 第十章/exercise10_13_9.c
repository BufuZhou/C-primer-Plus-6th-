/* exercise10_13_9.c */
#include <stdio.h>
#define ROWS 3
#define COLUMNS 5

void copy_ptr(double target[][COLUMNS], double ar[][COLUMNS], int M);

void print_arr(double target[][COLUMNS], int M);

int main(void)
{
	double ar[ROWS][COLUMNS] = {{1, 2, 3, 2, 1},
					   {4, 5, 6, 5, 4}, 
					   {7, 8, 9, 8, 7}};
	double target[ROWS][COLUMNS];
	int ii;
		
	copy_ptr(target, ar, ROWS);
	print_arr(target, ROWS);
	
	return 0;
}

void copy_ptr(double target[][COLUMNS], double ar[][COLUMNS], int rows)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
		for(jj=0; jj<COLUMNS; jj++)
			target[ii][jj] = *(*(ar + ii) + jj);
}

void print_arr(double target[][COLUMNS], int rows)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
	{
		for(jj=0; jj<COLUMNS; jj++)
			printf("%g ", target[ii][jj]);
		printf("\n");
	printf("\n");
	}	
}
