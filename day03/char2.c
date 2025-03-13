/*
	getchar, putchar - 문자전용 함수
*/

#include <stdio.h>

int main()
{
	int ch;

	ch = getchar();		// 한문자를 읽어오는 함수
	putchar(ch);		// 한문자를 출력하는 함수
	putchar('\n');		// 개행
	printf("input : %d\n", ch);

	return 0;
}