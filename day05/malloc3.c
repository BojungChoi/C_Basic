
#include<stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{

	char str[100];
	char* ps[5];

	for (int i = 0 ; i < 5; i++)
	{
	printf("문자5 개입력하셈 >> ");
	fgets(str, 100, stdin);

	ps[i] = (char*)malloc(strlen(str) + 1);
	
	strcpy(ps[i], str);
	printf("입력한 문자열 : %s\n", ps[i]);
	free(ps[i]);							// 동적 메모리 반환
	}

	if (ps == NULL) {					// 시스템 메모리부족, 힙공간이 다차거나, 프로세스 할당된 메모리 초과등이 발생할때  포인터가 아무것도 안가리키는 상태
		printf("메모리 할당 실패");		// 방어코드 . 
		exit(1); // == return 1;
	}




	return 0;
}