// parta.c -- ��ͬ�Ĵ洢���
// ��partb.c һ�����
#include <stdio.h>
void report_count();
void accumulate(int k);
int count = 0;		// �ļ��������ⲿ����

int main(void)
{
	int value;			// �Զ�����
	register int i;		// �Ĵ�������
	
	printf("Enter a positive integer (0 to quilt): ");
	while(scanf("%d", &value)==1&&value>0)
	{
		++count;
		for(i=value; i>=0; i--)
			accumulate(i);
		printf("Enter a positvi integer (0 to quilt): ");	
	} 
	report_count();
} 

void report_count()
{
	printf("Loop executed %d times\n", count);
}
