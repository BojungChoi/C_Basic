/*
	����� ���� �ڷ��� - ���α׷��Ӱ� ���� �ڷ���(Ÿ��)�� �����ؼ� ����
						���ο� �ڷ����� ���� ������ ���� ����

	struct(����ü) - ���� �����͸� �������� ����
	union - ���� �������� �ϳ��� ����
	enum - ��� ���� ����

*/
#include <stdio.h>

struct Human {				// ����ü ���� struct ����ü��
	char name[20];			// �������
	int age;				// �������
	float tall;
};


int main()
{
	struct Human A1 = {"����",31,176.675 };		// Human ����ü�� ���� A1 ����
	
	//A1.name[15] = "��Ȳ"; // �̷��Դ� ���ԺҰ�
	//snprintf(A1.name, sizeof(A1.name), "Bojung");
	strcpy(A1.name, "Bojung"); // ���ڿ� ī�Ƕ�� ����� ���

	A1.age = 25;
	A1.tall = 122.252;


	char str[100] = "Hong Kildong";
	printf("%s\n", str);
	//char str2[100];
	//str2 = "kim chulsul";



	printf("�̸�: %s\n", A1.name);
	printf("����: %d\n", A1.age);
	printf("Ű: %.1f\n", A1.tall);


	return 0;
}