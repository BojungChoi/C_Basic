/*

*/
#include <iostream>
using namespace std;

int main()
{	
	int num = 10, num2 = 20;
	int& ref = num;					// num�� �޸� ������ ref��� ������ �ٴ´�.
	int* pn = &num;
	//int& rref;		// num�� ������ ���� reference�� ���� �� �ٸ� ���� ������ �Ұ��ϴ�.
	//rref = ref;
	int& rref = ref;
	rref = num2;
	cout << rref << ", " << num2 << endl;

	num++;	// 11
	ref++;	// 12
	(*pn)++;	// 13 

	cout << "num++ : " << num << endl;
	cout << "ref++ : " << ref << endl;
	cout << "*(pn)++ : " << *pn << endl;


	cout << "&num: " << &num << endl;
	cout << "&ref: " << &ref << endl;
	cout << "*(pn): " << pn << endl;

	return 0;
}