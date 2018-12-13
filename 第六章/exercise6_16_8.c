#include <stdio.h>

int main(void)
{
	int Tmin, Tmax, ii;
	
	printf("Please input the lowest of the table: ");
	scanf("%d", &Tmin);
	printf("Please input the hightest of the  table: ");
	scanf("%d", &Tmax);
	
	printf("\n%-8s %-8s %-8s\n", "number", "square", "cube");
	for(ii=Tmin; ii<=Tmax; ii++)
	{
		printf("%-8d %-8d %-8d\n", ii, ii*ii, ii*ii*ii);
	}
	
	return 0;
}
