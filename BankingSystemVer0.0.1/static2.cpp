/*
	Static 멤버 함수
*/

#include <iostream>

class AAA{
private:
	static int static_a;		// static 멤버변수
	int n;
public:
	AAA(int a);
	static void setStatic_a(int a);		// static 멤버 함수
	void print();
};

int AAA::static_a = 100;	// 외부에서 초기화. (소속을 밝혀줘야함 AAA::)

AAA::AAA(int n) {
	this->n = n;
}

void AAA::print() {
	printf("static_a: %d , a: %d \n", static_a, n);
}

void AAA::setStatic_a(int a){
	static_a = a;
	// n = 0;		// static 멤버함수에는 static 멤버변수만 들어와야지 일반 변수가 들어오면 안된다. 스태틱 멤버의 사용만 가능하다
}
int main()
{
	AAA obj1(10), obj2(20);
	obj1.print();
	obj2.print();

	obj1.setStatic_a(150);
	obj1.print();
	

	return 0;
}