/*
	new 는 생성자 호출이되므로 초기화가 가능하다.
	생성자란? 객체를 생성하고, 초기화 시키는 기능을 가지는 특별한 메서드
*/

#include <iostream>
using namespace std;

int main()
{
	int* parr;
	parr = new int[3] {10, 20, 30};	// 이름없는 배열객체 생성하고 10, 20, 30 으로 초기화 한다.
	// parr = new int[3] = {10, 20, 30};


	cout << parr[0] << ", " << parr[1] << ", " << parr[2] << endl;


	delete[] parr;


	return 0;
}