#include <stdio.h>
#include <string.h>

const MAX_SIZE = 255;

int main(void)
{
	int index;
	char ch[MAX_SIZE];
	
	printf("Input a string: ");
	for(index=0, scanf("%c", &ch[0]); ch[index]!='\n';)
	{
		index++;
		scanf("%c", &ch[index]);
	}
		
		
	for(index=0; index<strlen(ch); index++)
		printf("%c", ch[index]);
	
	return 0;
}
