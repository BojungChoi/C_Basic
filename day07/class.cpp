/*

*/
#include <iostream>
using namespace std;

class A {		// 약속 클래스 이름은 대문자
public: 
		int m_num = 0;		// 멤버변수(속성)

		void set(int num) {
			m_num = num;		// m_num  에 받은 num으로 초기화시켜라
		}
		void print() {	// 멤버함수(기능), 메서드
			cout << "나는 A 클래스의 인스턴스입니다."<< m_num << endl;
		}

};
int main()
{
	A obj;	// A 클래스의 인스턴스 obj
	obj.print();
	obj.set(10);
	obj.print();

	return 0;
}


	//객체를 생성하기위해선
	//	생성자를 호출
	//	생성자를 호출안하면
	//	객체가 생성이 안데잉
	//	여 턴 객체가 생성되기위해선 생성자가 생성대야대잉
	// 클래스 A 로만들어놓은 객체 obj
	// 어떤클래스로부터 만들어진 객체이냐?할땐 인스턴스	
	// 클래스도 타입이다. int a 같은 변수선언같은 개념 
