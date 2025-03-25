/*
	�ӽð�ü�� ������ : R-Value ���� (&&)
	MyClass obj = MyClass{10};				���� or �̵� ������ ȣ��		����
	MyClass& obj = MyClass{10};				�Ϲ� ����						�Ұ���
	MyClass&& obj = MyClass{10};			R-value ����					����
	const MyClass& obj = MyClass{10};		const ���� (���� ���� ����)		����/ �����Ұ�
*/
#include <iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {		// �Լ��� �Ű����ڴ� �ӽð�ü�̴�.
		cout << num << "constructor" << endl;
	}
	~MyClass() { cout << num << "destructor" << endl; }
	void setData(int n) { num = n; }
};
int main() {

	//MyClass* ptr = &Myclass{ 10 };	
	//MyClass& obj2 = Myclass{ 20 };		// �ӽð�ü�� ������ ����� �� ���� . 

	MyClass obj = MyClass{ 10 };
	obj.setData(20);	// �ӽð�ü�� ������ obj 

	MyClass&& obj2 = MyClass{ 20 };	// && R-value ���� �ӽð�ü�� �Ϲ� ����(L-value ����)�� �� ������, R-value ������ ���� �� �ִ�! 
	obj2.setData(22);

	const MyClass& obj3 = MyClass{ 30 }; // const ���� (���� ���� ����) but �����Ұ�.
	//obj3.setData(33);			// ��������� �ϹǷ� �� ������ ������.

	cout << "bye~" << endl;

	return 0;
}