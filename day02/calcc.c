#include <stdio.h>

// �Լ� ����
int add(int, int);
int min(int, int);
int mul(int, int);
int div(int, int);

int main() {
    int x = 0;
    int y = 0;
    char op;

    printf("���� ���α׷��Դϴ�.\n");
    printf("������ �Է��� �ּ���.\n");
    scanf_s("%d", x);
    printf("������ �Է��� �ּ���.\n");
    scanf_s("%d", y);

    getchar();
    printf("�����ڸ� �Է��ϼ���.\n");
    scanf_s("%c", &op, sizeof(op));


    switch (op)
    {
    case '+':
       int result = add(x+y)
         return  result;
    case '-':
        break;
    case '*':
        break;
    case '/':
        break;
    case 'p':
        printf("���α׷� ����!");
        break;
    default:
        printf("")
        break;
    }

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