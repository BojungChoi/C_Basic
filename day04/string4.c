/*
	puts, fputs - ���� ��� �Լ�
	stdout - ǥ�� ��� ����(��Ʈ��)
*/

#include <stdio.h>

int main()
{

	char str[100] = "Delmonte orange"; // �������� , str�� �ּҰ� ����(�迭 �̸��� �ּ� ��)
	char* ps = "banana";		  	   // �����Ұ��� , ���ͷ� ���ڿ�, ps�� �����Ͷ� �ٸ� �ּҵ� ����ų �� ����

	printf("%s\n", str); // �Ϲ����� ��� �Լ�
	puts(str); // ���ڿ����� ��� �Լ� (������) , ���� ����   �ڵ�����
	fputs(str, stdout); // ǥ�� ��� ����(��Ʈ��)				  ����ȵ�
	puts(ps); // puts �� �������
	fputs(ps, stdout);


	return 0;

}