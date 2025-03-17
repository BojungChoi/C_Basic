/*
	구조체 포인터:
*/
#include <stdio.h>

typedef struct score {
	int kor;
	int mat;
	int eng;
}SCORE;

int main()
{
	SCORE s = { 100, 80, 85 };
	SCORE* ps = &s;

	printf("국어 : %d\n", ps->kor);
	printf("수학 : %d\n", (*ps).mat);
	printf("영어 : %d\n", ps->eng);


	return 0;
}

/*
	구조체 변수를 통해 멤버에 접근하는 방법은? '.'		(멤버접근 연산자, 점연산자)
	구조체 포인터를 통해 멤버에 접근하는 방법은? '->'	(멤버접근 연산자, 화살표연산자, 애로우연산자)

*/