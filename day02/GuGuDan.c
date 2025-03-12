#include <stdio.h>

int main()
{
	int i;
	int j;
	printf("입력할 단수를 입력하세요 : ");
	scanf_s("%d", &i);
	
	printf("현재 입력한 %d단으로 구구단 실행!\n", i);
	for (j = 1; j <= 9; j++)
	{
	printf("%d x %d = %d\n", i, j, i * j);
	}

	int x;
	int y;
	printf("구구단 ㄱㄱ\n");
	for (x = 2; x < 10;x++) {


		for (y = 1; y < 10;y ++) {
			printf("%d x %d = %d\t", x, y, x * y);
			
		}
		printf("\n");

	}
	printf("구구단 종료!");


	return 0;


}