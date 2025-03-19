/*
	멤버 초기화
	1.
	2.
	3. 객체를 멤버로 가지는 경우
*/

using namespace std;
#include <iostream>

class ConstClass {
private:
	int m_value;
	const int m_value2;		// 요로면 상수멤버변수라서 선언과 동시에 초기화 해조야함(객체 선언되기전)
public:
	ConstClass(int value, int value2) : m_value2(value2){ m_value = value; }	// 요렇게 -> : m_value2(value2)   콜론 초기화!
	void showValue() {
		printf("m_value : %d ,m_value2 : %d \n", m_value, m_value2);
	}
};

class RefClass {
private:
	int& ref;			// 래퍼런스 역시 객체가 생성되기 전 반드시 초기화가 이루어져야 함.
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
		printf("1. Position 생성자!!\n ");
		m_x = x, m_y = y; }
	void getData() {
		printf("m_x : %d, m_y: %d \n", m_x, m_y);
	}
};
class objClass {
private:
	Position pos;			// 클래스 에서 만든 사용자정의 함수를 사용한 객체 멤버변수 
public:
	objClass(int x, int y) : pos(x, y) // objClass 가 생성되기전에 pos 라는 객체가 생성 되어 초기화 되어있어야하니까 콜론초기화
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