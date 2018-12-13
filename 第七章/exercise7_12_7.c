/* exercise7_12_6.c */
#include <stdio.h>

#define BASE 1000
#define TIME 40
#define MUL 1.5
#define RATE1 0.15
#define RATE2 0.20
#define RATE3 0.25
#define BREAK1 300
#define BREAK2 150
 
int main(void) 
{
	double workTime, tax, gross;
	
	printf("Input your work time(hour/h):");
	scanf("%lf", &workTime);
	
	gross = workTime * BASE + ((workTime-TIME)>0) * (workTime-TIME) * (MUL-1);
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
