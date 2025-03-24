/*
	virtual function : �Ļ� Ŭ�������� ������(override)�� �� �ֵ��� ���� ��� �Լ�.
	Base Ŭ������ ��� �Լ��� virtual Ű���带 �ٿ��� �����Ѵ�.
	�����Ϸ��� virtual table(vtable)�� �����ϸ�,
	��Ÿ��(runtime)�� ���� ��ü Ÿ���� �������� �Լ� ȣ���� �����Ǵ� ���� ���ε�(Dynamic Binding)�� �Ͼ��.
*/

using namespace std;
#include <iostream>
class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }	// �����Լ�
	virtual void func2() { cout << "B::func2()" << endl; }	// �����Լ�
	void func3() { cout << "B::func3()" << endl; }

};
class Derived : public Base {
	void func1() override { cout << "D::func1()" << endl; }	// �����Լ��� ������ �ϴ� ��� �Լ��� ��Ÿ��.
	void func3() { cout << "D::func3()" << endl; }
	void func4() { cout << "D::func4()" << endl; }

};


int main()
{
	Base b;
	Derived d;
	Base* bptr = new Derived();  // upcasting (�θ� Ÿ�� �����Ͱ� �ڽ� ��ü�� ����Ŵ)

	// virtual �Լ��̹Ƿ� ��Ÿ�ӿ� ���� ��ü(Derived)�� func1()�� ȣ��� �� Dynamic Binding!
	bptr->func1();   // ���: D::func1()

	// Derived�� func2()�� �������̵� �� �����Ƿ� �θ�(Base)�� func2() ȣ��
	bptr->func2();   // ���: B::func2()

	// func3()�� virtual�� �ƴϱ� ������ ������ Ÿ�ӿ� ������ Ÿ��(Base*) �������� ���� �� Static Binding
	bptr->func3();   // ���: B::func3()

	//bptr->func4();   // ��ü�����Ͱ� �����Ҽ� �ִ� ������ ��� ���X

	delete bptr;
	
	printf("---------------------------------------\n");
	
	bptr = &b;
	bptr->func1();
	bptr->func2();
	bptr->func3();

	return 0;
}
/*
	��ü �������� ���������� ���� Ŭ���� Ÿ���� �����ͷ� �Ļ� Ŭ������ ��ü�� ����Ű�� ������ ���� Ŭ���� ����� ���ѵȴ�.
	�̶� �������̵�(override)�� �Ļ� Ŭ������ ����� ����ϱ� ���ؼ� ���� Ŭ������ ����Լ��� �����Լ���(virtual) ����� �ȴ�.
	�̰��� �����Ͻ� ������������ ���ε����� ���ϰ� ��Ÿ�ӿ��� ����Ʈ�� � ��ü�� ����Ű�� �ִ����� ���� ���ε��� �Լ��� �����Ѵ�.

	��ü �����͸� �̿��� ������������, ���� Ŭ���� Ÿ���� �����Ͱ� �Ļ� Ŭ���� ��ü�� ����ų �� �ִ�.
	������ �� ���, ������ Ÿ���� ���� Ŭ�����̱� ������ �⺻������ ���� Ŭ������ ��� �Լ��� ȣ���� �� �ִ�.

	�Ļ� Ŭ�������� �������̵�(override)�� ��� �Լ��� ȣ���Ϸ���,
	���� Ŭ������ ��� �Լ��� ���� �Լ�(virtual)�� �����ؾ� �Ѵ�.

	���� �Լ��� �����ϸ�, ������ Ÿ�ӿ� ȣ���� �Լ��� �������� �ʰ�,
	��Ÿ��(runtime)�� �����Ͱ� ������ ����Ű�� ��ü Ÿ�Կ� ���� ȣ���� �Լ��� �������� �����ȴ�.
	�� ������ **���� ���ε�(Dynamic Binding)**�̶�� �Ѵ�.

*/