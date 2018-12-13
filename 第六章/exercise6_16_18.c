#include <stdio.h>

const int DUNBARNUMBER = 150;
const int INITIAL = 5;

int main(void)
{
	int weeks=0, friends=INITIAL;
	
	printf("   weeks    friends\n");
	while(friends<=DUNBARNUMBER)
	{
		weeks++;
		friends += (friends - weeks)*2;
		printf("%6d%12d\n", weeks, friends);	
	}
	
	return 0;	
}
