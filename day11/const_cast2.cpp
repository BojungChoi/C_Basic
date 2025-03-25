/*
	const_cast 
*/
#include <iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	void setNum(int n) { num = n; }
	void print() const {
		cout << "Before : " << num << endl;
		// num++
		const_cast<MyClass*>(this)->num--;
		cout << "After : " << num << endl;
	}

};
int main() {
	MyClass obj;
	obj.setNum(10);
	obj.print();

	return 0;
}