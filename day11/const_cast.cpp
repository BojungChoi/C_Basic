/*
	const_cast : const 선언을 해제
*/
#include <iostream>
using namespace std;

int main()
{
	int num = 10;
	cout << num++ << endl;
	
	const int num2 = 10;
	//cout << ++num2 << endl;	// 상수화됐기때매 값변경 안댐 

	int* np = const_cast<int*>(&num2);		// ?? 원래바껴야되는데 안바뀜 
	*np = *np + 1;
	cout << "num2 : " << num2 << endl;

	const char str[] = "orange";
	char* cp = const_cast<char*>(str);
	cp[0] = 'G';
	cout << str << endl;

	return 0;
}