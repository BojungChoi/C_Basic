#include <stdio.h>

void myStrInput();

int main()
{
	char str[100];

	myStrInput();
	printf("�Է��� ���ڿ� : %s\n", str);


	return 0;
}

void myStrInput()
{
	char ch;
	printf("���ڸ� �Է��ϼ��� :	");
	ch = getchar();

	return ch;


}