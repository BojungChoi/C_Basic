/* 
함수 : 입력과 출력이 있는 함수 
*/

#include <stdio.h>


int func(int a, int b) {		

	int res = a + b;

	return res;
}


int main() 
{
	int result = func(10, 20);		// 실인수

	printf("호출 된 값 : %d", result);

	return 0;
}


