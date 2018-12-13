// func_ptr.c --ʹ�ú���ָ��
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char *s_gets(char *st, int n);
char showmenu(void);
void eatline(void);
void show(void(*fp)(char *), char *str);
void ToUpper(char *);
void ToLower(char *);
void Transponse(char *);
void Dummy(char *);

int main(void)
{
	char line[LEN];
	char copy[LEN];
	char choice;
	void (*pfun)(char*);
	
	puts("Enter a string(empty line to quilt): ");
	while(s_gets(line, LEN)!=NULL&&line[0]!='\0')
	{
		while((choice=showmenu())!='n')
		{
			switch(choice)		// switch�������ָ��
			{
				case'u': pfun = ToUpper; break;
				case'l': pfun = ToLower; break;
				case't': pfun = Transpose; break;
				case'o': pfun = Dummy; 
			}
			strcpy(copy, line);
			show(pfun, copy);		
		}
	}
	puts("Enter a string(empty line to quilt): ");	

	return 0;
} 

char showmenu(void)
{
	char ans;
	puts("Enter menu choices: ");
	puts("u) uppercase 		1) lowercase");
	puts("t) transposed case 0) original case");
	puts("n) next string");
	ans = getchar();
	ans = tolower(ans);
	eatline();
	while(strchr("ulton", ans)==NULL)
	{
		puts("Please enter a u, l, t, o, or n:");
		ans = tolower(getchar());
		eatline();
	}
	
	return ans;
}

void eatline(void)
{
	while(getchar()!='\n')
		continue;
}

void ToUpper(char *str)
{
	while(*str)
	{
		*str = toupper(*str);
		str++;
	}
}

void ToLower(char *str)
{
	while(*str)
	{
		*str = tolower(*str);
		str++;
	}
}

void Transpose(char *str)
{
	while(*str)
	{
		if(islower(*str))
			*str = toupper(*str);
		else if(isupper(*str))
			*str = tolower(*str);
		str++;
	}
}

void Dummy(char *str)
{
	// ���ı��ַ���	
} 

void show(void(*fp)(char *), char *str)
{
	(*fp) (str);
	puts(str);	
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
