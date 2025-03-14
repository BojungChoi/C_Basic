/*
	stracat - 문자열을 붙히는 함수
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char str1[100] = "apple";
	char str2[100] = "banana";
	strcat(str1, str2);
	printf("결합된 문자열 : %s\n", str1);

	char str3[100] = "water";
	strcat(str3, "melon");
	printf("결합된 문자열 : %s\n", str3);

	return 0;
}