/*
	�߻��ڷ����� �̿��ؼ� ���� �Ҵ�� ��ü�� ������ ���� �޸� ���� �� ����Ÿ���� �Ҹ��ڸ� ȣ��Ǿ� �޸� ������ �߻�
	���� ���� Ŭ������ �Ҹ��ڸ� �������� ����� ��Ÿ���� �Ҹ���ȣ���� �����Ѵ�
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

	virtual ~CTest() { cout << num << "CTest destructor" << endl; }		// ���� �Ҹ���
};
class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int an1, int an2) : CTest(an1), subN(an2) { cout << subN << " CTest ������ȣ�� " << endl; }
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