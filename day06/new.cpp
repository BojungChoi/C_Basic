/*
	���� �Ҵ���� ũ�⸦ �Է¹ް� ���Ҹ� �����Ͽ� ����Ͻÿ�.

	�޸� �����Ҵ� : new - delete
	�ڷ��� ������ = new �ڷ���(ũ��)
	new�� �����ڸ� ȣ���Ѵ�. �� new �� ��ü�� ������Ų��.
	��ü�� �����ϱ� ���ؼ��� ������ ȣ���� �־���Ѵ�.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int size;
	int* pary;

	// int* pn = new int;		 �������� intũ��� ���� �Ҵ��� �޴´�.
	// delete pn;				�ڱ⸦ ����Ű�°Ծ����� �����

	cout << "ũ�� �Է� : " << endl;
	cin >> size;

	pary = new int [size];		// int�� Ÿ���� �������� ���� size��ŭ ������! R Value
	
	for (int i = 0; i < size ; i++)
	{
		pary[i] = i;

		cout << pary[i] << endl;

	}


	/*pary[0] = 1;
	pary[1] = 2;
	*(pary + 2) = 3;


	cout << pary[1] << endl;
	cout << *(pary +2) << endl;*/
	delete[] pary;
	return 0;
}




