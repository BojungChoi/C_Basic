/*	
	moveconstructor (이동생성자)
*/

using namespace std;
#include <iostream>

int main() {

	int n = 10;
	int& rn = n;		// 레퍼런스, 일반참조(L-Value 참조!),
	const int& ra = 20;


	//int& rrn = 10; // 상수는 참조할 수 없음

	int&& rrn = 30;	// 이건가능. R-Value 참조!!!

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}