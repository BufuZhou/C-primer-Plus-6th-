// hiding.c --���еı���
#include <stdio.h>
int main()
{
	int x = 30;			// ԭʼ��x
	
	printf("x in outer block: %d at %p\n", x, &x);
	{
		int x = 77;			// �µ�x��������ԭʼ��x
		printf("x in inner block: %d at %p\n", x, &x);	
	}	
	printf("x in outer block: %d at %p\n", x, &x);
	while(x++<33)		// ԭʼ��x
	{
		int x = 100;	// �µ�x��������ԭʼ��x
		x++;
		printf("x in while loop: %d at %p\n", x, &x); 
	} 
	printf("x in outer block: %d at %p\n", x, &x);
	
	return 0;
} 
