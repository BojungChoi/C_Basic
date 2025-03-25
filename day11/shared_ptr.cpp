/*
	shared_ptr
	make_shared : 객체와 참조 카운트를 하나의 메모리블록에 같이 할당시킨다. shared_ptr을 생성하는 함수
	shared_ptr은 참조 카운트를 통해 객체의 소유권을 공유한다. 여러개의 shared_ptr은 
	레퍼런스 카운트가 0이되면 메모리가 자동 해제된다.
*/
using namespace std;
#include <iostream>
class MyClass {
public:
	MyClass() {  cout << "Myclass contructor" << endl; }
	~MyClass() {cout << "~Myclass contructor " << endl; }
	void func() { cout << "Hi Shared_ptr" << endl; }
};

int main() {

	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
	std::shared_ptr<MyClass> ptr2 = ptr;
	printf("ptr과 ptr2는 동일한 객체를 가리킨다. 공유한다.\n");

	ptr2->func();

	return 0;
}