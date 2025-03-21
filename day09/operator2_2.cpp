/*
	객체를 더하는 함수 add()
								참조를 리턴한다.
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
		/* 참조로 리턴한다. */
		x += other.x;
		y += other.y;
		return *this;		// 참조를 return
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
	Point p3 = p.add(p2);		// 코드를 요래하면 복사생성자가 호출되네? 초기화는 무조건 복사 생성자를 사용하게 되어있어. (Point p3(p.add(p2)); 랑 같은 의미라고 생각하면 돼.)
	p3.showPoint();

	return 0;

}