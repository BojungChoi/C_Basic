/*
	void pointer -
*/

#include <stdio.h>

int main()
{
	int n = 10;
	double db = 3.14;

	//int pn = &n;
	//double* pdb = &db;
	void* p;

	p = &n;
	//(int*)p = &n;		// �ȵ� ���Կ����� �������� �������δ� ����ȯ�� �ȵ�
	printf("*p : %d\n", *(int*)p);
	//printf("*p : %d\n", *p); // void Ÿ�Կ��ٰ� �������� ����Ʈ �϶������� �ȴ� (Ÿ���� ��������� ���������)
	p = &db;
	printf("*p : %d\n", *(double*)p);




	return 0;
}