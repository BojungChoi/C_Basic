#include <stdio.h>

int main()
{
	int n = 10;
	double res;
	
	int n2 = 10.0;
	double res2;


	// res = (double)n / 3;  // ����ȯ�� ����� �Ѵ�.

	// res = n / 3.0;  // ���� / �Ǽ� �� �Ǽ��� ����
	res = (double)n / 3.0;  

	res2 = n2 / 3;

	printf("res: %.1lf\n", res);
	printf("res: %.1lf\n", res2);

	return 0;
}

//num = 10
//str(num)