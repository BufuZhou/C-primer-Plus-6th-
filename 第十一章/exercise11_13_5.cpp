#include <stdio.h>
#include <string.h>
#define QUIT "quilt" 
#define SIZE 40
char *mystrncpy(char *p1, char *p2, int n);
int main(void)
{
	char s1[SIZE];
	char s2[SIZE];
	int num;
	
	printf("Input the first string(type quilt to quilt):\n");
	
	while(strcmp(gets(s1), QUIT))
	{
		printf("Input the second string:\n");
		gets(s2);
		printf("Input the number of char copied from s2:");
		scanf("%d, &num");
		getchar();
		// ��s2�ĳ��ȴ��ڻ����Ҫ�������ַ���ʱ��Ҫ��s1ĩβ����'\0'
		// ����ע���ڵ��ú���֮ǰ����Ȼstrlen(s1)�ᷢ���ı�
		if(strlen(s2)>=num) 
			s1[strlen(s1)+num] = '\0';
			puts(mystrncpy(s1, s2, num));	// �����������ַ���s1
			printf("Input the first string(type quilt to quilt):\n");			
	}
	printf("Bye.\n");
}

char *mystrncpy(char *pl, char *p2, int n)
{
	int i = 1;
	char *p = pl;
	
	while(*pl++)
		continue;
	// plָ��ָ��λ���Ѿ��������ַ�
	*--pl = *p2;
	while(i<n&&*p2) 
	{
		*++pl = *++p2;
		i++;
	}
	
	return p;
}
