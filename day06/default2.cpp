/*
	디폴트 매개변수를 여러개 적용할 때는 맨 오른쪽부터 디폴트값을 사용해야한다.
*/

#include <iostream>
#include <math.h>
using namespace std;

int coordinates(int x, int y = 0, int z = 0);		// 디폴트 매개변수 선언 (원형)에서만 사용가능
int main()
{
	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;	// 매개변수 2개만 입력시 3번째 매개변수는 디폴트값 사용
	cout << "(10, def, def): " << coordinates(10) << endl;      // 오른쪽부터 디폴트값 사용


	return 0;
}

int coordinates(int x, int y, int z)
{	
	int res = 0;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// x^2 + y^2 + z^2
	return sqrt(res);									// sqrt : 제곱근
}