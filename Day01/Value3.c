/* */
#include<stdio.h>

int main()
{
	float f = 1.12345678912345;
	double d = 1.12345678912345;

	printf("f 의값은 : %.15f\n", f);  // 1.123456835746765
	printf("d 의값은 : %.15lf\n", d); // 1.123456789123450



	return 0;
}