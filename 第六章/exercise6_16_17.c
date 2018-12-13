#include <stdio.h>

const float RATE = 0.08;
const int MONEY = 1000000;

int main(void)
{
	int years = 0;
	double leftMoney = MONEY;
		
	do
	{
		leftMoney = leftMoney*(1+RATE) - 100000;
		years++;
	}while(leftMoney>=0);
	
	printf("After %d years, Chuikie will draw all money from his account.\n", years);
		
	return 0;
} 
