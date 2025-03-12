#include <stdio.h>

// 함수 선언
int add(int, int);
int min(int, int);
int mul(int, int);
int div(int, int);

int main() {
    int x = 0;
    int y = 0;
    char op;

    printf("계산기 프로그램입니다.\n");
    printf("정수를 입력해 주세요.\n");
    scanf_s("%d", x);
    printf("정수를 입력해 주세요.\n");
    scanf_s("%d", y);

    getchar();
    printf("연산자를 입력하세요.\n");
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
        printf("프로그램 종료!");
        break;
    default:
        printf("")
        break;
    }

}

// 함수 정의
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