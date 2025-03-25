/*
*/
/*
	dynamic_cast�� �̿��Ͽ� �ٿ�ĳ�����ϴ� ���� �����Լ��� �־���Ѵ�.
*/
using namespace std;
#include <iostream>
class Super {
public:
	virtual void func() { cout << "Super::func()" << endl; }
	void func1() { cout << "Super::func1()" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};
class Sub : public Super {
public:
	void func() { cout << "Sub::func()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void fx() { cout << "Sub::fx()" << endl; }

};

int main() {

	Super* sp = new Super{};
	sp->func();
	sp->func1();
	sp->fx();
	cout << "+-------------- Upcasting ----------------+" << endl;
	Super* sp2 = new Sub{};		// �ڽİ�ü�� �θ�����Ʈ�� ����Ű������.
	sp2->func();
	sp2->func1();
	sp2->fx();
	//sp->func2(); // �翬�� �ڽİ�ü�� ����ų������
	cout << "+-------------- downcasting ----------------+" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(sp2);	// Super class Ÿ���� SubŬ���� Ÿ������ ��ȯ 
	sp3->func();
	sp3->func1();
	sp3->func2();
	sp->fx();

	return 0;
}