/*
	변환 생성자
	다른 타입의 객체로 변활될때 호출되는
*/
#include <iostream>

class Mycalss {
private:
	int val;

public:
	explicit Mycalss(int val) {				// explicit : 생성자 앞에 붙여서 암시적(implicit) 변환을 막아주는 키워드
		printf("변환 생성자 호출!!\n");
		this->val = val;
	}
	void printMyClass() {
		printf("vlaue : %d\n", this->val);

	}
};


int main() {
	// Mycalss obj = 10;			// 변환생성자 호출 - 객체의 변환이 일어남
	// obj.printMyClass();

	Mycalss obj2{ 20 };
	obj2.printMyClass();

	return 0;
}