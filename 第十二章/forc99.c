// forc99.c --�µ�C99��Ĺ���
#include <stdio.h>
int main()
{
	int n = 8;
	
	printf("   Initially, n = %d at %p\n", n, &n);
	for(n=1; n<3; n++)
		printf("	loop 1: n = %d at %p\n", n, &n);
	printf("After loop 1, n = %d at %p\n", n, &n);
	for(n=1; n<3; n++)
	{
		printf(" loop 2 index n = %d at %p\n", n, &n);
		int n = 6;
		printf("	loop 2: n = %d at %p\n", n, &n);
		n++;
	}	
	printf("After loop 2, n = %d at %p\n", n, &n);
	
	return 0;
} 
