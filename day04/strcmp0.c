/*
    strcmp - ���ڿ�	�� �Լ�
*/
#include <stdio.h>
#include <string.h>  // strcmp ���ϱ� �߰�!

int main()
{
    char str1[100] = "apple222";
    char str2[100] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("�� ���ڿ��� �����ϴ�.\n");
    else if (result < 0)
        printf("str1 �� str2 ���� ���������� �տ� �ֽ��ϴ�.\n");
    else // result > 0
        printf("str2 �� str1 ���� ���������� �ڿ� �ֽ��ϴ�.\n");

    return 0;
}
