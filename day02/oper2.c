#include <stdio.h>


/*
 삼항연산자
 증감연산자
*/
int main()
{

	int n = 10, n2 = 20;
	int res;


	res = (n < n2) ? n : n2;
	printf("res : %d\n", res);

	
	res = n++;
	printf("n++: %d\n", n++);

	res = ++n2;
	printf("++n2: %d\n", ++n2);


	return 0;

}