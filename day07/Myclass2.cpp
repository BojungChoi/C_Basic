/*

*/
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

class Myclass {
private:
	int id;
	char name[20];
	int age;

public:

	Myclass(int _num, const char* _name, int _age) {
		id = _num; 
		strcpy_s(name, _name);
		age = _age;
		cout << "��ȣ : " << id << ", �̸� : " << name << ", ���� : " << age << endl;


	}

};

int main()
{
	Myclass obj(1, "��������", 39);

	return 0;
}