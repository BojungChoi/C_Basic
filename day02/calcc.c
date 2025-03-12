#define _CRT_SECURE_NO_WARNINGS // scanf ���� _s �����Ұ�� ���� �ʿ�.
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
    int result = 0;  // ���� ����� ������ ����

    printf("���� ���α׷��Դϴ�.\n");
    printf("������ �Է��� �ּ���.\n");
    scanf_s("%d", &x);  // ���� �ּҸ� �Ѱܾ� ��
    printf("������ �Է��� �ּ���.\n");
    scanf_s("%d", &y);  // ���� �ּҸ� �Ѱܾ� ��

    getchar();  // ���ۿ� ���� \n ó��
    printf("�����ڸ� �Է��ϼ���.\n");
    scanf("%c", &op);  // ������ �Է� �ޱ�

    switch (op)
    {
    case '+':
        result = add(x, y);  // add �Լ� ȣ��
        break;
    case '-':
        result = min(x, y);  // min �Լ� ȣ��
        break;
    case '*':
        result = mul(x, y);  // mul �Լ� ȣ��
        break;
    case '/':
        if (y != 0) {
            result = div(x, y);  // div �Լ� ȣ��
        }
        else {
            printf("0���� ���� �� �����ϴ�.\n");
            return 1;  // ���α׷� ����
        }
        break;
    case 'p':
        printf("���α׷� ����!\n");
        return 0;  // ���α׷� ����
    default:
        printf("�߸��� �������Դϴ�.\n");
        return 1;  // ���� �߻� �� ����
    }

    printf("���: %d\n", result);  // ��� ���
    return 0;  // ���α׷� ����
}

// �Լ� ����
int add(int a, int b)
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

int div(int a, int b)
{
    return a / b;
}
