/*
	상속에서 객체 포인터
	부모타입의 포인터로 자식타입의 객체를 가리키면 객체가 부모타입으로 업캐스팅된다.
*/
#include <iostream>
class Base {
public:
	void show() { printf("Base Class!!\n"); }

};
class Derived : public Base {			// 오버라이딩(재정의) , 부모,자식 클래스 사이에 동일한 이름의 함수이름이 같음.
public:
	void show() { printf("Derived Class!!\n"); }
};

int main()
{
	Base* bptr = nullptr;
	Derived* dptr = nullptr;

	Derived obj;		// 파생 클래스 객체
	dptr = &obj;
	dptr->show();

	bptr = &obj;		// 부모타입의 포인터로 자식타입의 객체를 가리킴 // Upcasting // 자식타입은 부모타입을 가리킬 수 없다.
	bptr->show();		// 자식을 가르켰지만, 부모의 show 메서드가 호출됨

	//자식 show 메서드 호출해보기


	return 0;
}
