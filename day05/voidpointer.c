#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divi(int, int);  // div �̸� �浹�� �� �־ divi�� ����
void func(int(*oper)(int, int), int, int);

int main()
{
	int (*fp)(int, int);
	int x, y;
	char oper;

	printf("���� �� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &x, &y);

	printf("������ �����ڸ� �����ϼ��� (+, -, *, /): ");
	scanf_s(" %c", &oper, 2);

	switch (oper)
	{
	case '+':
		fp = sum;
		break;
	case '-':
		fp = min;
		break;
	case '*':
		fp = mul;
		break;
	case '/':
		fp = divi;
		break;
	default:
		printf("�߸��� �������Դϴ�!\n");
		return 1; 
	}

	func(fp, x, y);

	return 0;
}

void func(int (*oper)(int a, int b), int a, int b)
{
	int result = oper(a, b);
	printf("����� %d �Դϴ�!\n", result);
}

int sum(int a, int b)
{
	return a + b;
}

int min(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int divi(int a, int b)
{
	if (b == 0) {
		printf("0���� ���� �� �����ϴ�!\n");
		return 0;  
	}
	return a / b;
}
