/*
	  static
*/

#include <stdio.h>

void incFunc();
void incFunc2();
int main()
{

	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	// scnt++;									// 정적	변수는 다른 함수에서 사용할 수 없다.		

	return 0;
}

void incFunc()
{
	int icnt = 0;
	icnt++;
	printf("incFunc: cnt = %d\n", icnt);
}

void incFunc2()
{
	static int scnt = 0;
	scnt++;
	printf("incFunc2: cnt = %d\n", scnt);
}
// 위의 코드는 static 변수를 사용한 예제이다. static 변수는 프로그램이 실행되는 동안 메모리에 상주하면서 그 값을 유지한다.
// static 변수는 함수 내에서 선언되어 함수 내에서만 사용되는 지역 변수로 사용된다.
