/*
	scanf, gets(공백까지 입력가능)
	stdin - 표준 입력 버퍼(입력 스트림)
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() 
{
	char str[100];

	//printf("문자열 입력 >>");
	//scanf("%s", str);

	//printf("입력한 문자열 : %s", str);
	//scanf("%s\n", str);
	//printf("입력한 문자열 : %s", str);

	//printf("공백을 포함한 입력 >> ");
	//gets(str);
	//printf("입력한 문자열 : %s", str);

	/* fgets */
	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);
	printf("입력한 문자열 : %s\n", str);

	// gets 와	fgets 의 차이점
    // gets 는 개행문자를 버리고 fgets 는 개행문자를 버리지 않는다.

	return 0;
}