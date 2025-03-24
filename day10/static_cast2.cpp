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
	bptr = static_cast<Base*>(&dobj);				 // ��ĳ���� (�ڽ� �� �θ�)
	bptr->func1();	// Base::func1()


	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);	// Base ��ü�� Derived*�� ���� ĳ���� �� �ٿ�ĳ�����ε�, �̰� ���������̴�! static_cast�� �׳� Ÿ�Ը� �ٲ��� ���̰�, ��Ÿ�� üũ �� ��!
	dptr->func();	// Derived::func()
	dptr->func1();	// Derived::func1()

	Derived2* dptr2 = static_cast<Derived2*>(dptr);		// dptr�� ���� Derived*����, ��� Base ��ü�� ����Ű�� �־���!�׷��� ���� Derived2*�� ĳ������ ����.
	dptr2->func();	// Derived2::func()
	dptr2->func1();	// Derived2::func()

	return 0;
}