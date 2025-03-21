/*

*/
#include <iostream>
class MyClass {

private:
	int x, y;

public:
	MyClass(int a ,int b) : x(a), y(b){}

	MyClass operator + (const MyClass& other) {
		return MyClass(x + other.x, y + other.y);
	}
	MyClass& add(const MyClass& other) {
		x += other.x;
		y += other.y;
		return *this;
	}
	MyClass operator+ (int value) {	
		return MyClass(x + value, y + value);
	}

	void showMyClass() {
		printf(" x : %d,  y : %d\n", x, y);
	}
};


int main()
{
	MyClass obj(10, 20);
	obj.showMyClass();
	MyClass obj2(20, 30);
	obj2.showMyClass();
	MyClass obj3 = obj.add(obj2);
	obj3.showMyClass();
	MyClass obj4 = obj.operator+(obj3);
	obj4.showMyClass();

	MyClass obj5 = obj4 + 100;		// obj4.operator +(100)
	obj5.showMyClass();


	return 0;
}

// 오버로딩 할 수 없는 연산자:
// :: , . , *, sizeof