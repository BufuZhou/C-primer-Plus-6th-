#include <stdio.h> 

void Temperatures(double n);

int main(void)
{
	double fah, cel, kel; // �����¶ȡ������¶ȡ������¶�
	printf("Input he Fahrenheit temperature: ");
	while(scanf("%lf", &fah)==1) 
	{
		Temperatures(fah);
		printf("Next input: ");
	}
	printf("Done.\n");
}

void Temperatures(double n)
{
	const double a = 5.0, b = 9.0, c = 32, d = 273.16;
	printf("%.2f �H is %.2f ��, %.2fK.\n", n, a/b*(n-c), a/b*(n-c)+d); 
}
