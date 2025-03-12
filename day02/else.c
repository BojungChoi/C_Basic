#include <stdio.h>

int main()
{
	for (int i = 0; i <= 10; i++) {
		if (i % 2 == 0) continue;	// 건너뛴다.
		//if (i == 7) break;
		if (i >= 7) break; // 예외발생까지 감안하여 만든다
		printf("1 ~ 10까지의 숫자중 홀수 는 %d \n", i);
	}
	return 0;
}