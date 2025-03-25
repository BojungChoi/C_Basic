/*
	스마트 포인터 : 객체의 생명 주기를 객체에 맡김으로써 프로그래머의 메모리 관리부담을 줄여준다.
	 unique_ptr - 소유권을 독점적으로 관리하는 스마트 포인터임(auto_ptr 을 대체)
*/
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass() { cout << "Myclass() 호출" << endl; }
	~MyClass() { cout << "~Myclass() 호출" << endl; }
};
int main() {

	unique_ptr<MyClass> ptr(new MyClass{});		// 스마트 포인터 형태로 선언 시 메모리 동적 해제가 필요없다.
	unique_ptr<MyClass> ptr2 = move(ptr);


	return 0;
}