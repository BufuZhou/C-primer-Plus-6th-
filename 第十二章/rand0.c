/* rand0.c --��������� */
/* ʹ��ANSI C����ֲ�㷨 */
static unsigned long int next = 1;	/* ���� */

unsigned int rand0(void)
{
	/* ����α�������ħ����ʽ */
	next = next * 1103515245  + 12345;
	return (unsigned int) (next/65536) % 32768 
}
