/*
	copyconstructor(복사생성자)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		cout << "Constructor call!!" << endl;		//  한번 호출된것을 확인할 수 있음
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& other) {			// 복사생성자  , other는 기존에 있던 객체,  함수의 매개변수로 객체를 쓸 수 없으니 , 복사생성자사용. 
											// 밑에서 객체를 전달해주면 받는쪽에선 참조로 받아야댐.(const로 참조하면 안죽으니 const 사용)
		printf("copy constructor!!\n");
		this->age = other.age;
		strncpy(this->name, other.name, strlen(other.name) + 1);
	}
	void printPerson() {
		cout << "m_name : " << name << "  m_age : " << age << endl;
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

/*
	디폴트로 자동으로 제공받는 생성자 : 디폴트 생성자, 복사 생성자, 소멸자
*/

