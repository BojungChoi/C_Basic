/*
*/
/*
	dynamic_cast를 이용하여 다운캐스팅하는 경우는 가상함수가 있어야한다.
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
	Super* sp2 = new Sub{};		// 자식개체를 부모포인트가 가리키고있음.
	sp2->func();
	sp2->func1();
	sp2->fx();
	//sp->func2(); // 당연히 자식개체를 가르킬순없음
	cout << "+-------------- downcasting ----------------+" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(sp2);	// Super class 타입을 Sub클래스 타입으로 변환 
	sp3->func();
	sp3->func1();
	sp3->func2();
	sp->fx();

	return 0;
}