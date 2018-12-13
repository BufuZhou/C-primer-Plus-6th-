/* booksave.c -- ���ļ��б���ṹ�е����� */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10			/* ����鼮���� */
char *s_gets(char*st, int n);
struct book{
	char title[MAXTITL];
	char author[MAXUTL];
	float value;
}; 

int main(void)
{
	struct book library[MAXBKS];	
	int count = 0;
	int index, filecount;
	FILE *phooks
	int size = sizeof(struct book);
	
	if((phbooks=fopen("book.dat", "a+b"))==NULL)
	{
		fputs("Cant's open book.dat file\n", stderr);
		exit(1); 
	}
	
	rewind(pbooks);		/* ��λ���ļ���ʼ */
	while(count<MAXBKS&&fread(&library[count], size, phooks)==1)
	{
		if(count==0)
			puts("Current contents of book.dat:");
		printf("%s by %s:$%.2f\n", library[count].title,
			   library[count].athor, library[count], value);	
		count++;
	} 
	filecount = count;
	if(count==MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	
	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop.");
	while(count<MAXBKS&&s_gets(library[count].title, MAXTITL)!=NULL
		 &&library[count].title[0]!='\0')
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTL);
		puts("Now enter the value.");
		scanf("%f", &library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			puts("Enter the next title.");		 
	} 
	
	if(count>0)
	{
		puts("Here is the list of your books:");
		for(index=0; index<count; index++)
			printf("%s by %s: $%.2f\n", library[index].title,
					library[index].author, library[index].value);
		fwrite(&library[filecount], size, count-filecount, phbooks);
	}
	else
		puts("No books? Too bad.\n");
	puts("Bye.\n");
	fclose(phbooks);
	
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
