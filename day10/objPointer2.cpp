/*
	��ü ��������
*/
using namespace std;
#include <iostream>
class AClass {
public:
	void showAClass() {
		cout << "Dynamically created object" << endl;
	}

};


int main() {

	AClass* ptr = new AClass{ };		// ��ü ���� �Ҵ�
	ptr->showAClass();

	delete ptr;							// ���� �޸� ����

	return 0;
}