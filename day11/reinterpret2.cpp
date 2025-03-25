#include <iostream>

using namespace std;
int main() {
	int* p = new int{ 65 };
	char* pc = reinterpret_cast<char*>(p);
	printf("c : %c \n", *pc);


	p = reinterpret_cast<int*>(pc);
	printf("p: %d\n", *p);

	delete p;

	return 0;

}

//char ch = 10;
//int n = (int)ch;