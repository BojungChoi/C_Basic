/*
	���ø��� ����� �Լ����ǰ� �и��� �� ����.
*/
#include <iostream>
using namespace std;
template <typename T>		// ���ø� �Ϲ�ȭ ����
T func(T a, T b) {			// ���ø� �Լ�
	cout << "Type : T" << endl;
	return a + b;
}

template <>					// ���ø� Ư��ȭ �Ϲ�ȭ�� Ư���� Ÿ�Ը� ó���� ���
int func<int>(int a, int b) {
	cout << "Type : <int>" << endl;
	return a + b;
}

int main() {
	// int Ÿ���̴ϱ� Ư��ȭ�� ���ø��� ȣ���
	cout << func(10, 20) << endl;        // <int> ���

	// double Ÿ���� �Ϲ� ���ø��� ȣ���
	cout << func(10.12, 20.23) << endl;  // T ���	 , Ÿ���� ��������� �������� �ʾƵ� �˾Ƽ� ��������, ���������<float> ���� �����ִ°��� ����

	cout << func<double>(10.1, 20.2) << endl;
	cout << func<int>(100, 10) << endl;

	return 0;
}