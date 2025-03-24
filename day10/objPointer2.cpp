/*
	按眉 悼利积己
*/
using namespace std;
#include <iostream>
class AClass {
public:
	void showAClass() {
		cout << "Dynamically created object" << endl;
	}

};


int main() {

	AClass* ptr = new AClass{ };		// 按眉 悼利 且寸
	ptr->showAClass();

	delete ptr;							// 悼利 皋葛府 秦力

	return 0;
}