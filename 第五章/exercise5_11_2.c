#include <stdio.h>

const int RANGE = 10;

int main(void)
{
	int startInteger, lastInteger, temp;
	
	printf("Please input an ingeger: ");
	scanf("%d", &startInteger);
	
	lastInteger = startInteger + RANGE;
	temp = startInteger;
	while(temp<=lastInteger)
	{
		printf("%5d", temp);
		temp++;
	}
	
	return 0;
}

