/* exercise7_12_2.c */
#include <stdio.h>

const int NUMBER = 8;

int main(void)
{
	int ii = 0;
	char ch;
	
	while((ch=getchar())!='#')
	{
		printf("%c %d;", ch, ch);
		if(((++ii)%NUMBER)==0)
			putchar('\n');
	}
	
	return 0;
}
