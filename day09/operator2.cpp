/*
	객체를 더하는 함수 : add()
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
	p3 = p.add(p2);		// 출력 : add() , costructor  -> 임시객체가 생성 되면서 출력이 한번 더 됨
	p3.showPoint();

	return 0;
}