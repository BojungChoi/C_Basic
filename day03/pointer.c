/*
	pointer - 주소
	pointer변수 - 주소를 저장할 수 있는 변수.
	- 포인터변수를 쓰는 이유?
	1. 메모리 주소 직접 접근 및 조작
	2. 동적 메모리 할당(malloc())
	3. 배열 문자열 처리 효율성을 증가시키위해
	4. 함수 호출방식 최적화

*/

#include <stdio.h>

main()
{
	int i;		// int 타입의 변수 선언
	int* pi;		// int 타입의 포인터 변수 선언
	char* pc;	// char 타입의 포인터 변수 선언 
	double* pd;

	int num = 10;
	printf("num의 주소 : %u\t", &num);
	printf("num의 값 %d\n", num);
	int* p = &num;		// 포인터변수 p 에 num의 주소를 저장 (* 아무의미없는 표시)
	printf("포인터 변수 p 에 저장된 값 : %u\t", p);
	printf("포인터 변수 p가 가리키는 곳의 값 : %d\n", *p); // 코드실행부분의 *는 간접참조=역참조 연산자
	
	num += 1;
	printf("num에 +1 했을 때 : num: %d, *p: %d \n", num, *p);

	*p += 1;
	printf("*p에 +1 했을 때 : num: %d, *p: %d \n", num, *p);


	return 0;
}