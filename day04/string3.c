/*
	scanf, gets(������� �Է°���)
	stdin - ǥ�� �Է� ����(�Է� ��Ʈ��)
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
	char str[100];

	//printf("���ڿ� �Է� >>");
	//scanf("%s", str);

	//printf("�Է��� ���ڿ� : %s", str);
	//scanf("%s\n", str);
	//printf("�Է��� ���ڿ� : %s", str);

	//printf("������ ������ �Է� >> ");
	//gets(str);
	//printf("�Է��� ���ڿ� : %s", str);

	/* fgets */
	printf("������ ������ �Է� >> ");
	fgets(str, sizeof(str), stdin);
	printf("�Է��� ���ڿ� : %s\n", str);

	// gets ��	fgets �� ������
    // gets �� ���๮�ڸ� ������ fgets �� ���๮�ڸ� ������ �ʴ´�.

	return 0;
}