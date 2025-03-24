/*
*/
#include <iostream>

class Base {
public:
	void show() { printf("Base Class"); }

};
class Derived : public Base {
public:
	void show() { printf("Derived Class"); }
};

int main() {

	Base bobj;
	Derived* dptr = nullptr;
	//dptr = &bobj;			// 자식은 부모를 가리킬 수 없다.
	
	//dptr = (Base*)&bobj;
	//dptr->show();


	dptr = (Derived*)&bobj;		// 강제로할순있음. 자식개체 형변환 시켜주고 가르키면 가능하긴함.
	dptr->show();

	return 0;
}