/* exercise8_11_6.c */
#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
	char ch;
	
	printf("Enter some character:");
	
	ch = get_first();
	
	printf("The first character is %c.\n", ch);
	
	return 0;
}

char get_first(void)
{
	char ch;
	
	while(isspace(ch = getchar()))
		continue;
	
	return ch;	
}
