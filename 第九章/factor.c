// factor.c --ʹ��ѭ���͵ݹ����׳�
#include <stdio.h>
long fact(int n);
long rfact(int n);
int main(void)
{
	int num;
	
	printf("This program calculates factorials.\n");
	printf("Enter a value in the range 0-12 (q to quilt):\n");
	while(scanf("%d", &num)==1)
	{
		if(num<0)
			printf("No negative numbers, please.\n");
		else if(num>12)
			printf("Keep input under 13.\n");
		else
		{
			printf("loop: %d factorial = %ld\n", num, fact(num));
			printf("recursion: %d factorial = %ld\n", num, rfact(num));	
		}
		printf("Enter a value in the range 0-12 (q to quilt):\n");	
	}
	printf("Enter a value in the range 0-12 (q to quilt):\n");
	
	return 0;	
} 

long fact(int n)		// ʹ��ѭ���ĺ���
{
	long ans;
	
	for(ans=1; n>1; n--)
		ans *= n;
	
	return ans;	
} 

long rfact(int n)		// ʹ�õݹ�ĺ���
{
	long ans;
	
	if(n>0)
		ans = n * rfact(n-1);
	else
		ans = 1;
		
	return ans; 
} 


