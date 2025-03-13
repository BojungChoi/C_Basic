#include <stdio.h>

int main() {
 
	int score[5] = { 0, };		// 배열의방을 0으로 초기화
	int size = sizeof(score) / sizeof(score[0]);

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		printf("점수를 입력하세요:");
		scanf_s("%d", &score[i]); //, sizeof(score[i]) -> 문자열에만 필요
		sum += score[i];
	}
		printf("총 score점수 : %d", sum);
	
	return 0;

}



