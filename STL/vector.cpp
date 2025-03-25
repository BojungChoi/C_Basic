/*

*/
#include <iostream>
#include <vector>		// vector ������� ����
using namespace std;
int main() {	
	vector<int> v;				// ����ִ� ���� (size 0)
	vector<int> v1{ 10 };		// �ϳ��� ���� 10�� ����(size 1)
	vector<int> v2(10);			// 0���� �ʱ�ȭ�� 10���� ����(size 10)
	vector<int> v3 = { 1, 2, 3, 4 ,5, 6 };	// ���� ���� ���� (size 6)

	cout << "v size : " << v.size() << endl;
	cout << "v1 size : " << v1.size() << endl;
	cout << "v2 size : " << v2.size() << endl;
	cout << "v3 size : " << v3.size() << endl;

	for (int i = 0; i < 6; i++) {
		printf("v2[%d] : %d \n", i, v2[i]);
	}
	cout << endl;
	for (auto i : v3) {			// ������� for�� 
		//cout << v3[i] <<endl;	 // �������for���� �ε��� ����� �Ұ�
		 cout << i << endl;
	}

	/* begin()�� end()�� interator(�ݺ���) Ÿ���� ��ȯ�Ѵ�. (������) */
	cout << "v3�� ù��° ��Ұ� : " << *v3.begin() << endl;
	cout << "v3�� ù��° ��Ұ� : " << *(v3.end() - 1) << endl;

	return 0;
}
/*
	vector.size() : ���� ũ��(����)�� ��ȯ
	vector.begin() : ù ��Ҹ� ����Ű�� iterator
	vector.end() : ������ ���� ��Ҹ� ����Ų
*/