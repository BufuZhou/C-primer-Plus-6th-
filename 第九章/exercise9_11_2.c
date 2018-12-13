/* exercise9_11_2.c */
#include <stdio.h>

void chline(char ch, int j, int i);

int main(void)
{
	char ch[][] = {{"sddddddddddd"}, {"1dsdf34234324"}};
	
	printf("The character is %c.\n", chline(ch, 1, 6));
	
	return 0;
}

void chline(char ch, int j, int i)
{
	int jj, ii;
	
	for(jj=0; jj<j; jj++)
		for(ii=0; ii<i; ii++)
		{
			if((jj==(jj-1))&&(ii=(ii-1)))
				putchar(ch[jj][ii]);
		}
}
