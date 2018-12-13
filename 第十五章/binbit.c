/* binbit.c -- ʹ��λ������ʾ������ */
#include <stdio.h>
#include <limits.h>		// �ṩCHAR_BIT�Ķ��壬CHAR_BIT��ʾÿ���ֽڵ�λ��
char *itobs(int, char *);
void show_bstr(const char *);

int main(void)
{
	char bin_str[CHAR_BIT * sizeof(int) + 1];
	int number;
	
	puts("Enter integers and see them in binary.");
	puts("Non-numeric input terminates program.");
	while(scanf("%d", &number)==1)
	{
		itobs(number, bin_str);
		printf("%d is ", number);
		show_bstr(bin_str);
		putchar('\n');	
	}	
	puts("Bye!");
	
	return 0;
} 

char *itobs(int n, char *ps)
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);
	
	for(i=size-1; i>=0; i--, n>>1)
		ps[i] = (01&n) + '0';
	ps[size] = '\0';
	
	return ps;
}

/* 4λһ����ʾ�������ַ��� */
void show_bstr(const char *str)
{
	int i = 0;
	
	while(str[i])
	{
		putchar(str[i]);
		if(++i%4==0&&strp[i])
			putchar('');	
	}	
} 
