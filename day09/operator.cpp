/*
	������ �����ε� (��������)
*/
#include <iostream>

using namespace std;
class MyClass {
private:
	int m_a, m_b;
	const char* m_name;
public:
	MyClass(int a = 0, int b = 0, const char* name = nullptr) : m_a(a), m_b(b), m_name(name) { } // �ݷ� �ʱ�ȭ



	void showMyclass() {
		std::cout << m_a << ", " << m_b << ", " << m_name << std::endl;
	}
};
int main()
{
	//MyClass obj{ 1, 2, "ȫ�浿" };
	//obj.showMyclass();

	//MyClass obj2;
	//obj2 = obj;			// num = 10;  ,  ����Ʈ ���� ������
	//
	//obj2.showMyclass();
	//obj.showMyclass();
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 40 };
	MyClass obj3 = obj + obj2;		// �Ϲ����� ����Ʈ �����ڴ� ������ ! ����� �ڷ����������� ���������ڸ� ����������!
	obj3.showMyclass();

	return 0;
}