// chcount.c -- ʹ���߼��������
#include <stdio.h>
#define FERIOD '.'
int main(void)
{
	char ch;
	int charcount = 0;
	
	while((ch=getchar())!=FERIOD)
	{
		if(ch!='"'&&ch!='\n')
			charcount++;	
	}
	printf("There are %d non-quote characters.\n", charcount);
	
	return 0;	
} 
