/*exercise8_11_4.c */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int num;
	char ch;
	
	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))
		{
			num = 1;
			printf("The character of %c", ch);
			while(isalpha(ch=getchar()))
			{
				putchar(ch);
				num++;	
			}
			printf(" is %d.\n", num);
			continue;	
		}
	}
	
	return 0;
}
