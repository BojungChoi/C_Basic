#include <stdio.h>

int main()
{

	int i;
	int sum = 0; // ������Ű�� ���� �ʱ�ȭ�� ���������.

	for (i = 0; i < 11; i++)
	{
		sum += i;

	}
	printf("1~10 ������ ���� %d �Դϴ�.", sum);

	return 0;
}