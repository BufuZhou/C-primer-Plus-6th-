// names.h --�޶����names_stͷ�ļ��������ظ�����

#ifndef NAMES_H_
#define NAMES_H_

// ��ʾ����
#define SLEN 32

// �ṹ����
struct names_st
{
	char first[SLEN];
	char last[SLEN];
}; 

// ���Ͷ���
typedef struct names_st names;

// ����ԭ��
void get_names(names *);
void show_names(const names *);
char *s_gets(char *st, int n);

#endif

 
