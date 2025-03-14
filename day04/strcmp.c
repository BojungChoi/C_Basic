/*
	strcmp - ���ڿ�	�� �Լ� (�������� abcd)
*/
#include <stdio.h>
#include <string.h>  // strcmp ���ϱ� �߰�!

int my_strcmp(char* A, char* B);

int main()
{
    char str1[100] = "baban";
    char str2[100] = "banana";

    int result = strcmp(str1, str2);

    /* str�� �������� ���� ������ -1 ��ȯ , str2�� ���� ������ 1��ȯ, ������ 0�� ��ȯ */

    if (my_strcmp(str1, str2) == 0)
    {
        printf("�� ���ڿ��� �����ϴ�.\n");
    }

    else if (my_strcmp(str1, str2) == -1)
    {
        printf("str1�� ���������� ���� ���ɴϴ�.\n");
    }
    else
    {
        printf("str2�� ���������� ���� ���ɴϴ�.\n");
    }
    return 0;
}


int my_strcmp(char* A, char* B)
{
    // �� str�� ���� ���ϱ�
    int A_len = strlen(A);
    int B_len = strlen(B);

    // ���׿�����. ���� ���� �� �� ª������ range ������ ���
    int range = A_len > B_len ? B_len : A_len;

    // ª������ �������� �ݺ��� ��ȸ
    // ���������� �����̴ϱ� �� �������� ����
    for (int i = 0; i < range; ++i)
    {
        if (A[i] < B[i]) { return -1; }
        else if (A[i] > B[i]) { return 1; }
        else { continue; }
    }
    // for ������ return���� ������ �ȉ�ٸ� �ΰ��� str�� ���ٴ� ��
    // ���� �������� �Ǵ�.
    if (A_len < B_len) { return -1; }
    else if (A_len > B_len) { return 1; }
    // ������ �Ȱɸ��� ��¥ ���� �Ȱ�������
    else { return 0; }
}



