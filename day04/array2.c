/*
	2���� char �迭
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char fruit[5][10];

	for (int i = 0; i < 5; i++) {
		printf("%d ��° ������ �Է��ϼ���: \n", i + 1);
		scanf_s("%s", fruit[i],sizeof(fruit));
	}

	printf("�Էµ� ������ ������ �����ϴ�.\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", fruit[i]);
	}

	return 0;
}