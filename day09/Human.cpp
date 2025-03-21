/*
	step3.
	char ������ name, int Ÿ���� age, ����� ����ϴ� showHuman
	name�� �����Ҵ��ϰ� ���� 30, �̸� ȫ���� man ��ü�� �����Ͻÿ�.
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
class Human {
private:
	char* name;
	int age;
public:
	Human(const char* pname, int page) {
		cout << "������ ȣ��!" << endl;
		age = page;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	// ���� ������!
	Human(const Human& other) {
		cout << "���� ������ ȣ��!" << endl;
		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	~Human() {delete[] name;}
	void showHuman() {
		cout << " ����" << age << "�̸�" << name << endl;
	}
};
int main() {
	Human p("ȫ��", 30);
	p.showHuman();

	Human copyman = p;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	//xman.showHuman();

	return 0;
}