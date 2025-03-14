/*
    strcmp - 문자열	비교 함수
*/
#include <stdio.h>
#include <string.h>  // strcmp 쓰니까 추가!

int main()
{
    char str1[100] = "apple222";
    char str2[100] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("두 문자열이 같습니다.\n");
    else if (result < 0)
        printf("str1 이 str2 보다 사전순으로 앞에 있습니다.\n");
    else // result > 0
        printf("str2 가 str1 보다 사전순으로 뒤에 있습니다.\n");

    return 0;
}
