/* exercise7_12_4.c */
#include <stdio.h>

int main(void)
{
	int nchange = 0;
	char ch;
	
	while((ch=getchar())!='#')
	{
		if(ch=='!')
		{
			printf("!!");
			nchange++;
		}
		else
		{
			if(ch=='.')
			{
				ch = '!';
				nchange++;
			}
			putchar(ch);
		} 
	}
	
	printf("\n%d substitutions were made.\n", nchange);
	
	return 0;
}
