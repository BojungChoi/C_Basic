#include <stdio.h>
void printAry(int* a, int size);
void inputAry(int* pa, int _size);

int main()
{
    int ary[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };


    int size = sizeof(ary) / sizeof(ary[0]); 

    inputAry(ary, size);

    printAry(ary, size); 

    return 0;
}
void printAry(int* pa, int _size)
{
    printf("출력\n");
    for (int i = 0; i < _size; i++)
    {
        printf("ary[%d] = %d \n", i,  pa[i]);
    }
        printf("----------------------------\n");
}
void inputAry(int* pa, int _size)
{
    printf("배열의 총 갯수는 %d 개 입니다.\n", _size);
    for (int i = 0; i < _size; i++) 
    {
        printf(" %d번째 배열의 값을 입력하세요:\n", i, _size);
        printf("ary[%d]: ", i);
        scanf_s("%d", &pa[i]);
    }
    printf("------------------------\n");
}
