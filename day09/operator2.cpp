/*
	��ü�� ���ϴ� �Լ� : add()
*/

#include <iostream>
#include <string.h>
#include <stdio.h>


class Point {
public:
	int x, y;
	Point(int ax = 0, int ay = 0) : x(ax), y(ay) {
		printf("constructor\n");
	}
	Point(const Point& other) {
		printf("copy constructo\n");
		x = other.x;
		y = other.y;
	}
	Point add(const Point& other) {
		printf("add()\n");
		return Point(x + other.x, y + other.y);
	}
	void showPoint() {
		printf("x : %d , y : %d\n", x, y);
	}

};
int main()
{
	Point p(10, 20);
	Point p2(30, 40);

	Point p3;
	p3 = p.add(p2);		// ��� : add() , costructor  -> �ӽð�ü�� ���� �Ǹ鼭 ����� �ѹ� �� ��
	p3.showPoint();

	return 0;
}