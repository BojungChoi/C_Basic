/* 
함수 : 입력과 출력이 없는 함수 -
함수안에서 결과를 나타낸다.
*/

#include <stdio.h>


void func() {		// 함수 정의
	int a = 10, b = 20;
	printf("void func()\n");
	printf("a + b = %d", a + b);
}

int main()
{
	func();			// 함수 호출
	return 0;
}