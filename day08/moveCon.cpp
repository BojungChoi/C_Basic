/*	
	moveconstructor (�̵�������)
*/

using namespace std;
#include <iostream>

int main() {

	int n = 10;
	int& rn = n;		// ���۷���, �Ϲ�����(L-Value ����!),
	const int& ra = 20;


	//int& rrn = 10; // ����� ������ �� ����

	int&& rrn = 30;	// �̰ǰ���. R-Value ����!!!

	cout << n << ", " << rn << ", " << ra << ", " << rrn << endl;

	return 0;
}