/*
	reinterpret_cast
	포인터 -> 포인터, 포인터 -> 변수, 변수 -> 포인터로 하는 주로 포인터관련 연산자.
*/
#include <iostream>
using namespace std;

int main() {
	
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);		// int타입 포인터를 long 타입으로 변환
	unsigned int ui = reinterpret_cast<int>(ip);		// int* --> uint
	printf("ip: %u, lg : %u, ui : %u \n ", ip, lg, ip);		// 동일한 주소를 가리키고있다는것을 확인할 수 있음.


	int* p = reinterpret_cast<int*>(lg);
	int* p1 = reinterpret_cast<int*>(ui);
	printf("p : %d , p1 : %d ", *p, *p1);

	return 0;
}