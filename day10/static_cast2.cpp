/*

*/
#include <iostream>

class Base {
public:
	void func1() { std::cout << "Base::func1()" << std::endl; }
};
class Derived : public Base {
public:
	void func() { std::cout << "Derived::func()" << std::endl; }
	void func1() { std::cout << "Derived::func1()" << std::endl; }
};
class Derived2 : public Derived {
public:
	void func() { std::cout << "Derived2::func()" << std::endl; }
	void func1() { std::cout << "Derived2::func1()" << std::endl; }
};


int main()
{
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);				 // 업캐스팅 (자식 → 부모)
	bptr->func1();	// Base::func1()


	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);	// Base 객체를 Derived*로 강제 캐스팅 → 다운캐스팅인데, 이건 비정상적이다! static_cast는 그냥 타입만 바꿔줄 뿐이고, 런타임 체크 안 함!
	dptr->func();	// Derived::func()
	dptr->func1();	// Derived::func1()

	Derived2* dptr2 = static_cast<Derived2*>(dptr);		// dptr는 원래 Derived*였고, 사실 Base 객체를 가리키고 있었음!그런데 이제 Derived2*로 캐스팅해 버림.
	dptr2->func();	// Derived2::func()
	dptr2->func1();	// Derived2::func()

	return 0;
}