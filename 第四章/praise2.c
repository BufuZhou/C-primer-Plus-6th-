/* praise2.c */
// 如果编译器不识别%zd，尝试换成%u或%lu。
#include <stdio.h> 
#include <string.h>		/* 提供strlen()函数的原型 */
#define PRAISE "You are an extraordinary beging." 
int main(void)
{
	char name[40];
	
	printf("What's your name?");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof(name));
	printf("The phrase of praise has %d letters ", strlen(PRAISE));
	printf("and occupies %d memory cells.\n", sizeof(PRAISE));
	
	return 0;
}

