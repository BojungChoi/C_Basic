/*
	�⺻ �ڷ����� ����ȯ ������ Ÿ�ӿ� Ÿ���� ��ȯ
*/
#include <iostream>


using namespace std;
int main() {

	char ch;
	int i = 65;
	float f = 3.14;
	double d = 2.345;

	ch = static_cast<char>(i);				// int --> char ��ȯ

	cout << ch << endl;
	ch = (char)i;
	cout << ch << endl;

	d = static_cast<double>(f);
	cout << d << endl;

	i = static_cast<int>(d);
	cout << i << endl;

	cout << typeid(ch).name() << endl;		// typeid �� �˰������.
	cout << typeid(d).name() << endl;

	return 0;
}

/*
	static_cast<type-id>(expression)
*/