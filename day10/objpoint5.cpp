/*
	��ӿ��� ��ü ������
	�θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ű�� ��ü�� �θ�Ÿ������ ��ĳ���õȴ�.
*/
#include <iostream>
class Base {
public:
	void show() { printf("Base Class!!\n"); }

};
class Derived : public Base {			// �������̵�(������) , �θ�,�ڽ� Ŭ���� ���̿� ������ �̸��� �Լ��̸��� ����.
public:
	void show() { printf("Derived Class!!\n"); }
};

int main()
{
	Base* bptr = nullptr;
	Derived* dptr = nullptr;

	Derived obj;		// �Ļ� Ŭ���� ��ü
	dptr = &obj;
	dptr->show();

	bptr = &obj;		// �θ�Ÿ���� �����ͷ� �ڽ�Ÿ���� ��ü�� ����Ŵ // Upcasting // �ڽ�Ÿ���� �θ�Ÿ���� ����ų �� ����.
	bptr->show();		// �ڽ��� ����������, �θ��� show �޼��尡 ȣ���

	//�ڽ� show �޼��� ȣ���غ���


	return 0;
}
