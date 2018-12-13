// electric.c -- ������
#include <stdio.h>
#define RATE1 0.13230		// �״�ʹ��360kwh�ķ���
#define RATE2 0.15040		// ������ʹ��108kwh�ķ���
#define RATE3 0.30025		// ������ʹ��252kwh�ķ���
#define RATE4 0.34025		// ʹ�ó���720kwh�ķ���
#define BREAK1 360.0		// ���ʵĵ�1���ֽ��
#define BREAK2 468.0		// ���ʵĵ�2���ֽ��
#define BREAK3 720.0		// ���ʵĵ�3���ֽ��
#define BASE1 (RATE1 * BREAK1)
// ʹ��360kwh�ķ���
#define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
// ʹ��468kwh�ķ���
#define BASE3 (BASE1 + BASE2 + (RATE3*(BREAK3 - BREAK2)));
// ʹ��720kwh�ķ���
int main(void)
{
	double kwh;
	double bill;
	
	printf("Please enter the kwh used.\n");
	scanf("%lf", &kwh);
	if(kwh<=BREAK1)
		bill = RATE1 * kwh;
	else if(kwh<=BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if(kwh<=BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else 
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("The charge for %.1f kwh is $%1.2f.\n", kwh, bill);
	
	return 0;	
} 
