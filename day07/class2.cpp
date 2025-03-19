/*

*/

#include <iostream>
using namespace std;

class AClass {
private:		// 숨겨줘야함. public 
	int n1;
	int n2;
public:

	AClass(){}		// 생성자
	void setData(){}
	void getData(){}

};

int main()
{
	AClass obj;
	//Aclass obj(100, 200);	// 이놈은 안대 객체가 생성대려면 생성자 호출이 필요 , 두개의 입력을 받는 생성자가 엄슴
	obj.setData();		// 초기화 시키고
	obj.getData();



	return 0;
}