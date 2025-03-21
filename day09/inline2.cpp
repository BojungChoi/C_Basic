/*
	전처리기 매크로 함수  /  매크로는 전처리기가 처리하지만, inline 은 컴파일러가 처리함.
*/
#include <iostream>

#define SQUARE_MACRO(X) ((X)*(X)) // macro 함수구현

inline int square_inline(int x) {
	return x * x;		// inline 함수구현
}

int main()
{
	std::cout << SQUARE_MACRO(2) << std::endl;
	std::cout << square_inline(2) << std::endl;
	return 0;
}

