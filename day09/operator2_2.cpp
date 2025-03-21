/*
	��ü�� ���ϴ� �Լ� add()
								������ �����Ѵ�.
*/
#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Point {

public:
	int x, y;

	Point(int ax= 0, int ay = 0) : x(ax) , y(ay){
		printf("constructor\n");
	}
	Point(const Point& other) {
		printf("copy constructor\n");
		x = other.x;
		y = other.y;
	}
	Point& add(const Point& other) {
		printf("add()\n");
		//return Point(x + other.x, y + other.y);
		/* ������ �����Ѵ�. */
		x += other.x;
		y += other.y;
		return *this;		// ������ return
	}
	void showPoint() {
		printf(" x : %d , y : %d", x, y);
	}
};



int main() {

	Point p(10, 20);
	Point p2(20, 30);
	
	//Point p3;
	//p3 = p.add(p2);
	//p3.showPoint();
	Point p3 = p.add(p2);		// �ڵ带 �䷡�ϸ� ��������ڰ� ȣ��ǳ�? �ʱ�ȭ�� ������ ���� �����ڸ� ����ϰ� �Ǿ��־�. (Point p3(p.add(p2)); �� ���� �ǹ̶�� �����ϸ� ��.)
	p3.showPoint();

	return 0;

}