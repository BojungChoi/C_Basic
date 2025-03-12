/*
	함수 원형
	함수 원형, 함수 호출, 함수 정의
*/

#include <stdio.h>

int func(int, int);		// 함수선언, 함수원형


int main()
{
	int result = func(10, 20);
	printf("호출 후 리턴된 값 : %d\n", result);

	return 0;
}

int func(int a, int b)
{
	int result = a + b ;
	
		
	return 0;
}

