/* ���� ���� */

#include <stdio.h>

int main()
{
	int num;		// �ڷ��� ������
	num = 10;
	int num2 = 150; // ������ �ʱ�ȭ 
	// (l value,  r value) r value�� �����(���ͷ�)�� �ǹ� ��value�� ������ �ǹ�

	num = num2; // ������ ����

	char ch = 'A'; // ������ ����
	double db = 3.14; // �Ǽ��� ����
	
	printf("num�� ����: %d\n", num);
	printf("num�� ����: %d\n", num2);
	printf("ch�� ����: %c\n", ch);
	printf("db�� ����: %f\n", db);


	return 0;
}
