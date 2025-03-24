/*
	추상자료형을 이용해서 동적 할당된 객체를 참조할 때는 메모리 해제 시 참조타입의 소멸자만 호출되어 메모리 누수가 발생
	따라서 상위 클래스의 소멸자를 가상으로 만들어 실타입의 소멸자호출을 유도한다
*/

using namespace std;
#include <iostream>

class CTest {
private:
	int num;
public:
	CTest(int num) : num(num) {cout << num << "CTest constructor" << endl;}

	virtual void vfunc() {cout << "CTest virtal funcion()" << endl;}

	void func() {cout << "CTest fuction()" << endl;}

	virtual ~CTest() { cout << num << "CTest destructor" << endl; }		// 가상 소멸자
};
class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTest 생성자호출 " << endl; }
	void vfunc(){cout << "CTest function() override" << endl;}
	~CTestSub() { cout << subN << "CTest destructor" << endl; }

};


int main() {
	CTest obj(1);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	CTestSub obj2(2, 22);
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	obj.func();
	obj.vfunc();
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	obj2.func();
	obj2.vfunc();
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;

	CTest* ptr = new CTestSub(3, 33);
	
	delete ptr;



	return 0;
}