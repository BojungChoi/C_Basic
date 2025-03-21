/*
	step3.
	char 포인터 name, int 타입의 age, 출력을 담당하는 showHuman
	name을 동적할당하고 나이 30, 이름 홍명보인 man 객체를 생성하시오.
	man 객체를 복사하여 copyman 객체를 생성하시오.
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
		cout << "생성자 호출!" << endl;
		age = page;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	// 복사 생성자!
	Human(const Human& other) {
		cout << "복사 생성자 호출!" << endl;
		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}
	~Human() {delete[] name;}
	void showHuman() {
		cout << " 나이" << age << "이름" << name << endl;
	}
};
int main() {
	Human p("홍명보", 30);
	p.showHuman();

	Human copyman = p;
	copyman.showHuman();

	Human xman;
	xman = copyman;
	//xman.showHuman();

	return 0;
}