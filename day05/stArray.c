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

	printf("�߰� �Է� (�̸�, ����, ����, �ּҼ�)");
	scanf_s("%s%d%s%s", list[i].name, list[i].age, list[i].tel, list[i].addr);

	}




	print_list(list, size);

	
	return 0;
}
// ����ü �迭�� ����ϴ� �Լ� �����

void print_list(ADDR* list, int size) {

	for (int i = 0; i < size; i++) {
		printf("%s, %d, %s, %s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
}