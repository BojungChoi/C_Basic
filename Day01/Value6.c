/* ��� */
#include <stdio.h>

int main()
{
	int r = 10;
	const double pi = 3.14; // const�� ����� ������ 3.14�� ���ȭ��Ű�°Ծƴ϶� �����̸��� ������ �� ������
	double circumference = 2 * pi * r;

	// pi = 3.15; // ����� ���� �����Ϸ��� �ϸ� ������ �߻���
	double* dp = &pi; // & �� ���Խ� pi�� �޸� �ּҸ� dp�� ������
	*dp = 4.0;

	printf("���ѷ� : %.2lf\n", circumference);
	printf("pi: %.2lf", pi);

	return 0;
}