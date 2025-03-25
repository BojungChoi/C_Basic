/*
	reinterpret_cast
	������ -> ������, ������ -> ����, ���� -> �����ͷ� �ϴ� �ַ� �����Ͱ��� ������.
*/
#include <iostream>
using namespace std;

int main() {
	
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);		// intŸ�� �����͸� long Ÿ������ ��ȯ
	unsigned int ui = reinterpret_cast<int>(ip);		// int* --> uint
	printf("ip: %u, lg : %u, ui : %u \n ", ip, lg, ip);		// ������ �ּҸ� ����Ű���ִٴ°��� Ȯ���� �� ����.


	int* p = reinterpret_cast<int*>(lg);
	int* p1 = reinterpret_cast<int*>(ui);
	printf("p : %d , p1 : %d ", *p, *p1);

	return 0;
}