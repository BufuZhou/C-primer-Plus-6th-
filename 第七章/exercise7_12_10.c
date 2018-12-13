/* exercise7_12_10.c */
#include <stdio.h>

#define BREAK1 17850
#define BREAK2 23900
#define BREAK3 29750
#define BREAK4 14875
#define RATE1 0.15
#define RATE2 0.28

 
int main(void) 
{
	double tax_break, tax, gross;
	char ch = 'o';
	
	while(ch=='o')	
	{
		printf("******************************************\n");
		printf("Please enter Corresponding figures to select the type\n");
		printf("1) single            		2) host\n");
		printf("3) married and shared		4) married but divorce\n");
		printf("5) quilt\n");
		printf("******************************************\n");
		
		ch = getchar();
		while(getchar()!='\n')
			getchar();
		switch(ch)
		{
			case '1':
				tax_break = BREAK1;
				break;
			case '2':
				tax_break = BREAK2;
				break;
			case '3':
				tax_break = BREAK3;
				break;
			case '4':
				tax_break = BREAK4;
				break;
			case '5':
				return 0;
			default:
				printf("Your input is incorrect!\n\n");
				ch = 'o';
		} 
	}
	
	printf("Input your gross income:");
	scanf("%lf", &gross);
	
	tax = tax_break * RATE1 + (gross - tax_break) * RATE2;
			
	printf("Your tax is %.2lf\n", tax);
	printf("Your net income is %.2lf\n", gross-tax);
	
	return 0;
}
