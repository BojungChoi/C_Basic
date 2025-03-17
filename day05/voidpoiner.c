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
	//(int*)p = &n;		// 안됨 대입연산자 기준으로 좌측으로는 형변환이 안됨
	printf("*p : %d\n", *(int*)p);
	//printf("*p : %d\n", *p); // void 타입에다가 간접참고를 프린트 하라했으니 안댐 (타입을 명시적으로 정해줘야함)
	p = &db;
	printf("*p : %d\n", *(double*)p);




	return 0;
}