/* echo_eof.c -- �ظ����룬 ֱ���ļ���β */
#include <stdio.h>
int main(void)
{
	int ch;
	
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	
	return 0; 
} 
