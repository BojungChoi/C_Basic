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

	res = !(n >= 30);
	printf("res: %d\n", res);


	return 0;
}