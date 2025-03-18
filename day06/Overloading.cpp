/*
	함수의 다형성
	- 함수 오버로딩(함수의 다중정의) : 이름은 같은데 매개변수 타입이나 갯수가 다르면 다른 함수이다.
	- 함수 오버라이딩(함수의 재정의) --> 상속
*/

#include <iostream>
using namespace std;

// 함수 오버로딩 예제

int func() {

	return 10;
}
int func(char c) {			// c++ 에서는 동일 함수이름 뿐 아니라 매개변수도 구별가능하기때매 동일 이름사용가능

	return c;
}
int func(int n) {

	return 10 + n;
}

int func(int n1, int n2) {

	return n1 + n2;
}


int main()
{

	cout << func() << endl;
	cout << func('A') << endl;
	cout << func(10) << endl;
	cout << func(10, 20) << endl;

	return 0;
}