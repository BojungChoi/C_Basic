#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include <iostream>
#include <cstring> // strlen, strcpy

class Human {
private:
	char* name;
	int age;
public:
	// 기본 생성자
	Human() {
		cout << "기본 생성자 호출!" << endl;
		name = nullptr;
		age = 0;
	}
	Human(const char* pname, int page) {
		cout << "생성자 호출!" << endl;
		age = page;
		name = new char[strlen(pname) + 1];
		strcpy(name, pname);
	}
	// 복사 생성자
	Human(const Human& other) {
		cout << "복사 생성자 호출!" << endl;
		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
	}

	// 대입 연산자 오버로딩 (깊은 복사)
	Human& operator=(const Human& other) {
		cout << "대입 연산자 호출!" << endl;

		if (this == &other) return *this;

		delete[] name;

		age = other.age;
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);

		return *this;
	}
	~Human() {
		cout << "소멸자 호출!" << endl;
		delete[] name;
	}

	void showHuman() {
		cout << " 나이: " << age << " 이름: " << name << endl;
	}
};

int main() {
	Human man("홍명보", 30);
	man.showHuman();

	Human copyman = man;  // 복사생성자 호출
	copyman.showHuman();

	Human xman;       
	xman = copyman;      // 대입연산자 호출되면서 얉은 대입복사가 이루어지기 때문에 오버로딩으로 깊은복사로 예외를 처리해줘야함 35행 
	xman.showHuman();

	return 0;
}
