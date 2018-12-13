#include <stdio.h>
#define ROWS 3
#define COLS 5
#define NUM 15 //����15����
void get_num(double ar[][COLS], int rows); //���û���������ݴ�����������
double aver_row(double ar[]); //����ÿ�����ݵ�ƽ��ֵ
double aver_all(double ar[][COLS], int rows); //�����������ݵ�ƽ��ֵ
double max_num(double ar[][COLS], int rows); //�ҳ�15�����ݵ����ֵ
void print_result(double ar[][COLS], int rows); //��ӡ���
int main(void)
{
double array[ROWS][COLS];
get_num(array, ROWS);
print_result(array, ROWS);
return 0;
}
void get_num(double ar[][COLS], int rows)
{
int r, c;
double a = 1.0; //��Ϊ����vc6.0���������Ӹ������ӿ�
printf("Please enter 3 groups of numbers, and there\n"
"are 5 numbers in each group:\n");
for (r = 0; r < rows; r++)
for (c = 0; c < COLS; c++)
scanf("%lf", &ar[r][c]);
}
double aver_row(double ar[])
{
int c;
double sub;
for (c = 0, sub = 0.0; c < COLS; c++)
sub += ar[c];
return (sub / COLS);
}
double aver_all(double ar[][COLS], int rows)
{
int r, c;
double total;
for (r = 0, total = 0.0; r < rows; r++)
for (c = 0; c < COLS; c++)
total += ar[r][c];
return (total / NUM);
}
double max_num(double ar[][COLS], int rows)
{
int r, c;
double max;
for (r = 0, max = ar[0][0]; r < rows; r++)
for (c = 0; c < COLS; c++)
if (max < ar[r][c])
max = ar[r][c];
return max;
}
void print_result(double ar[][COLS], int rows)
{
int r, c, row;
//��ӡ����
printf("The array:\n");
for (r = 0; r < rows; r++)
{
for (c = 0; c < COLS; c++)
printf("%-5g", ar[r][c]);
printf("\n");
}
//���ÿ��ƽ��ֵ
for (row = 0; row <ROWS; row++)
printf("The average value in row %d is: %g\n",
row, aver_row(ar[row]));
//�����������ƽ��ֵ
printf("The average value in the array is: %g\n",
aver_all(ar, ROWS));
//���15�����ݵ����ֵ
printf("The maximum number in the array is: %g\n",
max_num(ar, ROWS));
printf("Bye.\n");
}
