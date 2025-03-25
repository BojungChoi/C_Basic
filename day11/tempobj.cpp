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
	MyClass obj2 = MyClass{ 20 };	// 이름없는 임시객체
	MyClass{ 30 };	// 이름없는 임시객체를 복사하거나 이동시키지않는다면 다음행 실행 전 바로소멸됨

	cout << "bye~~ " << endl;


	return 0;
}