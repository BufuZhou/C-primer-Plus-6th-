#include <stdio.h>

const int SIZE = 26;

int main(void)
{
	int ii;
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	
	for(ii=0; ii<SIZE; ii++)
	{
		printf("%c ", alphabet[ii]);
	}	
}
