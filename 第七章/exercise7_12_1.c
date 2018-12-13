/* exercise7_12_1.c */
#include <stdio.h>

int main(void)
{
	int Nspace=0, Nenter=0, Nother=0;
	char ch;
	
	while((ch=getchar())!='#')
	{
		if(ch==' ')
			Nspace++;
		else if(ch=='\n')
			Nenter++;
		else 
			Nother++;
	}
	
	printf("There are %d spaces, %d newlines, %d others.", Nspace, Nenter, Nother);
	
	return 0;f
}
