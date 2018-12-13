#include <stdio.h>
int main(void)
{
	const int MinuteToHour = 60;
	float TimeInMinute;
	float TimeInHour;
	
	do
	{
		printf("Please input the time in minutes: ");
		scanf("%f", &TimeInMinute);
		
		if(TimeInMinute<0)
			break;
		else
			TimeInHour = TimeInMinute / MinuteToHour;
			printf("The time in hour is %4.2f\n\n", TimeInHour);
	}while(TimeInMinute>=0);
	
	return 0;
}
