#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>  // strcpy 함수 들어있는 헤더!

void my_copy(char* dest, const char* src);  // 사용자 정의 복사 함수
int main() {
    char src[] = "엄준식!!";
    char dest[100];  

    my_copy(dest, src); 

    printf("복사된 값은: %s\n", dest);

    return 0;
}

void my_copy(char* dest, const char* src) {
    strcpy(dest, src);
	//strncpy(dest, src, 3);  // 3글자만 복사

}

