/* exercise9_11_7.c */
#include <stdio.h>
#include <ctype.h>

int get_ch(char ch);

int main(void)
{
	char ch;
	
	printf("Please input a character: ");
	ch = getchar();
	
	if(get_ch(ch)==-1)
		printf("%c is not in alphabet.\n", ch);
	else
		printf("%c in the alphabet is %d.\n", ch, get_ch(ch));
	
	return 0;
}

int get_ch(char ch)
{
	if(!isalpha(ch))
		return -1;
	else
	{
		if(islower(ch))
			return (ch-'a'+1);
		else
			return (ch-'A'+1); 
	}
}
