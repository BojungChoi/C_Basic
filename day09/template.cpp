/*
	�Լ����ø� : ���� �ڷ����� ���ø� ���ڷ� �޾� �Լ� ���ο��� Ȱ���Ѵ�.
*/
#include <iostream>

using namespace std;
/*
int Add(int a, int b) {
	return a + b;
}
*/
template <typename T>		// ��� ���ø��̾���
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