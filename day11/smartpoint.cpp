/*
	����Ʈ ������ : ��ü�� ���� �ֱ⸦ ��ü�� �ñ����ν� ���α׷����� �޸� �����δ��� �ٿ��ش�.
	 unique_ptr - �������� ���������� �����ϴ� ����Ʈ ��������(auto_ptr �� ��ü)
*/
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass() { cout << "Myclass() ȣ��" << endl; }
	~MyClass() { cout << "~Myclass() ȣ��" << endl; }
};
int main() {

	unique_ptr<MyClass> ptr(new MyClass{});		// ����Ʈ ������ ���·� ���� �� �޸� ���� ������ �ʿ����.
	unique_ptr<MyClass> ptr2 = move(ptr);


	return 0;
}