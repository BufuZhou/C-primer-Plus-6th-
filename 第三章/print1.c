/* print1.c - ��ʾprintf()��һЩ���� */
#include <stdio.h>
int main(void)                                                       
{
	int ten = 10;
	int two = 2;
	
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doingt it wrong: ");
	printf("%d minus %d is %d\n", ten);		// ��©2������
	
	return 0; 
}
