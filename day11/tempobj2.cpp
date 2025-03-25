/*
	임시객체의 수명연장 : R-Value 참조 (&&)
	MyClass obj = MyClass{10};				복사 or 이동 생성자 호출		가능
	MyClass& obj = MyClass{10};				일반 참조						불가능
	MyClass&& obj = MyClass{10};			R-value 참조					가능
	const MyClass& obj = MyClass{10};		const 참조 (수명 연장 가능)		가능/ 수정불가
*/
#include <iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {		// 함수의 매개인자는 임시객체이다.
		cout << num << "constructor" << endl;
	}
	~MyClass() { cout << num << "destructor" << endl; }
	void setData(int n) { num = n; }
};
int main() {

	//MyClass* ptr = &Myclass{ 10 };	
	//MyClass& obj2 = Myclass{ 20 };		// 임시객체는 참조를 사용할 수 없다 . 

	MyClass obj = MyClass{ 10 };
	obj.setData(20);	// 임시객체를 복사한 obj 

	MyClass&& obj2 = MyClass{ 20 };	// && R-value 참조 임시객체는 일반 참조(L-value 참조)는 못 받지만, R-value 참조는 받을 수 있다! 
	obj2.setData(22);

	const MyClass& obj3 = MyClass{ 30 }; // const 참조 (수명 연장 가능) but 수정불가.
	//obj3.setData(33);			// 상수참조를 하므로 값 변경을 불허함.

	cout << "bye~" << endl;

	return 0;
}