/*

*/

#include <stdio.h>

int main() {

	int* pary[3];		// int타입의 주소를 저장할 수 있는 포인터 배열
	int ary1[2] = { 1, 2 };
	int ary2[2] = { 3, 4 };
	int ary3[2] = { 5, 6 };

	pary[0] = ary1;
	pary[1] = ary2;
	pary[2] = ary3;		// int* pary[3] = { ary1, ary2, ary3 }; 와 같은 의미

	return 0;
}