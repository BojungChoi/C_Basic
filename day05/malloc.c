/*
	�޸� ���� �Ҵ� : malloc - free 
	
	heap������ �޸� �ּҸ� voide Ÿ������ ���� ��������Դϴ�

	calloc - 

	realloc - ũ������
*/
#include <stdio.h>
#include <stdlib.h> // malloc(), free()


int main()
{
	int* pi = (void*)malloc(sizeof(int)); // heap������ �Է�ũ�⸸ŭ �޸� ������ �Ҵ�޾� ���� �ּҸ� �����Ѵ�.
	if (pi == NULL) {
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	*pi = 10;  // �Ҵ�� �޸� ������ �� ����
	printf("p�� ����Ű�� ���� %d\n", *pi);

	free(pi);  // �޸� ����!! (�� �ϸ� �޸� ����)
	return 0;
}