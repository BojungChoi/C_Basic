/*
	변환 생성자
	다른 타입의 객체로 변활될때 호출되는 생성자. 입력을 한개만 가지는 생성자
*/
#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		printf("변환 생성자 호출!!");
		this->value = value;
	}
	void printMyClass() {
		printf("value: %d\n", value);
	}
};

int main()
{
	MyClass obj = 10;
	obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();

	return 0;
}