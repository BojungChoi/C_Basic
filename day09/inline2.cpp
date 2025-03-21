/*
	��ó���� ��ũ�� �Լ�  /  ��ũ�δ� ��ó���Ⱑ ó��������, inline �� �����Ϸ��� ó����.
*/
#include <iostream>

#define SQUARE_MACRO(X) ((X)*(X)) // macro �Լ�����

inline int square_inline(int x) {
	return x * x;		// inline �Լ�����
}

int main()
{
	std::cout << SQUARE_MACRO(2) << std::endl;
	std::cout << square_inline(2) << std::endl;
	return 0;
}

