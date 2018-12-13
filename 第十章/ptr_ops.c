// ptr_ops.c -- ָ����� 
#include <stdio.h>
int main(void)
{
	int urn[5] = {100, 200, 300, 400, 500};
	int *ptr1, *ptr2, *ptr3;
	
	ptr1 = urn;			// ��һ����ַ����ָ��
	ptr2 = &urn[2];		// ��һ����ַ����ָ�룬������ָ�룬�Լ����ָ��ĵ�ַ
	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

	printf("pointer value, dereferenced pointer, pointer address:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

	
	// ָ��ӷ�
	ptr3 = ptr1 + 4;
	printf("\nadding an int to a pointer:\n");
	printf("ptr1 + 4 = %p, *(ptr1+4) = %d\n", ptr1+4, *(ptr1+4));
	ptr1++;		// ����ָ��
	printf("\nvalues after ptr1++:\n");
	printf("ptr1 = %p, *ptr1 = %d, &ptr = %p\n", ptr1, *ptr1, &ptr1);
	ptr2--;
	printf("\nvalues after -ptr2:\n");
	printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);
	--ptr1;			// �ָ�Ϊ��ʼֵ
	++ptr2;			// �ָ�Ϊ��ʼֵ
	printf("\nPointers reset to original values:\n");
	printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);
	// һ��ָ���ȥ��һ��ָ��
	printf("\nsubstracting one pointer from another:\n");
	printf("ptr2 = %p, ptr1 = %p, ptr2 - ptr1 = %td\n", ptr2, ptr1, ptr2 - ptr1); 
	// һ��ָ���ȥһ������
	printf("\nsubstracting an int from a pointer:\n");
	printf("ptr3 = %p, ptr3 - 2 = %p\n", ptr3, ptr3 - 2);
	
	return 0; 
} 
