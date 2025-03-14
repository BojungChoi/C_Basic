/*
	문자열
*/


#include <stdio.h>

int main()
{
	char str[100] = "orange";

	printf("%s\n", str); // 문자열 변수 (읽을 수 있는 메모리에 저장된 문자열)
	printf("%s\n", "orange"); // 문자열 상수
	printf("%p\n", "orange"); // 문자열 상수의 주소값
	printf("%c\n", *"orange"); // 문자열 상수의 첫번째 문자
	printf("%c\n", *("orange" + 1)); // 문자열 상수의 두번째 문자
	printf("%c\n", "orange"[2]); // 문자열 상수의 세번째 문자

	"orange"[0] = 'O'; // 문자열 상수는 읽기 전용 메모리에 저장되어 있기 때문에 수정 불가능
	str[0] = 'O'; // 가능
	printf("%s\n", str);

	return 0;
}
