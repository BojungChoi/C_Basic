#include <stdio.h>

int main()
{
	int num = 10;
	int n = 0;

	switch (num)
	{
	case 1:
		break;
	case 4:
		break;
	case 10:
		++num;
	case 11:
		printf("현재num의 값은 : %d 입니다.\n", num);

	case 15:
		for (num ; num >= 5; num--)
		{
			int sum = num ;
			printf("현재 sum의값 : %d\n", sum);
		}
		switch (num)
		{
		case 2:
			break;
		case 4:
			++num;
		case 10:
			printf("case문 안에 case에 또 들어왓다 ㅋ 현재 num : %d\n", num);
		case 15:
			num--;
			break;
		}
	case 21:
		printf("현재 num 값 : %d", num);
	default:
		printf("프로그램 종료!");
		break;
	}



	return 0;
}

// switch(조건식) ~ case: