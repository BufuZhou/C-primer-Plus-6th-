/* sbust.c -- ���ַ������滻 */
#include <stdio.h>
#define PSQR(x) printf("The Square of "#x" is %d.\n", ((x)*(x))

int main(void)
{
	int y = 5;
	
	PSQR(y);
	PSQR(2+4);
	
	return 0;	
} 
