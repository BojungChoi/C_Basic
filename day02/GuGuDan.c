#include <stdio.h>

int main()
{
	int i;
	int j;
	printf("�Է��� �ܼ��� �Է��ϼ��� : ");
	scanf_s("%d", &i);
	
	printf("���� �Է��� %d������ ������ ����!\n", i);
	for (j = 1; j <= 9; j++)
	{
	printf("%d x %d = %d\n", i, j, i * j);
	}

	int x;
	int y;
	printf("������ ����\n");
	for (x = 2; x < 10;x++) {


		for (y = 1; y < 10;y ++) {
			printf("%d x %d = %d\t", x, y, x * y);
			
		}
		printf("\n");

	}
	printf("������ ����!");


	return 0;


}