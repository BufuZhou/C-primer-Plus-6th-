// addresses.c --�ַ����ĵ�ַ 
#define MSG "I'm special"

#include <stdio.h>
int main()
{
	char ar[] = MSG;
	const char *pt = MSG;
	printf("address of \"I'm specail\":%p\n", "I'm special");
	printf("            address ar: %p\n", ar);
	printf("            address pt: %p\n", pt);
	printf("        address of MSG: %p\n", MSG);
	printf("address of\"I'm special\": %p \n", "I'm special");
	
	return 0;	
} 
