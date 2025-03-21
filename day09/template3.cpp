/*
	Ŭ���� ���ø�
*/

#include <iostream>
using namespace std;

// Ŭ���� ���ø� ����
template <typename T, typename T2>
class MyClass {
private:
	T data1;
	T2 data2;

public:
	// ������
	MyClass(T a, T2 b) : data1(a), data2(b) {}

	// ��� �Լ�
	void show() {
		cout << "data1: " << data1 << endl;
		cout << "data2: " << data2 << endl;
	}
};

int main() {
	// ���� Ÿ�� �ڵ� �߷� (int, double)
	MyClass<int, double> obj1(10, 3.14);
	obj1.show();

	cout << "------------------------" << endl;

	// ��������� Ÿ�� ����
	MyClass<const char*, double> obj2("Ŭ���� ���ø�", 2.718);
	obj2.show();

	cout << "------------------------" << endl;

	// Ÿ�� �ٸ��� �� ������
	MyClass<string, int> obj3("Hello Template Class!", 2024);
	obj3.show();

	return 0;
}
