/*
	strcpy, strncpy - ���ڿ� ���� �Լ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100] = "orange";
	char str2[100] = "banana";
	char* ps = "apple";

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	strcpy(str1, str2); // str1�� str2�� ���� 

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	strcpy(str1, "banana"); 
	printf("str1 : %s\n", str1);

	strcpy(str1, ps); // ps�� ����Ű�� ���ͷ� ���ڿ��� str1�� ����
	printf("str1 : %s\n", str1);


	//strcpy(ps, str1); // ���ͷ� ���ڿ��� ���� �Ұ���
	//printf("ps : %s\n", ps);

	return 0;
}