/*
*/
using namespace std;
#include <iostream>
class MyClass {
	int num;
public:
	MyClass(int n) : num(n) {cout << this << " ," << num << " constructor" << endl; }
	MyClass(const MyClass& other) : num(other.num) { cout << this << " copy " << endl; }
	~MyClass() { cout << this << " ," << num << " destructor" << endl; }
	void setData(int n) { num = n; }
};
MyClass func(MyClass aobj) {	// obj ��ü�� �� ���޷� �޾ұ� ������ ���� ������ 1ȸ �����	// 19�� boj2�� ���� �Ѿ�� func �Ҹ�Ǹ鼭 �Ҹ��� ���� // ���� &aobj ó�� ���������̾��ٸ� ���������ȣ�����ȵ�.
	cout << "func()" << endl;
	return aobj;	// ���� ��, aobj�� ����Ǿ� obj2�� ���޵� �� ���� ������ 1ȸ �� ���� (��, �����Ϸ� ����ȭ�� ���� ��� ����)
}
int main() {
	MyClass obj{ 10 };
	MyClass obj2{ func(obj) };
	// 1) func(obj) ȣ�� �� �� ���� ������ 1ȸ (obj �� aobj)
	// 2) return aobj �� �� ���� ������ 1ȸ (aobj �� �ӽ� ��ü or obj2)
	// ���������� obj2 ����
	cout << "bye~~" << endl;

	return 0;
	// ����Ǹ鼭 obj2, obj, func() ���� aobj ������ �Ҹ��� ȣ���
}

