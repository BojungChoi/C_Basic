#include <stdio.h>
int DaeGoGoSo(int a);
int SoGoGoDae(int a);

int main()
{

	char ch1;
	printf("��ҹ��� ��ȯ�� ����! \n");
	printf("���ڸ� ���ĺ��� �Է��ϼ���!\n");
	scanf_s("%c", &ch1, 1);
		if ((ch1 >= 'A') && (ch1 <= 'Z'))
		{
			printf("�빮�ڸ� �Է��ϼ̱���!\n");
			printf("�Է��� �� ��ȯ �Ϸ�! : %c\n ", DaeGoGoSo(ch1));
		}
		else if ((ch1 >= 'a') && (ch1 <= 'z'))
		{
			printf("�ҹ��ڸ� �Է��ϼ̱���!\n");
			printf("�Է��� �� ��ȯ �Ϸ�! : %c\n ", SoGoGoDae(ch1));
		}
		else
		{
			printf("�Է��Ͻ� ���ڴ� ���ĺ��� �ƴմϴ�. �ٽ� �Է��ϼ���.\n");
		}
	return 0;
}

int DaeGoGoSo(int a)
{
	return a + ('a' - 'A');
}
// �ҹ��� �� �빮�� ��ȯ �Լ�
int SoGoGoDae(int a)
{
	return a - 32; 
}



	




//int main()
//{
//	char ch1;
//	char ch2 = 'A';
//	if ((ch2 >= 'A') && (ch2 <= 'Z')); {
//		ch1 = ch2 + ('a' - 'A');	// 32
//	}
//	printf("�빮�� : %c\t", ch2);
//	printf("�ҹ��� : %c\n", ch1);
//
//	return 0;
//}