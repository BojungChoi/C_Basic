/*
	const
*/
#include <stdio.h>

int main()
{
	const int num = 10;

	int num2 = 10;
	num2 = 20;

	int* pnum2 = &num2;
	*pnum2 = 30;
	printf("%d\n", num2);

	const int* pn2 = &num2; // 데이터 상수 (포인터가 가리키는 데이터를 변경할 수 없다)
	num2 = 0;
	// *pn2 = 100; // 오류! 간접 참조를 통해 값 변경 불가
	pn2 = &num2; // 가능! 포인터 자체는 다른 주소를 가리킬 수 있다.
	printf("%d\n", num2);


	int num3 = 40;
	int* const pnum3 = &num3; // 포인터 상수 (포인터변수가 가리키는 주소를 변경할 수 없다)
	*pnum3 = 30; // 가능! 포인터가 가리키는 데이터는 변경할 수 있다.	

	printf("%d\n", num3);

	// pnum3 = &num2; 

	const int* const pn5 = &num2; // 데이터 상수 + 포인터 상수 (가리키는 값 변경 불가 + 포인터 변경 불가)
	// *pn5 = 1000; // 오류! 가리키는 데이터 변경 불가
	// pn5 = &num3; // 오류! 포인터가 다른 주소를 가리키도록 변경 불가
	num2 = 40; // 가능! 하지만 이는 num2 변수를 직접 변경한 것이므로, pn5와는 무관


	return 0;
}