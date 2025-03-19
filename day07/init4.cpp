/*
	��� �ʱ�ȭ
	1.
	2.
	3. ��ü�� ����� ������ ���
*/

using namespace std;
#include <iostream>

class ConstClass {
private:
	int m_value;
	const int m_value2;		// ��θ� ������������ ����� ���ÿ� �ʱ�ȭ ��������(��ü ����Ǳ���)
public:
	ConstClass(int value, int value2) : m_value2(value2){ m_value = value; }	// �䷸�� -> : m_value2(value2)   �ݷ� �ʱ�ȭ!
	void showValue() {
		printf("m_value : %d ,m_value2 : %d \n", m_value, m_value2);
	}
};

class RefClass {
private:
	int& ref;			// ���۷��� ���� ��ü�� �����Ǳ� �� �ݵ�� �ʱ�ȭ�� �̷������ ��.
public:
	RefClass(int& r) :ref(r) {}
	void showValue() {
		printf("ref: %d \n", ref);
	}
};
class Position {
private:
	int m_x;
	int m_y;
public:
	Position(int x, int y) { 
		printf("1. Position ������!!\n ");
		m_x = x, m_y = y; }
	void getData() {
		printf("m_x : %d, m_y: %d \n", m_x, m_y);
	}
};
class objClass {
private:
	Position pos;			// Ŭ���� ���� ���� ��������� �Լ��� ����� ��ü ������� 
public:
	objClass(int x, int y) : pos(x, y) // objClass �� �����Ǳ����� pos ��� ��ü�� ���� �Ǿ� �ʱ�ȭ �Ǿ��־���ϴϱ� �ݷ��ʱ�ȭ
	{
		printf("2.objClass constrtuctor!!\n");
	} 

	void showValue() {
		pos.getData();
	}
};
int main()
{
	ConstClass obj(10, 20);
	obj.showValue();

	int n = 50;
	RefClass obj2(n);
	obj2.showValue();

	cout << "=============================" << endl;
	objClass o(3, 6);
	o.showValue();



	return 0;
}