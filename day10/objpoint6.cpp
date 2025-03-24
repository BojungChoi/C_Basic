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
	//dptr = &bobj;			// �ڽ��� �θ� ����ų �� ����.
	
	//dptr = (Base*)&bobj;
	//dptr->show();


	dptr = (Derived*)&bobj;		// �������Ҽ�����. �ڽİ�ü ����ȯ �����ְ� ����Ű�� �����ϱ���.
	dptr->show();

	return 0;
}