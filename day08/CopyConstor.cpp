/*
	copyconstructor(���������)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class Person {
private:
	char m_name[20];
	int m_age;
public:
	Person(const char* pname, int age) {
		cout << "Constructor call!!" << endl;		//  �ѹ� ȣ��Ȱ��� Ȯ���� �� ����
		strcpy(m_name, pname);
		m_age = age;
	}
	void printPerson() {
		cout << "m_name : " << m_name << "  m_age : " << m_age << endl;
	}
};

int main()
{
	Person p("ȫ�浿", 30);
	p.printPerson();

	Person p2(p);		// ���� ������ ����! , �����Ҷ��� �⺻���� �����ڰ� ȣ���� �ȵ�. ��������� ����� ����Ʈ�� �ִٴ� ��.
	p2.printPerson();

	Person p3 = p;
	p3.printPerson();

	return 0;
}