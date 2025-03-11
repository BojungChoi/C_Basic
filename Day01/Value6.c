/* 상수 */
#include <stdio.h>

int main()
{
	int r = 10;
	const double pi = 3.14; // const는 상수를 선언함 3.14를 상수화시키는게아니라 변수이름을 변경할 수 없게함
	double circumference = 2 * pi * r;

	// pi = 3.15; // 상수에 값을 대입하려고 하면 오류가 발생함
	double* dp = &pi; // & 를 삽입시 pi의 메모리 주소를 dp에 대입함
	*dp = 4.0;

	printf("원둘레 : %.2lf\n", circumference);
	printf("pi: %.2lf", pi);

	return 0;
}