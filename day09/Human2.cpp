#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <cstring> // strlen, strcpy

class Human {
private:
	char* name;
	int age;
public:
	// �⺻ ������
	Human() {
		cout << "�⺻ ������ ȣ��!" << endl;
		name = nullptr;
		age = 0;
	}
	Human(const char* pname, int page) {
		cout << "������ ȣ��!" << endl;
		age = page;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	// ���� ������
	Human(const Human& other) {
		cout << "���� ������ ȣ��!" << endl;
		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}

	// ���� ������ �����ε� (���� ����)
	Human& operator=(const Human& other) {
		cout << "���� ������ ȣ��!" << endl;

		if (this == &other) return *this;

		delete[] name;

		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);

		return *this;
	}
	~Human() {
		cout << "�Ҹ��� ȣ��!" << endl;
		delete[] name;
	}

	void showHuman() {
		cout << " ����: " << age << " �̸�: " << name << endl;
	}
};

int main() {
	Human man("ȫ��", 30);
	man.showHuman();

	Human copyman = man;  // ��������� ȣ��
	copyman.showHuman();

	Human xman;       
	xman = copyman;      // ���Կ����� ȣ��Ǹ鼭 ���� ���Ժ��簡 �̷������ ������ �����ε����� ��������� ���ܸ� ó��������� 35�� 
	xman.showHuman();

	return 0;
}
