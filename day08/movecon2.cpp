/*
	이동 생성자(T&&)
	r-value reference 를 피라미터로 갖는 이동 생성자
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;


class Human {
private:
	char name[10]; // C스타일 배열은 이동이 안댐
	int age;
public:
	// 입력 두개받는 생성자
	Human(const char* name, int age) {
		printf("입력 두개 받는 생성자 호출");
		strcpy_s(this->name,10, name);
		this->age = age;
	}
	// 복사 생성자
	Human(const Human& other) {
		cout << "복사 생성자 호출!" << endl;
		strcpy(this->name, other.name);
		this->age = other.age;
	}
	// 이동생성자
	Human(Human&& other) noexcept { // noexcept "이 이동 생성자는 절대 예외를 던지지 않는다!" 라고 컴파일러한테 보장해서, 최적화를 더 잘하게 만들기 위해서
		printf("이동 생성자 호출\n");
		strcpy(this->name, other.name);
		this->age = other.age;

		//other.age = 0;
	}



	void printHuman(){
		printf("name: %s, age : %d\n", this->name, this->age);
	}
};
int main()
{
	Human h("홍길동", 30);
	h.printHuman();
	
	Human h2(h);
	h2.printHuman();

	Human h3(std::move(h));  // std:: 와 && 오른쪽값참조! 
	h3.printHuman();
	
	h.printHuman(); // 35행 -> h 에 데이터가 h3로 이동되었다는 반증

	return 0;
}