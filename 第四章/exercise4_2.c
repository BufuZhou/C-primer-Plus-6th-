/* exercise4_2.c --¥Ú”°–’√˚ */
#include <stdio.h>
int main(void)
{
	char firstName[40], lastName[40];
	
	printf("Enter your name:");
	scanf("%s %s", firstName, lastName);
	printf("Your name is \"%s %s\"\n", firstName, lastName);
	printf("Your name is \"%-20s %s\"\n", firstName, lastName);
	printf("Your name is \"%20s %s\"\n", firstName, lastName);
	printf("Your name is \"%3s %s\"\n", firstName, lastName);
	return 0;	
} 
