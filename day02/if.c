#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	while (20)
	{
		int flag;
		printf("�����Ͻ÷��� 1~100 �� �ϳ��� ��������: \n");

		scanf("%d", &flag);
		if (flag > 100)
		{
			printf("100 ������ ���ڸ� �־��� \n");
		}
		else if (flag > 20)
		{
			printf("������ ���ڴ� ���� �������� Ů�ϴ�.\n");
		}
		else if (flag < -0)
		{
			printf("- ��������.\n");
		}
		else if (flag < 20)
		{
			printf("������ ���ڴ� ���� ���ں��� �۽��ϴ�.\n");
		}
		else
		{
			printf("�������� ã�ҽ��ϴ�. �����մϴ�.\n");
			break;
		}
	}
	return 0;
}
