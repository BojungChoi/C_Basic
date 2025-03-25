/*
	�⺻ Ŭ������ �����ϴ� L-Value�� �Ļ��� Ŭ������ ���� ������ ��ȯ
	��Ӱ��迡�� �����ϰ� ����ȯ�� �����Ѵ�. ��ĳ����
	�ٿ�ĳ���ð��� �������� ���ؼ� virtual �޼��尡 �� �־�� �Ѵ�.
*/

#include <iostream>

class SuperClass {
public:
	int n1, n2;
};
class SubClass : public SuperClass {
public:
	int n3, n4;
};
class Sub2 : public SubClass {
public:
	int n5, n6;
};
int main() {

	SuperClass* sp;
	SubClass* sup;
	Sub2* sup2;
	Sub2 obj{};

	sup2 = dynamic_cast<Sub2*>(&obj);		// ��������� ��Ȯ�� ����ȯ�� ���� dynamic_cast<Sub2*>
	sup = dynamic_cast<SubClass*>(sup2);	// upcasting
	sp = dynamic_cast<SuperClass*>(sup2);

	return 0;
}