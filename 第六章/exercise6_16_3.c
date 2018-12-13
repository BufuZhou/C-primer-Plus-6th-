#include <stdio.h>

int main(void)
{
	int ii, jj;
	char alpha;
	
	for(ii=0; ii<=5; ii++)
	{
		for(jj=0; jj<=ii; jj++)
		{
			alpha = 'F' - jj;
			printf("%c", alpha); 
		} 
		printf("\n");
	}
	
	return 0;
}
