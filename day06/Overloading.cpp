/*
	�Լ��� ������
	- �Լ� �����ε�(�Լ��� ��������) : �̸��� ������ �Ű����� Ÿ���̳� ������ �ٸ��� �ٸ� �Լ��̴�.
	- �Լ� �������̵�(�Լ��� ������) --> ���
*/

#include <iostream>
using namespace std;

// �Լ� �����ε� ����

int func() {

	return 10;
}
int func(char c) {			// c++ ������ ���� �Լ��̸� �� �ƴ϶� �Ű������� ���������ϱ⶧�� ���� �̸���밡��

	return c;
}
int func(int n) {

	return 10 + n;
}

int func(int n1, int n2) {

	return n1 + n2;
}


int main()
{

	cout << func() << endl;
	cout << func('A') << endl;
	cout << func(10) << endl;
	cout << func(10, 20) << endl;

	return 0;
}