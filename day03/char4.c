#include <stdio.h>

void myStrInput();

int main()
{
	char str[100];

	myStrInput();
	printf("입력한 문자열 : %s\n", str);


	return 0;
}

void myStrInput()
{
	char ch;
	printf("문자를 입력하세요 :	");
	ch = getchar();

	return ch;


}