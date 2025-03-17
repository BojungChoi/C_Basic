/*
	메모리 동적 할당 : malloc - free 
	
	heap영역의 메모리 주소를 voide 타입으로 리턴 시켜줘야함니당

	calloc - 

	realloc - 크기조절
*/
#include <stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{
	int* pi = (void*)malloc(sizeof(int)); // heap영역에 입력크기만큼 메모리 공간을 할당받아 시작 주소를 리턴한다.
	if (pi == NULL) {
		printf("메모리 할당 실패");
		exit(1);
	}
	*pi = 10;  // 할당된 메모리 공간에 값 저장
	printf("p가 가리키는 값은 %d\n", *pi);

	free(pi);  // 메모리 해제!! (안 하면 메모리 누수)
	return 0;
}