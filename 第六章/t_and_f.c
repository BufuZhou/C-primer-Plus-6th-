/* t_and_f.c -- C�е���ͼٵ�ֵ */
#include <stdio.h>
int main(void)
{
	int true_val, false_val;
	
	true_val = (10 > 2);		// ��ϵΪ���ֵ
	false_val = (10 == 2);		// ��ϵΪ�ٵ�ֵ
	printf("true = %d; false = %d \n", true_val, false_val);
	
	return 0;	
} 
