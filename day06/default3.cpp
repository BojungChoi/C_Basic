/*
	함수 오버로딩중에서 디폴트 매개변수와 입력이 없는 순수한 함수 정의가 있을때
	입력없는 함수 호출시 문제가 발생함.
*/
#include <iostream>
using namespace std;

int func(int n = 0) {		// 디폴트 매개변수
	return n * n;
}
int func() {		// 입력이 없는 함수
	return 10;	// 디폴트 매개변수와 함수 오버로딩을 혼용할때는 주의해야한다.
}

int main()
{
	cout << func(10) << endl;
	cout << func() << denl;	// 입력이 없는 함수 호출시 문제 발생 (디폴트 매개변수와 함수 오버로딩 혼용시)

	return 0;
}