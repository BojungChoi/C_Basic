/*
	���ڿ�
*/


#include <stdio.h>

int main()
{
	char str[100] = "orange";

	printf("%s\n", str); // ���ڿ� ���� (���� �� �ִ� �޸𸮿� ����� ���ڿ�)
	printf("%s\n", "orange"); // ���ڿ� ���
	printf("%p\n", "orange"); // ���ڿ� ����� �ּҰ�
	printf("%c\n", *"orange"); // ���ڿ� ����� ù��° ����
	printf("%c\n", *("orange" + 1)); // ���ڿ� ����� �ι�° ����
	printf("%c\n", "orange"[2]); // ���ڿ� ����� ����° ����

	"orange"[0] = 'O'; // ���ڿ� ����� �б� ���� �޸𸮿� ����Ǿ� �ֱ� ������ ���� �Ұ���
	str[0] = 'O'; // ����
	printf("%s\n", str);

	return 0;
}
