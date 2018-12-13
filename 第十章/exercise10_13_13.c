/* exercise10_13_13.c */
#include <stdio.h>
#define AR_ROWS 3
#define COLS 5
#define AR_NUM 15

void getnum(double ar[][COLS], int ROWS);

void RowsAveg(double ar[][COLS], int ROWS);

double totalAveg(double ar[][COLS], int ROWS);

double max(double ar[][COLS], int ROWS);

void printArray(double ar[][COLS], int ROWS);

int main(void)
{
	double ar[AR_ROWS][COLS];
	
	getnum(ar, AR_ROWS);
	printArray(ar, AR_ROWS);
	RowsAveg(ar, AR_ROWS);
	printf("The average of ar is %.2lf\n", totalAveg(ar, AR_ROWS));
	printf("The max of ar is %.2lf\n", max(ar, AR_ROWS));
	
	return 0;
}

void getnum(double ar[][COLS], int ROWS)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
		for(jj=0; jj<COLS; jj++)
			scanf("%lf", &ar[ii][jj]);
}

void RowsAveg(double ar[][COLS], int ROWS)
{
	int ii, jj;
	double sum;
	
	for(ii=0; ii<ROWS; ii++)
	{
		sum = 0;
		for(jj=0; jj<COLS; jj++)
			sum += ar[ii][jj];
		printf("The average of the %d rows is %.2lf\n", ii+1, sum/COLS);
	}
}

double totalAveg(double ar[][COLS], int ROWS)
{
	int ii, jj;
	double sum = 0;
	
	for(ii=0; ii<ROWS; ii++)
	{
		for(jj=0; jj<COLS; jj++)
			sum += ar[ii][jj];
	}
	
	return sum/(COLS*ROWS);
}

double max(double ar[][COLS], int ROWS)
{
	int ii, jj;
	double max;
	
	for(ii=0; ii<ROWS; ii++)
		for(jj=1; jj<COLS; jj++)
			if(ar[ii][jj]>max)
				max = ar[ii][jj];
				
	return max;
}

void printArray(double ar[][COLS], int ROWS)
{
	int ii, jj;
	
	for(ii=0; ii<ROWS; ii++)
	{
		for(jj=0; jj<COLS; jj++)
			printf("%7.2f", ar[ii][jj]);
	printf("\n");
	}
}
