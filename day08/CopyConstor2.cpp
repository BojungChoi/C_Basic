/*
	copyconstructor(���������)
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
		cout << "Constructor call!!" << endl;		//  �ѹ� ȣ��Ȱ��� Ȯ���� �� ����
		strcpy(this->name, name);
		this->age = age;
	}
	Person(const Person& other) {			// ���������  , other�� ������ �ִ� ��ü,  �Լ��� �Ű������� ��ü�� �� �� ������ , ��������ڻ��. 
											// �ؿ��� ��ü�� �������ָ� �޴��ʿ��� ������ �޾ƾߴ�.(const�� �����ϸ� �������� const ���)
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
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);		// ���� ������ ����! , �����Ҷ��� �⺻���� �����ڰ� ȣ���� �ȵ�. ��������� ����� ����Ʈ�� �ִٴ� ��.
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}

/*
	����Ʈ�� �ڵ����� �����޴� ������ : ����Ʈ ������, ���� ������, �Ҹ���
*/

