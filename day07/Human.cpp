/*
	step1. �̸��� ��ȭ��ȣ�� �����Ҵ�.
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
		cout << "name : " << pname  << "\n���� : " << age << "\n��ȭ��ȣ : " << ptel << endl;
	}

	Human(const char* _pname, int _age, const char* _ptel){
		pname = new char[strlen(_pname) + 1];
		strcpy(pname, _pname);
		
		age = _age;
		
		ptel = new char[strlen(_ptel) + 1];
		strcpy(ptel, _ptel);

		cout << "�Ű����� ������ ȣ��!" << endl;
	}
	~Human() { 
		delete[] pname;
		delete[] ptel; 
	}
};

int main()
{
	Human h("ȫ�浿", 25, "010-1234-5678");
	h.getData();

	return 0;
}