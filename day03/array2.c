#include <stdio.h>

int main()
{
	int ary[] = { 1, 2, 3 };
	
	printf("�迭�� ��üũ�� : %d\n", sizeof(ary));
	printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(*(ary+0)));
	printf("�迭 �� �Ѱ��� ũ��: %d\n", sizeof(ary[0]));
	printf("�迭 ���� ����: %d\n", sizeof(ary) / sizeof(ary[1]));
	printf("�迭 �̸� : %p\n", ary);
	printf("�迭�� ù��°�� �ּ� %p \n", &ary[0]);
	printf("�迭�� �ι�°�� �ּ�%p\n", ary + 1);
	printf("�迭�� �ι�°�� �ּ�%p\n", &ary[1]);


	return 0;
}
