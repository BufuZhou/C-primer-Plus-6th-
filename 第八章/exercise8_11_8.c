/* exercise8_11_8.c */
#include <stdio.h>

int main(void)
{
	double num1, num2, res;
	char ch, ch2, operate;
	
	while(1)
	{
		printf("Eneter the operation of your choice:\n");
		printf("%-15s %s\n", "a. add", "s. substract");
		printf("%-15s %s\n", "m. multiply", "d. divide");
		printf("%s\n", "q. quilt");
		
		ch = getchar();
		if(ch=='q')
			break;
		else if(ch=='a'||ch=='s'||ch=='m'||ch=='d')
		{
			while((getchar())!='\n') 
				continue;
			printf("Enter first number:");
			while(scanf("%lf", &num1)!=1)
			{	
				while((ch2=getchar())!='\n')
					putchar(ch2);
				printf("\nPlease enter a number, such as 2.5, -1.78E8, or 3:");								
			}
			printf("Enter second number:");
			while(scanf("%lf", &num2)!=1)
			{
				while((ch2=getchar())!='\n')
					putchar(ch2);
				printf("\nPlease enter a number, such as 2.5, -1.78E8, or 3:");								
			}
			while((getchar())!='\n') 
				continue;
			switch(ch)
			{
				case 'a':
					operate = '+';
					res = num1 + num2;
					break;
				case 's':
					operate = '-';
					res = num1 - num2;
					break;
				case 'm':
					operate = 'x';
					res = num1 * num2;
					break;
				case 'd':
					operate = '/';
					res = num1 / num2;
					break;
				defalut:
					break;		
			}
			printf("%.2lf %c %.2lf = %.2lf\n", num1, operate, num2, res);	
		}
		else
		{
			while((getchar())!='\n') 
				continue;
			continue;
		}			
	}
		
	return 0;
}
