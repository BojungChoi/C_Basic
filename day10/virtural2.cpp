/*
	virtaul Class - 순수 지정자를 가지는 메서드를 순수가상함수라하며, 이 순수가상함수를 가지는 클래스  
	추상클래스는 객체생성이 불가능하다.
*/
using namespace std;
#include <iostream>
class Cinterface {		// 추상클래스(순수가상함수를가지고있기때문) , 객체를 생성할 수 없다. 방법은 상속을 받고있는 놈은 없는 몸체를 작성해서 오버라이드해야함!
public:
	Cinterface() { cout << "CInterface constructor" << endl; }
	virtual void getData() const = 0;	// 순수 가상 함수
};
class CinSub : public Cinterface{
public:
	CinSub() { cout << "CinSub constructor" << endl; }
	void getData() const override {			// 오버라이드(재정의) 필 수 
		cout << "Pure Virtual function()" << endl;
	}
};

int main()
{
	//Cinterface obj; 추상클래스는 객체생성이 불가능하다.
	CinSub obj;
	obj.getData();

	return 0;
}