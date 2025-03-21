/*
	연산자 오버로딩 (다중정의)
*/
#include <iostream>

using namespace std;
class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) { } // 콜론 초기화



	void showMyclass() {
		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
	}
};
int main()
{
	//MyClass obj{ 1, 2, "홍길동" };
	//obj.showMyclass();

	//MyClass obj2;
	//obj2 = obj;			// num = 10;  ,  디폴트 대입 연산자
	//
	//obj2.showMyclass();
	//obj.showMyclass();
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	MyClass obj3 = obj + obj2;		// 일반적인 디폴트 연산자는 되지만 ! 사용자 자료형같은경우는 덧셈연산자를 만들어줘야함!
	obj3.showMyclass();

	return 0;
}