/*
	대문자 소문자 변환
*/
#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = 'A';
	if ((ch2 >= 'A') && (ch2 <= 'Z'));{
		ch1 = ch2 + ('a' - 'A');	// 32
	}
	printf("대문자 : %c\t", ch2);
	printf("소문자 : %c\n", ch1);

	return 0;
}