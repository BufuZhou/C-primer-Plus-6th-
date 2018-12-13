/* exercise9_11_10.c */
#include <stdio.h>

void to_binary(int n, int base);

int main(void)
{
	int num, base;
	
	printf("Enter a number and the base: ");
	scanf("%d%d", &num, &base);
	
	to_binary(num, base);
	
	return 0;
}

void to_binary(int n, int base)
{
	int r;
	
	r = n%base;
	if(n>=base)
		to_binary(n/base, base);
	printf("%d", r);
}
