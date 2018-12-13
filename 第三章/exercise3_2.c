/* exercise3_2.c --ÊäÈëASCIIÂë£¬´òÓ¡ÊäÈë×Ö·û */
#include <stdio.h> 
int main(void)
{
	float cups;
	
	printf("Enter the number of cups:");
	scanf("%f", &cups);
	printf("The pint is %.4f\n", cups/2.0);
	printf("The ounce is %.4f\n", cups*8);
	printf("The spoon is %.4f\n", cups*8*2);
	printf("The teaspoon is %.4f\n", cups*8*2*3);

	return 0;
}
