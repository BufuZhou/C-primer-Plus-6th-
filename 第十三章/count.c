/* count.c -- ʹ�ñ�׼I/O */
#include <stdio.h>
#include <stdlib.h>		// �ṩexit()��ԭ��

int main(int argc, char *argv[])
{
	int ch;			// ��ȡ�ļ�������ÿ���ַ��ĵط�
	FILE *fp;		// "�ļ�ָ��"
	unsigned long count = 0;
	if(argc!=2)	
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((fp=fopen(arg[1], "r"))=NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while((ch=getc(fp))!=EOF)
	{
		putc(ch, stdout);		// ��putchar(ch);��ͬ
		count++; 
	}
	fclose(fp);
	printf("File %s has 5lu characters\n", argv[1], count);
	
	return 0;
} 
