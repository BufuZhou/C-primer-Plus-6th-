/* exercise11_13_3.c */
#include <stdio.h>
#define SIZE 40
char *gets_first_word(char ar[], int n);
int main()
{
	char str[SIZE];
	
	gets_first_word(str, 40);
	puts(str);
	
	return 0;
}

char *gets_first_word(char ar[], int n) 
{
	int count = 0;
	char ch;
	
	while(count<n)
	{
		ch = getchar();
		if(ch!=' '||ch!='\t'||ch!='\n')
		{
			while(1)
			{
				ar[count++] = ch;
				if(ch==' '||ch=='\t'||ch=='\n')
				{
					ar[count] = '\0';
					return ar;	
				}
				ch = getchar();			
			}					
		}
	}
}
