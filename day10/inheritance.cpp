/*
	Inheritance(상속)
	Private, public, protected
	is a(무엇은 무엇이다.), has a(소유) 관계가 성립해야 한다.
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Human {		// 부모클래스 , 기초 클래스, 슈퍼클래스, 베이스클래스
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human		// 자식 클래스, 파생 클래스, 서브 클래스, 드라이브 클래스 // 접근 지시자 (상속관계 표현법)
{
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);		// 부모의 속성까지도 초기화 시켜줘야함
	void showStudent();
};

Human::Human(const char* aname, int aage) {
	strcpy_s(name, aname);
	age = aage;
}
void Human::getData() {		// void 작성시 주의 클래스 앞에
	cout << "이름 : " << name << "   나이 : " << age << endl;
}
/* 상속받은 멤버들은 상속한 부모클래스의 생성자에서 초기화를 한다. */
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
	//strcpy(name, aname);		// 자식객체를 생성할때 부모 클래스 객체를 생성되면안댄다 메모리 할당이 안되있어서 물려받을수가 없다
	//age = aage;			// 실제적으로 물려받으려면 부모클래스가 생성이 되야한다.	-> 콜론초기화
	studentID = astudentID;
}
void Student::showStudent() {
	//cout << "이름" << name << endl;		// 자식클래스에서 부모클래스 접근은 오류가뜬다
	//cout << "나이" << age << endl;
	cout << "학번" << studentID << endl;
}
int main()
{
	Human h("길동", 25);
	h.getData();

	Student h2{ "꺽정", 30, 20253430 };
	h2.getData();	// 부모로 부터 상속받은 getData / name, age 출력 
	h2.showStudent();

	return 0;
}