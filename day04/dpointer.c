/*
	����������
*/
#include <stdio.h>

int main()
{
	int n = 100;
	int* pn = &n;
	int** ppn = &pn; 	// int** ppn = &(&n); �� ���� �ǹ�
	
	printf("%d\n", n);
	printf("%d\n", *pn);
	printf("%d\n", **ppn);

	printf("n: %d\t n �ּ�: %p\n", n, &n);
	printf("pn: %p\t pn �ּ�: %p\t *pn: %d\n", pn, &pn, *pn);
	printf("ppn: %p\t ppn �ּ�: %p\t *ppn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);

	return 0;
}