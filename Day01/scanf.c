/*
	�Է� - scanf()
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

// --------------------------------------------------

	{
		//int inputVal;
		//printf("������ �Է��ϼ���: ");
		//scanf("%d", &inputVal); // & �ּ� ������ : Ű����� �Է¹��� ��(�ּҰ��� �ٸ�)�� inputVal�� ���� �ϱ����ؼ� �ּҿ����ڸ� ���


		//printf("�Է��� ������ %d �Դϴ�.\n", inputVal);

		//int n1, n2;
		//printf("�ΰ��� ������ �Է��ϼ���: ");
		//scanf_s("%d%d", &n1, &n2); // _s �� ������ ��ȭ�� �Լ��̴�. scanf_s�� scanf���� �����ϴ�. (���ۿ����÷ο츦 �����ϴ� ���̴�.)

		//printf("�Է��� �� ������ %d, %d �Դϴ�.\n", n1, n2);
		//return 0;


	}
// --------------------------------------------------


// --------------------------------------------------
	{
		char str[20];
		int age;
		

		//printf("���ڿ��� �Է��ϼ���:  ");
		//scanf_s("%s", str, sizeof(str));

		//

		//printf("�Է��� ���ڿ��� %s �Դϴ�.\n", str);


 


		//printf("charũ�� : %d\n", sizeof(char));
		//printf("����ũ�� : %d\n", sizeof(int));
		//printf("floatũ��: %d\n", sizeof(float));
		//printf("doubleũ��: %d\n", sizeof(double));
		

		// scanf_s ���� _s �� ���� �����÷ο� ������ ���Ѱ��̸�, sizeof(str)�� ��������� ����������Ѵ�.

		// ���� scanf ���� scanf_s("%s %d", str, &age); �̷��� �����Ѱ�� ���� �߻�



		printf("����� �̸��� �Է��ϼ���: ");
		scanf_s("%s", str, sizeof(str)); 

		printf("����� �̸��� %s �Դϴ�.\n", str);


		printf("����� ���̸� �Է��ϼ���: ");
		
		
		scanf_s("%d", &age);

		printf("����� %d �� �Դϴ�.", age);


		printf("����� �̸��� ���̸� �Է��ϼ���: ");
		
		scanf_s("%s %d", str, sizeof(str), &age);

		printf("����� �̸��� %s �̰�, ���̴� %d�� �Դϴ�.\n", str, age);


		return 0;
	}



}