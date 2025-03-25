/*
	��ȯ���� : �ΰ�ü�� ���θ� �����ϰ� �Ѵ� share_ptr�� ����Ͽ� ������ �����ϴ� ��쿡 �߻�.
*/
#include<iostream>
using namespace std;
struct B;  // ���� ����

struct A {
	std::shared_ptr<B> b_ptr;
	A() { cout << "A ������" << endl; }
	~A() { cout << "A �Ҹ���" << endl; }
};
struct B {
	//std::shared_ptr<A> a_ptr;
	std::weak_ptr<A> a_ptr;		// �̰������� �޸� ������ �����ϴ�  A�� B�� ����, B�� ���ϰ� ����(weak) �ϴ� ����!
	B() { cout << "B ������" << endl; }
	~B() { cout << "B �Ҹ���" << endl; }
};

int main() {
	
	std::shared_ptr<A> a(new A());
	std::shared_ptr<B> b(new B());

	a->b_ptr = b;
	b->a_ptr = a;		// ��ȯ���� �̰������� �޸� �������ȴ� , weak_ptr�̶� ���� ī��Ʈ �� �ö�!

	cout << "main ��!" << endl;
	return 0;
}