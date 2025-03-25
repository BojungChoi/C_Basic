/*
	   weak_ptr : ���۷��� ī��Ʈ�� ������ ���� �ʴ� ����Ʈ ������
	- shared_ptr�ʹ� �ٸ��� ��ü�� �������� ������ ����
	- ���� ī��Ʈ ���� ���� ��ü�� ������ �� ���
	- lock() ȣ�� �� ��ü�� ����ִٸ� shared_ptr�� ��ȯ ����
*/
#include <iostream>
using namespace std;
class MyClass {
public:
	MyClass() { cout << "constructor" << endl; }
	~MyClass() { cout << "~constructor" << endl; }
	void func() { cout << "Hi shared_ptr" << endl; }

};


int main() {
	std::shared_ptr<MyClass> ptr = std::make_shared < MyClass >();		// C++11���� ������ (make_unique�� C++14����)
	std::weak_ptr<MyClass>  weakPtr = ptr; // weak_ptr : ���۷��� ī��Ʈ�� ������ �����ʴ� ����Ʈ ������
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();		// weak_ptr ���� shared_ptr ��ȯ  
	// lock()�� ȣ���� shared_ptr�� ��ȯ�ϸ� ���� ī��Ʈ�� 1 ������
	if (ptr2) { cout << "weak_ptr�� ��ȯ�� shared_ptr ��밡��" << endl; }

	std::cout << "���� ī��Ʈ: " << ptr.use_count() << std::endl;

	return 0;
}