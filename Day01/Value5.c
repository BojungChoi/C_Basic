#include <stdio.h>

int main()
{

	int ary[5] = { 1,2,3,4,5 }; // ������ �迭 ����

	printf("ary[0]: %d \n", ary[0]); // �迭�� ù ��° ��� ���
	ary[3] = 400;
	printf("ary[3]: %d \n", ary[3]);


	for (int i = 0; i < 5; i++) // �迭�� ��� ��� ���
	{
		printf("ary[%d]: %d \n", i, ary[i]);
	}

	return 0;
} 