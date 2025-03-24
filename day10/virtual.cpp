/*
	virtual function : 파생 클래스에서 재정의(override)할 수 있도록 만든 멤버 함수.
	Base 클래스의 멤버 함수에 virtual 키워드를 붙여서 선언한다.
	컴파일러가 virtual table(vtable)을 생성하며,
	런타임(runtime)에 실제 객체 타입을 기준으로 함수 호출이 결정되는 동적 바인딩(Dynamic Binding)이 일어난다.
*/

using namespace std;
#include <iostream>
class Base {
public:
	virtual void func1() { cout << "B::func1()" << endl; }	// 가상함수
	virtual void func2() { cout << "B::func2()" << endl; }	// 가상함수
	void func3() { cout << "B::func3()" << endl; }

};
class Derived : public Base {
	void func1() override { cout << "D::func1()" << endl; }	// 가상함수를 재정의 하는 멤버 함수를 나타냄.
	void func3() { cout << "D::func3()" << endl; }
	void func4() { cout << "D::func4()" << endl; }

};


int main()
{
	Base b;
	Derived d;
	Base* bptr = new Derived();  // upcasting (부모 타입 포인터가 자식 객체를 가리킴)

	// virtual 함수이므로 런타임에 실제 객체(Derived)의 func1()이 호출됨 → Dynamic Binding!
	bptr->func1();   // 출력: D::func1()

	// Derived가 func2()를 오버라이드 안 했으므로 부모(Base)의 func2() 호출
	bptr->func2();   // 출력: B::func2()

	// func3()는 virtual이 아니기 때문에 컴파일 타임에 포인터 타입(Base*) 기준으로 결정 → Static Binding
	bptr->func3();   // 출력: B::func3()

	//bptr->func4();   // 객체포인터가 접근할수 있는 영역을 벗어남 출력X

	delete bptr;
	
	printf("---------------------------------------\n");
	
	bptr = &b;
	bptr->func1();
	bptr->func2();
	bptr->func3();

	return 0;
}
/*
	객체 포인터의 다형성으로 기초 클래스 타입의 포인터로 파생 클래스의 객체를 가리키면 접근은 기초 클래스 멤버로 제한된다.
	이때 오버라이딩(override)된 파생 클래스의 멤버를 사용하기 위해선 기초 클래스의 멤버함수를 가상함수로(virtual) 만들면 된다.
	이것은 컴파일시 포인터형으로 바인딩되지 못하고 런타임에서 포인트가 어떤 객체를 가리키고 있는지에 따라 바인딩할 함수를 결정한다.

	객체 포인터를 이용한 다형성에서는, 기초 클래스 타입의 포인터가 파생 클래스 객체를 가리킬 수 있다.
	하지만 이 경우, 포인터 타입이 기초 클래스이기 때문에 기본적으로 기초 클래스의 멤버 함수만 호출할 수 있다.

	파생 클래스에서 오버라이딩(override)한 멤버 함수를 호출하려면,
	기초 클래스의 멤버 함수를 가상 함수(virtual)로 선언해야 한다.

	가상 함수로 선언하면, 컴파일 타임에 호출할 함수가 결정되지 않고,
	런타임(runtime)에 포인터가 실제로 가리키는 객체 타입에 따라 호출할 함수가 동적으로 결정된다.
	이 과정을 **동적 바인딩(Dynamic Binding)**이라고 한다.

*/