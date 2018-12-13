#include <stdio.h>

double calCube(double num);

int main(void)
{
	double number, numberCube;
	
	printf("Please input a number: ");
	scanf("%lf", &number);
	
	numberCube = calCube(number);
	
	printf("The cube of %f is %f.\n", number, numberCube);
	
	return 0;	
}


double calCube(double num)
{
	return (num * num * num);
}
