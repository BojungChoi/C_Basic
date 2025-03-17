#include<stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{
	char str[100];
	char* ps;

	printf("문자열을 입력하세요 >> ");
	gets(str);
	printf("입력한 문자열 : %s\n", str);


	for (int i = 0; i < 5; i++)
	{
		

	}

	ps = (char*)malloc(strlen(str) + 1); // str의 길이에 널문자 하나 더한 크기만큼 메모리 공간을 할당하고, 그 주소를 형변환하여 ps에 저장한다
	if (ps == NULL) {					// 시스템 메모리부족, 힙공간이 다차거나, 프로세스 할당된 메모리 초과등이 발생할때  포인터가 아무것도 안가리키는 상태
		printf("메모리 할당 실패");		// 방어코드 . 
		exit(1); // == return 1;
	}

	

	strcpy(ps, str);

	printf("heap : %s\n", ps);			// 문자열 복사

	free(ps);							// 동적 메모리 반환

	return 0;
}