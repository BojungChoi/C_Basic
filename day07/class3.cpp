/*
	������constructor
*/

#include <iostream>
using namespace std;

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	MyClass(){
		m_num1 = 5;
		m_num2 = 12;
		cout << "����Ʈ ������ ȣ��!" << endl;
		cout << "m_num1 : " << m_num1 << ", m_num 2 : " << m_num2 << endl;

	}
	MyClass (int num1, int num2){			// ������(�Է��� �ΰ� �޴�)
		m_num1 = num1;
		m_num2 = num2;
		cout << "�Ű����� ������ ȣ��" << endl;
	}
	~MyClass(){		// ~ �Ҹ���
	
	}			

	void printData(){
		cout << "m_num1 : " << m_num1 << ", m_num 2 : " << m_num2 << endl;
	}
};
int main()
{
	MyClass obj;		// ����Ʈ �����ڸ� ����
	MyClass obj2(100, 200);		// �ܺο��� ������ �� �ִ� �������־���� , Public ���� ����
	obj2.printData();



	return 0;
}