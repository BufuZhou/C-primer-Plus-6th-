/* r_drive0.c -- ����rand0()���� */
/* ��rand0.cһ����� */
#include <stdio.h>
extern unsigned int rand0(void);

int main(void)
{
	int count;
	
	for(count=0; count<5; count++)
		printf("%d\n", rand0());
	
	return 0;
} 
