/*
	����Ʈ �Ű������� ������ ������ ���� �� �����ʺ��� ����Ʈ���� ����ؾ��Ѵ�.
*/

#include <iostream>
#include <math.h>
using namespace std;

int coordinates(int x, int y = 0, int z = 0);		// ����Ʈ �Ű����� ���� (����)������ ��밡��
int main()
{
	cout << "(10, 20, 30): " << coordinates(10, 20, 30) << endl;
	cout << "(10, 20, def): " << coordinates(10, 20) << endl;	// �Ű����� 2���� �Է½� 3��° �Ű������� ����Ʈ�� ���
	cout << "(10, def, def): " << coordinates(10) << endl;      // �����ʺ��� ����Ʈ�� ���


	return 0;
}

int coordinates(int x, int y, int z)
{	
	int res = 0;
	res = pow(x, 2) + pow(y, 2) + pow(z, 2);		// x^2 + y^2 + z^2
	return sqrt(res);									// sqrt : ������
}