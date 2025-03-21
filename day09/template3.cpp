/*
	클래스 템플릿
*/

#include <iostream>
using namespace std;

// 클래스 템플릿 선언
template <typename T, typename T2>
class MyClass {
private:
	T data1;
	T2 data2;

public:
	// 생성자
	MyClass(T a, T2 b) : data1(a), data2(b) {}

	// 멤버 함수
	void show() {
		cout << "data1: " << data1 << endl;
		cout << "data2: " << data2 << endl;
	}
};

int main() {
	// 인자 타입 자동 추론 (int, double)
	MyClass<int, double> obj1(10, 3.14);
	obj1.show();

	cout << "------------------------" << endl;

	// 명시적으로 타입 지정
	MyClass<const char*, double> obj2("클래스 템플릿", 2.718);
	obj2.show();

	cout << "------------------------" << endl;

	// 타입 다르게 또 만들어보기
	MyClass<string, int> obj3("Hello Template Class!", 2024);
	obj3.show();

	return 0;
}
