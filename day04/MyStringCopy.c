#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcpy �Լ� ����ִ� ���!

void my_copy(char* dest, const char* src);  // ����� ���� ���� �Լ�
int main() {
    char src[] = "���ؽ�!!";
    char dest[100];  

    my_copy(dest, src); 

    printf("����� ����: %s\n", dest);

    return 0;
}

void my_copy(char* dest, const char* src) {
    strcpy(dest, src);
	//strncpy(dest, src, 3);  // 3���ڸ� ����

}

