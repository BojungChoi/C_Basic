/*
	�̵� ������(T&&)
	r-value reference �� �Ƕ���ͷ� ���� �̵� ������
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;


class Human {
private:
	char name[10]; // C��Ÿ�� �迭�� �̵��� �ȴ�
	int age;
public:
	// �Է� �ΰ��޴� ������
	Human(const char* name, int age) {
		printf("�Է� �ΰ� �޴� ������ ȣ��");
		strcpy_s(this->name,10, name);
		this->age = age;
	}
	// ���� ������
	Human(const Human& other) {
		cout << "���� ������ ȣ��!" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// �̵�������
	Human(Human&& other) noexcept { // noexcept "�� �̵� �����ڴ� ���� ���ܸ� ������ �ʴ´�!" ��� �����Ϸ����� �����ؼ�, ����ȭ�� �� ���ϰ� ����� ���ؼ�
		printf("�̵� ������ ȣ��\n");
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.age = 0;
	}



	void printHuman(){
		printf("name: %s, age : %d\n", this->name, this->age);
	}
};
int main()
{
	Human h("ȫ�浿", 30);
	h.printHuman();
	
	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));  // std:: �� && �����ʰ�����! 
	h3.printHuman();
	
	h.printHuman(); // 35�� -> h �� �����Ͱ� h3�� �̵��Ǿ��ٴ� ����

	return 0;
}