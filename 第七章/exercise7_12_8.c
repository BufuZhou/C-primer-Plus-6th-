/* exercise7_12_8.c */
#include <stdio.h>

#define BASE1 8.75
#define BASE2 9.33
#define BASE3 10.00
#define BASE4 11.20
#define TIME 40
#define MUL 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 150
 
int main(void) 
{
	char ch = 'o';
	double base, workTime, tax, gross;
	
	// decide the base 

	while(ch=='o')
	{
		printf("******************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1) $8.75/hr  	2) $9.33/hr\n");
		printf("3) $10.00/hr	4) $11.20/hr\n");
		printf("5) quilt\n");
		printf("******************************************\n");
		
		ch = getchar();
		while(getchar()!='\n')
			getchar();
		switch(ch)
		{
			case '1':
				base = BASE1;
				break;
			case '2':
				base = BASE2;
				break;
			case '3':
				base = BASE3;
				break;
			case '4':
				base = BASE4;
				break;
			case '5':
				return 0;
			default:
				printf("Your input is incorrect!\n\n");
				ch = 'o';
		} 
	}
		
	printf("Input your work time(hour/h):");
	scanf("%lf", &workTime);
	
	gross = workTime * base + ((workTime-TIME)>0) * (workTime-TIME) * (MUL-1);
	if(gross<=BREAK1)
		tax = gross * RATE1;
	else if(gross<=(BREAK1+BREAK2))
		tax = BREAK1 * RATE1 + (gross-BREAK1) * RATE2;
	else
		tax = BREAK1 * RATE1 + BREAK2 * RATE2 + (gross-BREAK1-BREAK2)*RATE3;
		
	printf("Your gross income is %.2lf\n", gross);
	printf("Your tax is %.2lf\n", tax);
	printf("Your net income is %.2lf\n", gross-tax);
	
	return 0;
}
