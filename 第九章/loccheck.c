/* locccheck.c	--�鿴����������δ� */
#include <stdio.h>

void mikado(int);		/* ����ԭ�� */

int main(void)
{
	int pooh = 2, bah = 5;		/* main()�ľֲ����� */
	
	printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
	mikado(pooh);
	
	return 0;	
}  

void mikado(int bah)		/* ���庯�� */
{
	int pooh = 10;		/* mikado()�ľֲ����� */
	
	printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
	printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);	
}
