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
		printf("����num�� ���� : %d �Դϴ�.\n", num);

	case 15:
		for (num ; num >= 5; num--)
		{
			int sum = num ;
			printf("���� sum�ǰ� : %d\n", sum);
		}
		switch (num)
		{
		case 2:
			break;
		case 4:
			++num;
		case 10:
			printf("case�� �ȿ� case�� �� ���Ӵ� �� ���� num : %d\n", num);
		case 15:
			num--;
			break;
		}
	case 21:
		printf("���� num �� : %d", num);
	default:
		printf("���α׷� ����!");
		break;
	}



	return 0;
}

// switch(���ǽ�) ~ case: