/*
	�������� ������
	�޸� �����Ҵ� ������� �����ϴ� ��ü�� �����Ҵ� �޾Ƽ� ������ �����Ͽ� ������ �Ǿ�� �Ѵ�.

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
		this->age = age;  // ��� ���� age �� �Ű����� age
	}
	Person(const Person& other) {

		cout << "Copy contructor !! \n" << endl;

		this->age = other.age;

		// ���� ���� (���ο� �޸� �Ҵ�)   p1 �� ����Ű�� �ִ� Heap ������ ������� p2�� �ٸ� ����Ȱ� ����Ű���ֱ⶧���� �̷��ϰ� ��.
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

	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}
