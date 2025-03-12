#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	while (20)
	{
		int flag;
		printf("종료하시려면 1~100 중 하나를 누르세요: \n");

		scanf("%d", &flag);
		if (flag > 100)
		{
			printf("100 이하의 숫자를 넣어라고 \n");
		}
		else if (flag > 20)
		{
			printf("선택한 숫자는 종료 숫차보다 큽니다.\n");
		}
		else if (flag < -0)
		{
			printf("- 넣지마라.\n");
		}
		else if (flag < 20)
		{
			printf("선택한 숫자는 종료 숫자보다 작습니다.\n");
		}
		else
		{
			printf("ㅊㅋㅊㅋ 찾았습니다. 종료합니다.\n");
			break;
		}
	}
	return 0;
}
