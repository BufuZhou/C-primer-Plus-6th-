#include <stdio.h>

const float CentToInches = 2.54;
const float InchesToFeet = 12;

int main(void) 
{
	float heightInCent, leftInInches;
	int  heightInFeet;
	
	while(1)
	{
		printf("Please input your height in centimeter: ");
		scanf("%f", &heightInCent);
		
		if(heightInCent<=0)
			break;
		else
		{
			heightInFeet = (int) heightInCent / (CentToInches * InchesToFeet);
			leftInInches = (heightInCent/CentToInches) - heightInFeet * InchesToFeet;
			printf("%.1f cm = %d feet, %.1f
			 inches.\n\n", heightInCent, heightInFeet, leftInInches);
		}
	}
	
	return 0;
}
