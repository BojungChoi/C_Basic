/*
	�迭 ����Ʈ
*/

#include <stdio.h>

int main() {

	//int a = 10;
	//int* pa = &a;

	//int ary[] = { 1, 2, 3};
	//int* pary = ary; // int* pary = &ary[0] = int(* pary)  �� ���� �ǹ�
	
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };		// 2���� �迭
	// int** pary = ary;
	int(*pary)[4];			// int�� ���� 4���� �迭�� ����Ű�� �迭 ������
	pary = ary;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", pary[i][j]);
		}
		printf("\n");
	}
	//int* pary[4];			// int�� ������ ����Ű�� ������ �迭	
	return 0;
}