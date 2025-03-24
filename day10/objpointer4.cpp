/*

*/
using namespace std;
#include <iostream>
class MyClass{
public:
	MyClass(){}
	void show() {
		cout << "Hi" << endl;
	}
};

int main()
{
	MyClass* ptr = nullptr;		// nullpointer °ªÀ» ³ªÅ¸³¿
	//printf("prt: %p\n", *ptr);
	if (ptr != nullptr) ptr->show();
	else printf("ptr is null\n");

	ptr = new MyClass{};
	ptr->show();

	delete ptr;

	

	return 0;
}