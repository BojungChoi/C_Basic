/*
	순환참조 : 두객체가 서로를 참조하고 둘다 share_ptr을 사용하여 참조를 유지하는 경우에 발생.
*/
#include<iostream>
using namespace std;
struct B;  // 전방 선언

struct A {
	std::shared_ptr<B> b_ptr;
	A() { cout << "A 생성자" << endl; }
	~A() { cout << "A 소멸자" << endl; }
};
struct B {
	//std::shared_ptr<A> a_ptr;
	std::weak_ptr<A> a_ptr;		// 이같은경우는 메모리 해지가 가능하다  A가 B를 소유, B는 약하게 참조(weak) 하는 구조!
	B() { cout << "B 생성자" << endl; }
	~B() { cout << "B 소멸자" << endl; }
};

int main() {
	
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	a->b_ptr = b;
	b->a_ptr = a;		// 순환참조 이같은경우는 메모리 해지가안댐 , weak_ptr이라서 참조 카운트 안 올라감!

	cout << "main 끝!" << endl;
	return 0;
}