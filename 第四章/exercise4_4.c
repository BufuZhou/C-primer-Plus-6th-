/* exercise4_4.c --��ʾ�û�������Ϣ */
#include <stdio.h> 
int main(void)
{
	char name[40];
	float heightInches;
	
	printf("Enter your name:");
	scanf("%s", name);
	printf("Enter your height(inches):");
	scanf("%f", &heightInches);
	
	printf("%s, you are %g feet tall.\n", name, heightInches/100);
	
	return 0;
}
