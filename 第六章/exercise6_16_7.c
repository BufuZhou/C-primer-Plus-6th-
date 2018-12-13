#include <stdio.h>
#include <string.h>

int main(void)
{
	int ii, wordsLength;
	char words[1000];
	
	printf("Please input the words: ");
	scanf("%s", words);
	
	wordsLength = strlen(words);
	for(ii=wordsLength; ii>=1; ii--)
	{
		printf("%c", words[ii-1]);
	}
	printf("\n");
	
	return 0;
}
