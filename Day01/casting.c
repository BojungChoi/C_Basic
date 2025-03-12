#include <stdio.h>

int main()
{
	int n = 10;
	double res;
	
	int n2 = 10.0;
	double res2;


	// res = (double)n / 3;  // 형변환을 해줘야 한다.

	// res = n / 3.0;  // 정수 / 실수 는 실수가 나옴
	res = (double)n / 3.0;  

	res2 = n2 / 3;

	printf("res: %.1lf\n", res);
	printf("res: %.1lf\n", res2);

	return 0;
}

//num = 10
//str(num)