/*
	두 값을 바꾸는 알고리즘
*/

//#include <stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("변경전 a : %d, b: %d\n", a, b);
//
//	int temp = a;
//	a = b;
//	
//	

/*
	두 값을 바꾸는 알고리즘
*/

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 20;
	printf("변경전 a : %d, b: %d\n", a, b);

	int temp = a;
	a = b;
	b = temp;
	
	printf("변경 후 a: %d, b: %d\n", a, b);
	

	return 0;

	b = temp;
	
	printf("변경 후 a: %d, b: %d\n", a, b);
	

	return 0;
}