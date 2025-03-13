#include <stdio.h>

int main()
{

	int ary[5] = { 1,2,3,4,5 }; // 정수형 배열 선언

	printf("ary[0]: %d \n", ary[0]); // 배열의 첫 번째 요소 출력
	ary[3] = 400;
	printf("ary[3]: %d \n", ary[3]);


	for (int i = 0; i < 5; i++) // 배열의 모든 요소 출력
	{
		printf("ary[%d]: %d \n", i, ary[i]);
	}

	return 0;
} 