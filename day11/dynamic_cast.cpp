/*
	기본 클래스를 참조하는 L-Value를 파생된 클래스에 대한 참조로 변환
	상속관계에서 안전하게 형변환을 지원한다. 업캐스팅
	다운캐스팅경우는 다형성을 위해서 virtual 메서드가 꼭 있어야 한다.
*/

#include <iostream>

class SuperClass {
public:
	int n1, n2;
};
class SubClass : public SuperClass {
public:
	int n3, n4;
};
class Sub2 : public SubClass {
public:
	int n5, n6;
};
int main() {

	SuperClass* sp;
	SubClass* sup;
	Sub2* sup2;
	Sub2 obj{};

	sup2 = dynamic_cast<Sub2*>(&obj);		// 명시적으로 정확한 형변환을 위해 dynamic_cast<Sub2*>
	sup = dynamic_cast<SubClass*>(sup2);	// upcasting
	sp = dynamic_cast<SuperClass*>(sup2);

	return 0;
}