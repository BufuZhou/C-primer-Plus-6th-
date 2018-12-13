#include <stdio.h>

int main(void)
{
	int ii, jj, rows, mm, nn;
	char alpha, belta = 'A';
	
	printf("Please input a character: ");
	scanf("%c", &alpha);
	
	rows = alpha - 'A';
	for(ii=rows; ii>=0; ii--)
	{
		for(jj=0; jj<ii; jj++)
		{
			printf(" ");
		}
		for(mm=0; mm<=(rows-ii); mm++)
		{
			printf("%c", belta+mm);
		} 
		for(nn=(rows-ii)-2; nn>=0; nn--)
		{
			printf("%c", belta+nn);
		}

		printf("\n");		
	}
	
	return 0;
}
