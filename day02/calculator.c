#include <stdio.h>

// �Լ� ����
int add(int, int);
int min(int, int);
int mul(int, int);
int div(int, int);

int main() {
    int x = 0;
    int y = 0;

    printf("���� ���α׷��Դϴ�.\n");
    printf("�� ���� ������ �Է��� �ּ���.\n");
    printf("�����ڸ� �Է��ϼ���.\n");

    scanf_s("%d %d", &x, &y);

    printf("% d % d\n", x , y);

    int result = add(x, y);
    
    printf("���� ���: %d\n", result);

    int result2 = min(x, y);

    printf("���� ���: %d\n", result2);

    int result3 = mul(x, y);

    printf("���� ���: %d\n", result3);

    int result4 = div(x, y);

    printf("������ ���: %d\n", result4);

    
    return 0;
}

// �Լ� ����
int add(int a, int b) 
{
    int result = a + b;

    return result;
}

int min(int a, int b)
{
    int result2 = a - b;

    return result2;
}

int mul(int a, int b) 
{
    int result3 = a * b;

    return result3;
}

int div(int a, int b) 
{
    int result4 = a / b;

    return result4;
}