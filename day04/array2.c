/*
	2차원 char 배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char fruit[5][10];

	for (int i = 0; i < 5; i++) {
		printf("%d 번째 과일을 입력하세요: \n", i + 1);
		scanf_s("%s", fruit[i],sizeof(fruit));
	}

	printf("입력된 과일은 다음과 같습니다.\n");
	for (int i = 0; i < 5; i++) {
		printf("%s\n", fruit[i]);
	}

	return 0;
}