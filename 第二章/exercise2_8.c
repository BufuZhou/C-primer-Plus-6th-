#include <stdio.h>

void one_three(void);

void two(void);

void three(void);

int main(void)
{
	printf("starting now:\n");
	one_three();
	two();
	three();
	printf("done!");
	
	return 0;
}

void one_three(void)
{
	printf("one\n");
}

void two(void)
{
	printf("two\n");
}

void three(void)
{
	printf("three\n");
}
