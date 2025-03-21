/*
	템플릿은 선언과 함수정의가 분리될 수 없다.
*/
#include <iostream>
using namespace std;
template <typename T>		// 템플릿 일반화 선언
T func(T a, T b) {			// 템플릿 함수
	cout << "Type : T" << endl;
	return a + b;
}

template <>					// 템플릿 특수화 일반화중 특별한 타입만 처리할 경우
int func<int>(int a, int b) {
	cout << "Type : <int>" << endl;
	return a + b;
}

int main() {
	// int 타입이니까 특수화된 템플릿이 호출됨
	cout << func(10, 20) << endl;        // <int> 출력

	// double 타입은 일반 템플릿이 호출됨
	cout << func(10.12, 20.23) << endl;  // T 출력	 , 타입을 명시적으로 선언하지 않아도 알아서 해주지만, 명시적으로<float> 같이 적어주는것이 좋음

	cout << func<double>(10.1, 20.2) << endl;
	cout << func<int>(100, 10) << endl;

	return 0;
}