/* hello.c -- �������в���ת��Ϊ���� */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, time;
	
	if(argc<2||(times=atoi(argv[1]))<1)
		printf("Usage: %s positive-number\n", argv[0]);
	else
		for(i=0; i<times; i++)
			puts("Hello, good looking!");
	
	return 0;
} 
