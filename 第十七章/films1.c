/* films1.c --ʹ��һ���ṹ���� */
#include <stdio.h>
#include <string.h>
#define TSIZE 	45 	/* ����Ƭ���������С */
#define FMAX	5	/* ӰƬ��������� */

struct filem{
	char title[TSIZE];
	int rating;
}; 

char *s_gets(char str[], int lim);
int main(void)
{
	strut film movies[FMAX];
	int i = 0;
	int j;
	
	puts("Enter first movie title: ");
	while(i<FMAX&&s_gets(movies[i].title, TSIZE)!=NULL&&
		movie[i].title[0]!='\0')
	{
		puts("Enter your rating<0-10>: ");
		scanf("%d", &movies[i++].rating);
		while(getchar()!='\n')
			continue;
		puts("Enter next movie title(empty line to stop):");
	}
	if(i==0)
		printf("No data entered. ");
	else
		printf("Here is the movie list:\n");
		
	for(j=0; j<i; j++)
		printf("Movie: %s Rating:%d\n", movies[j].title, movies[j].rating);
	printf("Bye!\n");
	
	return 0;
}

char *s_gets(char *st, int n)
{
	char *ret_val;
	char *find;
	
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar()!='\n')
				continue;
	} 
	return ret_val; 
}





