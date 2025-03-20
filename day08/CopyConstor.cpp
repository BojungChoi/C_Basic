/*
	copyconstructor(복사생성자)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Person {
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* pname, int age) {
		cout << "Constructor call!!" << endl;		//  한번 호출된것을 확인할 수 있음
		strcpy(m_name, pname);
		m_age = age;
	}
	void printPerson() {
		cout << "m_name : " << m_name << "  m_age : " << m_age << endl;
	}
};

int main()
{
	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);		// 복사 생성자 시작! , 복사할때는 기본적인 생성자가 호출이 안됨. 복사생성자 기능이 디폴트로 있다는 뜻.
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}