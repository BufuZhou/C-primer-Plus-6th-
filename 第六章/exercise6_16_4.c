#include <stdio.h>

int main(void)
{
	int ii, jj;
	char alpha = 'A';
	
	for(ii=1; ii<=6; ii++)
	{
		for(jj=1; jj<=ii; jj++)
		{
			printf("%c", alpha++); 
		} 
		printf("\n");
	}
	
	return 0;
}
