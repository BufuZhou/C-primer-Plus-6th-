/* fgets.c -- ʹ��fgets()��fputs */
#include <stdio.h>
#define STLEN 10
int main(void)
{
	char words[STLEN];
	
	puts("Enter strings (empty line to quilt): ");
	while(fgets(words, STLEN, stdin)!=NULL && words[0]!='\n')
		fputs(words, stdout);
	puts("Done.");
	
	return 0;	
} 
