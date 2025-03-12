#define _CRT_SECURE_NO_WARNINGS // scanf 사용시 _s 사용안할경우 구문 필요.
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
    int result = 0;  // 연산 결과를 저장할 변수

    printf("계산기 프로그램입니다.\n");
    printf("정수를 입력해 주세요.\n");
    scanf_s("%d", &x);  // 변수 주소를 넘겨야 함
    printf("정수를 입력해 주세요.\n");
    scanf_s("%d", &y);  // 변수 주소를 넘겨야 함

    getchar();  // 버퍼에 남은 \n 처리
    printf("연산자를 입력하세요.\n");
    scanf("%c", &op);  // 연산자 입력 받기

    switch (op)
    {
    case '+':
        result = add(x, y);  // add 함수 호출
        break;
    case '-':
        result = min(x, y);  // min 함수 호출
        break;
    case '*':
        result = mul(x, y);  // mul 함수 호출
        break;
    case '/':
        if (y != 0) {
            result = div(x, y);  // div 함수 호출
        }
        else {
            printf("0으로 나눌 수 없습니다.\n");
            return 1;  // 프로그램 종료
        }
        break;
    case 'p':
        printf("프로그램 종료!\n");
        return 0;  // 프로그램 종료
    default:
        printf("잘못된 연산자입니다.\n");
        return 1;  // 오류 발생 시 종료
    }

    printf("결과: %d\n", result);  // 결과 출력
    return 0;  // 프로그램 종료
}

// 함수 정의
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
