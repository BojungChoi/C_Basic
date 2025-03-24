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
	printf("value : %d\n", ptr->value);	// �����͸� ���� ������ ����

	delete ptr;

	//MyClass obj{};		// <- ���� �������ʴ� ��ü ������ ����Ʈ �Ű����� ���� ���� �ٸ������ ����Ʈ �ʱⰪ���ֱ� (9,10��)
	//obj.showMyClass();

	MyClass obj{};
	ptr = &obj;

	ptr->showMyClass();
	(*ptr).showMyClass();
	printf("value: %d\n", ptr->value);

	return 0;
}