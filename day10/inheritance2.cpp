/*
	protected ��������� ��ӹ��� �ڽ��� ���� �����ϴ�.
*/


#include<iostream>
#include<string.h>
#include <stdio.h>

using namespace std;

class Human {
protected:
	char name[20];
	int age;
public:
	Human (const char* aname, int aage){
		strcpy_s(name, aname);
		age = aage;
	}
	
	void getData(){
		cout << "�̸�: " << name << " ���� :" << age << endl;
	}
};

class Student : public Human {
private:
	int studentID;
public:
	Student(const char* aname, int aage, int astudentID) : Human(aname, aage) {		// �̴ϼȶ����� ����

		studentID = astudentID;
	}
	void showStudent() {
		cout << "�̸� : " << name << endl;		// �ڽ�Ŭ�������� �θ�Ŭ���� ������ ��������� -> protected
		cout << "���� : " << age << endl;
		cout << "�й� : " << studentID << endl;

	}
};

int main()
{
	Human h("ȫ�浿", 25);
	h.getData();

	Student h2{ "�Ӳ���", 30, 20253430 };
	h2.getData();
	h2.showStudent();

	return 0;
}