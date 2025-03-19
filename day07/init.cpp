/*
	변수 초기화
*/
#include <iostream>
using namespace std;
int main()
{
	int num = 10;			// 복사 초기화
	int num2(30);			// 직접 초기화
	
	int num3{ 300 };		// 중괄호 직접 초기화(권장?)
	int num4 = { 3000 };	// 중괄호 복사 초기화
	
	int x = 3.14;
	int x1{ 3.14 };		// 에러! 'double' 에서 'int'로 변환에는 축소 변환이 필요합니다.


	cout << num << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;
	cout << x << endl;
	cout << x1 << endl;


	
	return 0;
}