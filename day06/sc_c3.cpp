/*
	C++ 구조체
*/

#include <iostream>
using namespace std;

class Human {
public:		// 외부에서도 클래스에 접근가능
	char name[20];
	int age;
	char job[10];

	Human() {}				// 디폴트 생성자 , 특징 : 출력이없음, 클래스이름과 똑같은 메서드


	void showHuman()
	{
		printf("name : %s, age: %d, job: %s", name, age, job);

	}
};


int main()
{
	Human h = {"김철수", 30, "백수" };

	h.showHuman();

	return 0;
}