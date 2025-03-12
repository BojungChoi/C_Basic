#include <stdio.h>

// 함수 선언
int add(int, int);
int min(int, int);
int mul(int, int);
int div(int, int);

int main() {
    int x = 0;
    int y = 0;

    printf("계산기 프로그램입니다.\n");
    printf("두 개의 정수를 입력해 주세요.\n");
    printf("연산자를 입력하세요.\n");

    scanf_s("%d %d", &x, &y);

    printf("% d % d\n", x , y);

    int result = add(x, y);
    
    printf("덧셈 결과: %d\n", result);

    int result2 = min(x, y);

    printf("뺄셈 결과: %d\n", result2);

    int result3 = mul(x, y);

    printf("곱셈 결과: %d\n", result3);

    int result4 = div(x, y);

    printf("나눗셈 결과: %d\n", result4);

    
    return 0;
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