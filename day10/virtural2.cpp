/*
	virtaul Class - ���� �����ڸ� ������ �޼��带 ���������Լ����ϸ�, �� ���������Լ��� ������ Ŭ����  
	�߻�Ŭ������ ��ü������ �Ұ����ϴ�.
*/
using namespace std;
#include <iostream>
class Cinterface {		// �߻�Ŭ����(���������Լ����������ֱ⶧��) , ��ü�� ������ �� ����. ����� ����� �ް��ִ� ���� ���� ��ü�� �ۼ��ؼ� �������̵��ؾ���!
public:
	Cinterface() { cout << "CInterface constructor" << endl; }
	virtual void getData() const = 0;	// ���� ���� �Լ�
};
class CinSub : public Cinterface{
public:
	CinSub() { cout << "CinSub constructor" << endl; }
	void getData() const override {			// �������̵�(������) �� �� 
		cout << "Pure Virtual function()" << endl;
	}
};

int main()
{
	//Cinterface obj; �߻�Ŭ������ ��ü������ �Ұ����ϴ�.
	CinSub obj;
	obj.getData();

	return 0;
}