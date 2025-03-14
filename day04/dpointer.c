/*
	이중포인터
*/
#include <stdio.h>

int main()
{
	int n = 100;
	int* pn = &n;
	int** ppn = &pn; 	// int** ppn = &(&n); 과 같은 의미
	
	printf("%d\n", n);
	printf("%d\n", *pn);
	printf("%d\n", **ppn);

	printf("n: %d\t n 주소: %p\n", n, &n);
	printf("pn: %p\t pn 주소: %p\t *pn: %d\n", pn, &pn, *pn);
	printf("ppn: %p\t ppn 주소: %p\t *ppn: %p\t **ppn: %d\n", ppn, &ppn, *ppn, **ppn);

	return 0;
}