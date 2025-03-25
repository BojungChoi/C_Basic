/*
	shared_ptr
	make_shared : ��ü�� ���� ī��Ʈ�� �ϳ��� �޸𸮺�Ͽ� ���� �Ҵ��Ų��. shared_ptr�� �����ϴ� �Լ�
	shared_ptr�� ���� ī��Ʈ�� ���� ��ü�� �������� �����Ѵ�. �������� shared_ptr�� 
	���۷��� ī��Ʈ�� 0�̵Ǹ� �޸𸮰� �ڵ� �����ȴ�.
*/
using namespace std;
#include <iostream>
class MyClass {
public:
	MyClass() {  cout << "Myclass contructor" << endl; }
	~MyClass() {cout << "~Myclass contructor " << endl; }
	void func() { cout << "Hi Shared_ptr" << endl; }
};

int main() {

	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
	std::shared_ptr<MyClass> ptr2 = ptr;
	printf("ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�.\n");

	ptr2->func();

	return 0;
}