#include <stdio.h>

int sum(int, int);
int min(int, int);
int mul(int, int);
int divi(int, int);  // div 이름 충돌날 수 있어서 divi로 변경
void func(int(*oper)(int, int), int, int);

int main()
{
	int (*fp)(int, int);
	int x, y;
	char oper;

	printf("정수 두 개를 입력하세요: ");
	scanf_s("%d %d", &x, &y);

	printf("연산할 연산자를 선택하세요 (+, -, *, /): ");
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
		printf("잘못된 연산자입니다!\n");
		return 1; 
	}

	func(fp, x, y);

	return 0;
}

void func(int (*oper)(int a, int b), int a, int b)
{
	int result = oper(a, b);
	printf("결과는 %d 입니다!\n", result);
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
		printf("0으로 나눌 수 없습니다!\n");
		return 0;  
	}
	return a / b;
}
