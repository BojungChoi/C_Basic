/*

*/
#include <iostream>
using namespace std;

int main()
{	
	int num = 10, num2 = 20;
	int& ref = num;					// num의 메모리 공간에 ref라는 별명이 붙는다.
	int* pn = &num;
	//int& rref;		// num의 별명을 가진 reference의 별명에 또 다른 별명 선언은 불가하다.
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