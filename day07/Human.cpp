/*
	step1. 이름과 전화번호는 동적할당.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human {
private:
	char* pname;
	int age;
	char* ptel;
public:
	void getData() {
		cout << "name : " << pname  << "\n나이 : " << age << "\n전화번호 : " << ptel << endl;
	}

	Human(const char* _pname, int _age, const char* _ptel){
		pname = new char[strlen(_pname) + 1];
		strcpy(pname, _pname);
		
		age = _age;
		
		ptel = new char[strlen(_ptel) + 1];
		strcpy(ptel, _ptel);

		cout << "매개변수 생성자 호출!" << endl;
	}
	~Human() { 
		delete[] pname;
		delete[] ptel; 
	}
};

int main()
{
	Human h("홍길동", 25, "010-1234-5678");
	h.getData();

	return 0;
}