/*
	����ü ������:
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

	printf("���� : %d\n", ps->kor);
	printf("���� : %d\n", (*ps).mat);
	printf("���� : %d\n", ps->eng);


	return 0;
}

/*
	����ü ������ ���� ����� �����ϴ� �����? '.'		(������� ������, ��������)
	����ü �����͸� ���� ����� �����ϴ� �����? '->'	(������� ������, ȭ��ǥ������, �ַο쿬����)

*/