/*
	배열 포인트
*/

#include <stdio.h>

int main() {

	//int a = 10;
	//int* pa = &a;

	//int ary[] = { 1, 2, 3};
	//int* pary = ary; // int* pary = &ary[0] = int(* pary)  과 같은 의미
	
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };		// 2차원 배열
	// int** pary = ary;
	int(*pary)[4];			// int형 변수 4개를 배열을 가리키는 배열 포인터
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", pary[i][j]);
		}
		printf("\n");
	}
	//int* pary[4];			// int형 변수를 가리키는 포인터 배열	
	return 0;
}