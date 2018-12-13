/* exercise7_12_6.c */
#include <stdio.h>

int main(void)
{
	int num = 0;
	char ch1, ch2;
	
	ch1 = getchar();
	while(ch1!='#')
	{
		if(ch1=='e')
		{
			ch2 = getchar();
			if(ch2=='i')
			{
				num++;
			}
			ch1 = ch2;
			continue;
		}
		else
			ch1 = getchar();
	}
	printf("The number of the \'ei\' in the sentence, is %d times.\n", num);
	
	return 0;
}
