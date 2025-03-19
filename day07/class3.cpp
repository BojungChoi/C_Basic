/*
	생성자constructor
*/

#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	MyClass(){
		m_num1 = 5;
		m_num2 = 12;
		cout << "디폴트 생성자 호출!" << endl;
		cout << "m_num1 : " << m_num1 << ", m_num 2 : " << m_num2 << endl;

	}
	MyClass (int num1, int num2){			// 생성자(입력을 두개 받는)
		m_num1 = num1;
		m_num2 = num2;
		cout << "매개변수 생성자 호출" << endl;
	}
	~MyClass(){		// ~ 소멸자
	
	}			

	void printData(){
		cout << "m_num1 : " << m_num1 << ", m_num 2 : " << m_num2 << endl;
	}
};
int main()
{
	MyClass obj;		// 디폴트 생성자를 받음
	MyClass obj2(100, 200);		// 외부에서 접근할 수 있는 영역이있어야함 , Public 에서 ㄱㄱ
	obj2.printData();



	return 0;
}