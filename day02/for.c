#include <stdio.h>

int main()
{

	int i;
	int sum = 0; // 누적시키는 값은 초기화를 시켜줘야함.

	for (i = 0; i < 11; i++)
	{
		sum += i;

	}
	printf("1~10 까지의 합은 %d 입니다.", sum);

	return 0;
}