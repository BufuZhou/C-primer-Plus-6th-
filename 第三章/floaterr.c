/* floaterr.c --��ʾ������� */
#include <stdio.h> 
int main(void)
{
	float a, b;
	
	b = 2.0e20 + 10;
	a = b - 2.0e20;
	printf("%f \n", a);
	
	return 0;
}
