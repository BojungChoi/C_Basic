/*
	swap2 - pointer 이용
*/

#include <stdio.h>
void swap(int*, int*);

int main()
{

	int a = 10;
	int b = 20;

	printf("호출 전 a : %d, b : %d\n", a, b);

	swap(&a, &b); // 변수의 주소
	printf("호출 후 a : %d, b : %d\n", a, b);

	return 0;

}

void swap(int* a, int* b) // 변수의 주소
{
	int temp = *a; // *a => 변수의 값!!!
	*a = *b; // 변수의값a = 변수의값b
	*b = temp; // 변수의값b = 변수값
}




	//printf("변경 전 a : %d, b: %d\n", a, b);
	//
	//int* pa = &a;
	//int* pb = &b;

	//int* temp = *pa;	// int temp = a;
	//	  * pa = *pb;	// a = b;
	//	  * pb = temp;	//b = temp;

	//printf("변경 후 a: %d, b: %d\n", a, b);