/* 문자 */
#include<stdio.h>
int main(void)
{
	printf("%c\n", 'A'); // 문자 출력 C언어에서는 문자는 ''로 표현 ""는 문자열
	printf("최보정\n");
	printf("%s\n", "최보정"); // 문자열 출력 C언어에서는 문자열은 ""로 표현
	
	
	printf("이름 : %s\n", "최보정");
	printf("나이는 : %d\n", 25);
	printf("키는 : %d", 180);

	return 0;
}