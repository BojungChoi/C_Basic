/*
	함수템플릿 : 여러 자료형을 템플릿 인자로 받아 함수 내부에서 활용한다.
*/
#include <iostream>

using namespace std;
/*
int Add(int a, int b) {
	return a + b;
}
*/
template <typename T>		// 요게 템플릿이야잉
T Add(T a, T b) {
	return a + b;
}
double Add(double a, double b){
	return a + b;
}
int main()
{
	cout << Add(10, 20) << endl;
	cout << Add(1.1, 2.2) << endl;

	return 0;
}