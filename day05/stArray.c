#include <stdio.h>

typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char addr[100];
}ADDR;

void print_list(ADDR* list , int size);

int main()
{	


	ADDR list[] = (ADDR*)malloc(sizeof(ADDR) * 10);




	for (int i = 0; i < size; i++) {

	printf("추가 입력 (이름, 나이, 전번, 주소순)");
	scanf_s("%s%d%s%s", list[i].name, list[i].age, list[i].tel, list[i].addr);

	}




	print_list(list, size);

	
	return 0;
}
// 구조체 배열을 출력하는 함수 만들기

void print_list(ADDR* list, int size) {

	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}