/* exercise4_3.c -- ´òÓ¡Êı×Ö */
#include <stdio.h>
int main(void)
{
	float number;
	
	printf("Enter a number:");
	scanf("%f", &number);
	printf("The number is %.1f", number);
	printf(" or %.1e", number);
	
	return 0;
}
