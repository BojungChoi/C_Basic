/*
*/
using namespace std;
#include <iostream>

class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		cout << num << "constructor" << endl;
	}

	~MyClass() { cout << num << "destructor " << endl; };
};


int main() {
	MyClass obj{ 10 };
	MyClass obj2 = MyClass{ 20 };	// �̸����� �ӽð�ü
	MyClass{ 30 };	// �̸����� �ӽð�ü�� �����ϰų� �̵���Ű���ʴ´ٸ� ������ ���� �� �ٷμҸ��

	cout << "bye~~ " << endl;


	return 0;
}