/*
	동적 할당받을 크기를 입력받고 원소를 저장하여 출력하시오.

	메모리 동적할당 : new - delete
	자료형 포인터 = new 자료형(크기)
	new는 생성자를 호출한다. 즉 new 는 객체를 생성시킨다.
	객체를 생성하기 위해서는 생성자 호출이 있어야한다.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int size;
	int* pary;

	// int* pn = new int;		 힙영역에 int크기로 동적 할당을 받는다.
	// delete pn;				자기를 가리키는게없으면 사라짐

	cout << "크기 입력 : " << endl;
	cin >> size;

	pary = new int [size];		// int형 타입의 연속적의 방을 size만큼 만들어라! R Value
	
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




