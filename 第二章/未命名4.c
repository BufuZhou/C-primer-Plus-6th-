#include <stdio.h>

int main(void)
{
	int years = 26;
	int days = 0;
	
	days = 365 * years;
	
	printf("You are %d years old(%d days)", years, days);
	
	return 0;
}
