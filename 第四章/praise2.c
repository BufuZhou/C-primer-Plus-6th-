/* praise2.c */
// �����������ʶ��%zd�����Ի���%u��%lu��
#include <stdio.h> 
#include <string.h>		/* �ṩstrlen()������ԭ�� */
#define PRAISE "You are an extraordinary beging." 
int main(void)
{
	char name[40];
	
	printf("What's your name?");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof(name));
	printf("The phrase of praise has %d letters ", strlen(PRAISE));
	printf("and occupies %d memory cells.\n", sizeof(PRAISE));
	
	return 0;
}

