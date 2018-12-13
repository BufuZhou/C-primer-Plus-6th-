/* exercise4_8.c */
#include <stdio.h>

const double GALLON = 3.785;	// 1 gallon = 3.785 liters
const double MILE = 1.609;		// 1 mile = 1.609 kilometers

int main(void)
{
	double totalMiles, totalGallon;
	double milesPerGallon, kilometersPerLiter;
	
	printf("Input miles and gallons:");
	scanf("%f%f", &totalMiles, &totalGallon);
	
	milesPerGallon = totalMiles/totalGallon;
	kilometersPerLiter = (totalMiles*1.609) / (totalGallon*3.785);
	
	printf("The miles per gallon is %.1f\n", milesPerGallon);
	printf("The kilometers per gallon is %.1f\n", kilometersPerLiter);
	
	return 0;	

}
