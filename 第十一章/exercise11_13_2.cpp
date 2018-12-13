/* exercise11_13.c */
#include <stdio.h>
#define SIZE 40
char *gets_n(char ar[], int n);
int main()
{
	char str[SIZE];
	
	gets_n(str, 10);
	puts(str);
	
	return 0;
}

char *gets_n(char ar[], int n) 
{
	int count = 0;
	char ch;
	
	while(count<n)
	{
		ch = getchar();
		ar[count++] = ch;
		if(ch==' '||ch=='\t'||ch=='\n')
		{
			break;		
		}
	}
	ar[count] = '\0';
	
	return ar;
}
