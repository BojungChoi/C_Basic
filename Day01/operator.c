#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 30;
	int res;

	res = (n > 10) && (n < 20);
	printf("res: %d\n", res);
	
	res = (n > 10) || (n < 20);
	printf("res: %d\n", res);

	res = (n >= 30);
	printf("res: %d\n", res);

	res = n << 1 ;
	printf("res: %x\n", res);

	res = res >> 1;
	printf("res: %x\n", res);


	int n2 = 143;				
	res = n2 << 1;			

	res = n2 >> 1;				
	printf("res: %x\n", res);	
	
	
	return 0;

}