// min_sec.c -- ������ת���ɷֺ���
#include <stdio.h> 
#define SEC_PER_MIN 60		// 1����60��
int main(void) 
{
	int sec, min, left;
	
	printf("Convert seconds to minutes and seconds!\n");
	printf("Enter the number of seconds (<=0 to quilt):\n");
	scanf("%d", sec);		// ��ȡ����
	while(sec>0) 
	{
		min = sec/SEC_PER_MIN;		// �ضϷ�����
		left = sec % SEC_PER_MIN;	// ʣ�µ�����
		printf("%d seconds is % minutes, %d seconds.\n", sec, min, left);
		printf("Enter next value (<=0 to quilt):\n");
		scanf("%d", &sec);	
	}
	printf("Done!\n");
	
	return 0;
}
