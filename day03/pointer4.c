/*
	swap2 - pointer �̿�
*/

#include <stdio.h>
void swap(int*, int*);

int main()
{

	int a = 10;
	int b = 20;

	printf("ȣ�� �� a : %d, b : %d\n", a, b);

	swap(&a, &b); // ������ �ּ�
	printf("ȣ�� �� a : %d, b : %d\n", a, b);

	return 0;

}

void swap(int* a, int* b) // ������ �ּ�
{
	int temp = *a; // *a => ������ ��!!!
	*a = *b; // �����ǰ�a = �����ǰ�b
	*b = temp; // �����ǰ�b = ������
}




	//printf("���� �� a : %d, b: %d\n", a, b);
	//
	//int* pa = &a;
	//int* pb = &b;

	//int* temp = *pa;	// int temp = a;
	//	  * pa = *pb;	// a = b;
	//	  * pb = temp;	//b = temp;

	//printf("���� �� a: %d, b: %d\n", a, b);