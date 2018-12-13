/*exercise8_11_3.c */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int numLower = 0, numUpper = 0, ch;
	
	while((ch=getchar())!=EOF)
	{
		if(isalpha(ch))
		{
			if(islower(ch))
				numLower++;
			else
				numUpper++;
		}
	}
	
	printf("The lower character is %d.\n", numLower);
	printf("The upper character is %d.\n", numUpper);
	
	return 0;
}
