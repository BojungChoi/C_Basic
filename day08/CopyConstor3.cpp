/*
	깊은복사 생성자
	메모리 동적할당 받은경우 복사하는 객체도 동적할당 받아서 별개로 복사하여 저장이 되어야 한다.

*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	char* name;
	int age;

public:
	Person(const char* name, int age) {
		cout << "Constructor call !" << endl;
		
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->age = age;  // 멤버 변수 age ← 매개변수 age
	}
	Person(const Person& other) {

		cout << "Copy contructor !! \n" << endl;

		this->age = other.age;

		// 깊은 복사 (새로운 메모리 할당)   p1 이 가르키고 있는 Heap 영역이 사라져도 p2는 다른 복사된걸 가르키고있기때문에 이러하게 씀.
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
	}

	void printPerson() {
		cout << "name : " << name << "   age : " << age << endl;

	}
	
	~Person() {
		delete[] this->name;
	}
};

int main() {

	Person p("홍길동", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}
