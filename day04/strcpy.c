/*
	strcpy, strncpy - 문자열 복사 함수
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

	strcpy(str1, str2); // str1에 str2를 복사 

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

	strcpy(str1, "banana"); 
	printf("str1 : %s\n", str1);

	strcpy(str1, ps); // ps가 가리키는 리터럴 문자열을 str1에 복사
	printf("str1 : %s\n", str1);


	//strcpy(ps, str1); // 리터럴 문자열은 수정 불가능
	//printf("ps : %s\n", ps);

	return 0;
}