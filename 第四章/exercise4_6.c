/* exercise4_6.c */
#include <stdio.h> 
#include <string.h>
int main(void)
{
	char firstName[40], lastName[40];
	int Fwidth, Lwidth;
	
	printf("Enter your FirstName:");
	scanf("%s", firstName);
	printf("Enter your lastName:");
	scanf("%s", lastName);
	
	Fwidth = strlen(firstName);
	Lwidth = strlen(lastName);

	printf("%s %s\n", firstName, lastName);
	printf("%*d %*d\n", Fwidth, Fwidth, Lwidth, Lwidth);
	printf("%s %s\n", firstName, lastName);
	printf("%-*d %-*d\n", Fwidth, Fwidth, Lwidth, Lwidth);
	
	return 0;
}
