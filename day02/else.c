#include <stdio.h>

int main()
{
	for (int i = 0; i <= 10; i++) {
		if (i % 2 == 0) continue;	// �ǳʶڴ�.
		//if (i == 7) break;
		if (i >= 7) break; // ���ܹ߻����� �����Ͽ� �����
		printf("1 ~ 10������ ������ Ȧ�� �� %d \n", i);
	}
	return 0;
}