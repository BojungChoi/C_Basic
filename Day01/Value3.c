/* */
#include<stdio.h>

int main()
{
	float f = 1.12345678912345;
	double d = 1.12345678912345;

	printf("f �ǰ��� : %.15f\n", f);  // 1.123456835746765
	printf("d �ǰ��� : %.15lf\n", d); // 1.123456789123450



	return 0;
}