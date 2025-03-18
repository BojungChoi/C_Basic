/*
	다른 함수에 선언된 지역변수의 값을 바꾸는 방법2
	레퍼런스 - 또다른 이름, 보이지 않는 포인터
	참조자 - 변수의 또다른 이름
	선언방법 int& ref = n;
	값변경 ref = 10;

*/

#include <iostream>

using namespace std;

void chFunc(int& rn) {				// 레퍼런스(참조변수)
	rn = 20;
}
int main()
{
	int n = 10;
	cout << "호출 전 n : " << n << endl;

	chFunc(n);

	cout << "호출 후 n : " << n << endl;

	return 0;
}

