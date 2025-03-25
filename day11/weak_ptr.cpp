/*
	   weak_ptr : 레퍼런스 카운트에 영향을 주지 않는 스마트 포인터
	- shared_ptr와는 다르게 객체의 소유권을 가지지 않음
	- 참조 카운트 증가 없이 객체를 감시할 때 사용
	- lock() 호출 시 객체가 살아있다면 shared_ptr로 변환 가능
*/
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass() { cout << "constructor" << endl; }
	~MyClass() { cout << "~constructor" << endl; }
	void func() { cout << "Hi shared_ptr" << endl; }

};


int main() {
	std::shared_ptr<MyClass> ptr = std::make_shared < MyClass >();		// C++11부터 지원됨 (make_unique는 C++14부터)
	std::weak_ptr<MyClass>  weakPtr = ptr; // weak_ptr : 레퍼런스 카운트에 영향을 주지않는 스마트 포인터
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();		// weak_ptr 에서 shared_ptr 변환  
	// lock()을 호출해 shared_ptr로 변환하면 참조 카운트가 1 증가함
	if (ptr2) { cout << "weak_ptr로 변환한 shared_ptr 사용가능" << endl; }

	std::cout << "참조 카운트: " << ptr.use_count() << std::endl;

	return 0;
}