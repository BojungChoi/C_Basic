/*
	디폴트 매개변수:
*/
#include <iostream>

int func(int num = 5) {		// 디폴트 매개변수 ,int num = 5 매개변수가 없을때 5 를 넣어 사용하겠다.
	return num * num;
}

int main() {

	int res;
	res = func(10);
	std::cout << res << std::endl;

	res = func(0);
	std::cout << res << std::endl;

	res = func();			// func() == func(5) -> 입력을 넣지않아 디폴트 매개변수 사용
	std::cout << res << std::endl;

	return 0;
}