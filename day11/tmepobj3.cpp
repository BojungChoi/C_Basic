/*
*/
using namespace std;
#include <iostream>
class MyClass {
	int num;
public:
	MyClass(int n) : num(n) {cout << this << " ," << num << " constructor" << endl; }
	MyClass(const MyClass& other) : num(other.num) { cout << this << " copy " << endl; }
	~MyClass() { cout << this << " ," << num << " destructor" << endl; }
	void setData(int n) { num = n; }
};
MyClass func(MyClass aobj) {	// obj 객체를 값 전달로 받았기 때문에 복사 생성자 1회 실행됨	// 19행 boj2로 값이 넘어가면 func 소멸되면서 소멸자 실행 // 만약 &aobj 처럼 참조형식이었다면 복사생성자호출실행안됨.
	cout << "func()" << endl;
	return aobj;	// 리턴 시, aobj가 복사되어 obj2로 전달됨 → 복사 생성자 1회 더 실행 (단, 컴파일러 최적화가 없을 경우 기준)
}
int main() {
	MyClass obj{ 10 };
	MyClass obj2{ func(obj) };
	// 1) func(obj) 호출 시 → 복사 생성자 1회 (obj → aobj)
	// 2) return aobj 시 → 복사 생성자 1회 (aobj → 임시 객체 or obj2)
	// 최종적으로 obj2 생성
	cout << "bye~~" << endl;

	return 0;
	// 종료되면서 obj2, obj, func() 안의 aobj 순서로 소멸자 호출됨
}

