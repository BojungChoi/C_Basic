#include <stdio.h>

int main()
{
	int ary[] = { 1, 2, 3 };
	
	printf("배열의 전체크기 : %d\n", sizeof(ary));
	printf("배열 방 한개의 크기: %d\n", sizeof(*(ary+0)));
	printf("배열 방 한개의 크기: %d\n", sizeof(ary[0]));
	printf("배열 방의 갯수: %d\n", sizeof(ary) / sizeof(ary[1]));
	printf("배열 이름 : %p\n", ary);
	printf("배열의 첫번째방 주소 %p \n", &ary[0]);
	printf("배열의 두번째방 주소%p\n", ary + 1);
	printf("배열의 두번째방 주소%p\n", &ary[1]);


	return 0;
}
