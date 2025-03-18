/*
*/
#include <iostream>
using namespace std;

int func(int &anum)
{
	anum++;
	return anum;
}
int main()
{
	int num = 10;
	// int& res = func(num);	// func(num)은 값을 반환하는 함순데, int 값을 참조로 받으려함.
					// func의 함수가 지 할일 다하고 사라졌는데 res는 함수에서 리턴된 anum을 참조로 하라고했으니 바보가 되는거임.ㅋ
					// 웃긴건 원래는 안되지만 const를 활용하면 '임시객체'로 바뀌면서 임시메모리공간(주소)가 할당되면서 참조가 가능해짐
					// 여튼 여기서 포인트는 const를 사용하게되면 R Value인 상수를 임시객체로 만들어 저장한다는거임.!
					
					// 두번째 방법 const 를 사용하지않고 하려면 6행 func 함수에 &를갖다 붙히면 가능함 , ref6.cpp 확인
					// (타입을 맞추면 출력하는데 지장없음)
	const int& res = func(num);
	cout << res << endl;
	
	return 0;
}