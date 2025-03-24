/*
	Inheritance(���)
	Private, public, protected
	is a(������ �����̴�.), has a(����) ���谡 �����ؾ� �Ѵ�.
*/

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

class Human {		// �θ�Ŭ���� , ���� Ŭ����, ����Ŭ����, ���̽�Ŭ����
private:
	char name[20];
	int age;
public:
	Human(const char*, int);
	void getData();
};

class Student : public Human		// �ڽ� Ŭ����, �Ļ� Ŭ����, ���� Ŭ����, ����̺� Ŭ���� // ���� ������ (��Ӱ��� ǥ����)
{
private:
	int studentID;
public:
	Student(const char* name, int age, int studentID);		// �θ��� �Ӽ������� �ʱ�ȭ ���������
	void showStudent();
};

Human::Human(const char* aname, int aage) {
	strcpy_s(name, aname);
	age = aage;
}
void Human::getData() {		// void �ۼ��� ���� Ŭ���� �տ�
	cout << "�̸� : " << name << "   ���� : " << age << endl;
}
/* ��ӹ��� ������� ����� �θ�Ŭ������ �����ڿ��� �ʱ�ȭ�� �Ѵ�. */
Student::Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {
	//strcpy(name, aname);		// �ڽİ�ü�� �����Ҷ� �θ� Ŭ���� ��ü�� �����Ǹ�ȴ�� �޸� �Ҵ��� �ȵ��־ ������������ ����
	//age = aage;			// ���������� ������������ �θ�Ŭ������ ������ �Ǿ��Ѵ�.	-> �ݷ��ʱ�ȭ
	studentID = astudentID;
}
void Student::showStudent() {
	//cout << "�̸�" << name << endl;		// �ڽ�Ŭ�������� �θ�Ŭ���� ������ ���������
	//cout << "����" << age << endl;
	cout << "�й�" << studentID << endl;
}
int main()
{
	Human h("�浿", 25);
	h.getData();

	Student h2{ "����", 30, 20253430 };
	h2.getData();	// �θ�� ���� ��ӹ��� getData / name, age ��� 
	h2.showStudent();

	return 0;
}