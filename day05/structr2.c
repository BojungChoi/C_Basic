/*

*/
#include <stdio.h>

struct myst {
	int num;
	double grade;

};

int main()
{
	struct myst s;
	s.num = 100;
	s.grade = 99.9;

	printf("numÀº %d , grade´Â %.1f", s.num, s.grade);

	return 0;
}
