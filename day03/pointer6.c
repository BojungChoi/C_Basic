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
    printf("���\n");
    for (int i = 0; i < _size; i++)
    {
        printf("ary[%d] = %d \n", i,  pa[i]);
    }
        printf("----------------------------\n");
}
void inputAry(int* pa, int _size)
{
    printf("�迭�� �� ������ %d �� �Դϴ�.\n", _size);
    for (int i = 0; i < _size; i++) 
    {
        printf(" %d��° �迭�� ���� �Է��ϼ���:\n", i, _size);
        printf("ary[%d]: ", i);
        scanf_s("%d", &pa[i]);
    }
    printf("------------------------\n");
}
