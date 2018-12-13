/* showchar1.c -- �нϴ�I/O����ĳ��� */
#include <stdio.h>

void display(char cr, int lines, int width); 

int main(void)
{
	int ch;				/* ����ӡ�ַ� */
	int rows, cols;	 	/* ���������� */
	printf("Enter a character and two integers:\n");
	while((ch=getchar())!='\n')
	{
		scanf("%d %d", &rows, &cols);
		display(ch, rows, cols);
		printf("Enter another character and two integers;\n");
		printf("Enter a newline to quilt.\n");	
	} 
	printf("Bye.\n");
	
	return 0;
}

void display(char cr, int lines, int width)
{
	int row, col;
	
	for(row=1; row<=lines; row++)
	{
		for(col=1; col<=width; col++)
		{
			putchar(cr);
		}
		putchar('\n');	/* ����һ�в���ʼ�µ�һ�� */ 
	}
}
