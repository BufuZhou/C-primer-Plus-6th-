/* book.c -- һ�����ͼ��Ŀ¼ */
#include <stdio.h> 
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 41 		/* ��������󳤶�+1 */
#define MAXAUTL 31 		/* ������������󳤶� */

struct book{		/* �ṹģ�壺�����book */ 
	char title[MAXTITL];
	char author[MAXAUTL];
	float value; 
}; 

int main(void)
{
	struct book library;		/* ��library����Ϊһ��book���͵ı��� */
	
	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);			/* ����title���� */
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\"($%.f)\n", library.author, library.title, library.value);
	printf("Done.\n");
	
	return 0; 
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar()!='\n')
				continue;			// ������������ʣ����ַ� 
	}
	return ret_val; 
}
