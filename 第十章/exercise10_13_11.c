/* exercise10_13_11.c */
#include <stdio.h>
#define ROWS 3
#define COLUMNS 5

void copy_ptr(double ar[][COLUMNS], int M);

void print_arr(double ar[][COLUMNS], int M);

int main(void)
{
	double ar[ROWS][COLUMNS] = {{1, 2, 3, 2, 1},
					   {4, 5, 6, 5, 4}, 
					   {7, 8, 9, 8, 7}};
	int ii;
	
	print_arr(ar, ROWS);
	copy_ptr(ar, ROWS);
	print_arr(ar, ROWS);
	
	return 0;
}

void copy_ptr(double ar[][COLUMNS], int rows)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
		for(jj=0; jj<COLUMNS; jj++)
			ar[ii][jj] = ar[ii][jj] * 2;
}

void print_arr(double ar[][COLUMNS], int rows)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
	{
		for(jj=0; jj<COLUMNS; jj++)
			printf("%g ", ar[ii][jj]);
		printf("\n");
	printf("\n");
	}	
}
