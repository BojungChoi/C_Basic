/*

*/
using namespace std;
#include <iostream>
class MyClass {
public:
	int value;
	// MyClass() {};
	MyClass(int v = 0 ) : value(v){ }
	void showMyClass() {
		cout << "value: " << value << endl;
	}
};


int main()
{
	MyClass* ptr = new MyClass{ 10 };
	ptr->showMyClass();
	printf("value : %d\n", ptr->value);	// 포인터를 통한 데이터 접근

	delete ptr;

	//MyClass obj{};		// <- 값을 가지지않는 객체 생성시 디폴트 매개변수 생성 말고 다른방법은 디폴트 초기값을주기 (9,10행)
	//obj.showMyClass();

	MyClass obj{};
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();
	printf("value: %d\n", ptr->value);

	return 0;
}