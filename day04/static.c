/*
	  static
*/

#include <stdio.h>

void incFunc();
void incFunc2();
int main()
{

	for (int i = 0; i < 5; i++) {
		incFunc();
		incFunc2();
	}
	// scnt++;									// ����	������ �ٸ� �Լ����� ����� �� ����.		

	return 0;
}

void incFunc()
{
	int icnt = 0;
	icnt++;
	printf("incFunc: cnt = %d\n", icnt);
}

void incFunc2()
{
	static int scnt = 0;
	scnt++;
	printf("incFunc2: cnt = %d\n", scnt);
}
// ���� �ڵ�� static ������ ����� �����̴�. static ������ ���α׷��� ����Ǵ� ���� �޸𸮿� �����ϸ鼭 �� ���� �����Ѵ�.
// static ������ �Լ� ������ ����Ǿ� �Լ� �������� ���Ǵ� ���� ������ ���ȴ�.
