#include <stdio.h> 
#include <string.h>
#define SIZE 40
#define QUIT "quilt"
char *s_gets(char *st, int n);
char *string_in(char *sl, char *s2);
int main(void)
{
	char str1[SIZE];
	char str2[SIZE];
	char *ret_val;
	
	printf("Input the first string(type quilt to quilt):\n");
	while(strcmp(s_gets(str1, SIZE), QUIT))
	{
		printf("Input the second string:\n");
		s_gets(str2, SIZE);
		ret_val = string_in(str1, str2);
		if(ret_val)
		{
			printf("Find!\n");
			puts(ret_val);
		}
		else
			printf("Can't find!\n");
		printf("Input the first string(type quilt to quilt):\n");
	}
	printf("Bye.\n");
}

// �Զ�����ַ������뺯��
char *s_gets(char *st, int n) 
{
	int i = 0;
	
	if(fgets(st, n, stdin))
	{
		while(st[i]!='\n'&&st[i]!='\0')
			i++;
		if(st[i]=='\n')
			st[i] = '\0';
		else
			while(getchar()!='\n')
				continue;
	}
	
	return st;
	
}

// ��s1�м��s2
char *string_in(char *s1, char *s2)
{
	int i;
	
	while(*s1)
	{
		i = 0;
		while(s1[i]==s2[i])
		{
			i++;
			if(!s2[i])
				return s1;
		}
		s1++;
	}
	
	return NULL;
}
