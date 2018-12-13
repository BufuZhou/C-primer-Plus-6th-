#include <stdio.h>

const int dayToWeek = 7;

int main(void) 
{
	int totalDays, weeks,  days;
	
	while(1)
	{
		printf("Please input the total days: ");
		scanf("%d", &totalDays);
		
		if(totalDays<=0)
			break;
		else
		{
			weeks = totalDays / dayToWeek;
			days = totalDays % dayToWeek;
		}
		
		printf("%d days are %d weeks, %d days.\n\n", totalDays, weeks, days);
	}
	
	return 0;
} 
