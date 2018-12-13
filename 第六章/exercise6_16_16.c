#include <stdio.h>

const float RATE_DAPHNE = 0.1;
const float RATE_DEIRDRE = 0.05;
const int MONEY = 100;

int main(void)
{
	int years = 0;
	float totalMonDap = MONEY, totalMonDei = MONEY;
	
	do
	{
		totalMonDap += MONEY * RATE_DAPHNE;
		totalMonDei *= (1 + RATE_DEIRDRE);
		years++;
	}while(totalMonDap>=totalMonDei);
	
	printf("After %d years\n", years);
	printf("the total money of Daphne and Deirdre is %.2f and %.2f.\n", totalMonDap, totalMonDei);
	
	return 0;
} 
