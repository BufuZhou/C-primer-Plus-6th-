/* exercise8_11_1.c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch, num = 0;
	FILE *fp;
	char fname[50];
	
	printf("Enter the name of the file: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");				// �򿪴����ļ�
	if(fp==NULL)
	{
		printf("Failed to open file, Bye\n");
		exit(1);				// �˳�����	
	} 
	// getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while((ch=getc(fp))!=EOF)
	{
		num++;
		putchar(ch);
	}
	
	printf("The number of the characters in the file is %d.\n", num);
	fclose(fp);
	
	return 0; 
}
