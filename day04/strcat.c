/*
	stracat - ���ڿ��� ������ �Լ�
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100] = "apple";
	char str2[100] = "banana";
	strcat(str1, str2);
	printf("���յ� ���ڿ� : %s\n", str1);

	char str3[100] = "water";
	strcat(str3, "melon");
	printf("���յ� ���ڿ� : %s\n", str3);

	return 0;
}