/*

*/

#include <iostream>

int& func(int &ref) {
	ref++;				// lvalue
	return ++ref;		// rvalue
}
int main()
{
	int n = 10;
	int& ref = func(n);
	std::cout << n << std::endl;

	return 0;
}