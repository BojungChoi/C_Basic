/*
	��ȯ ������
	�ٸ� Ÿ���� ��ü�� ��Ȱ�ɶ� ȣ��Ǵ�
*/
#include <iostream>

class Mycalss {
private:
	int val;

public:
	explicit Mycalss(int val) {				// explicit : ������ �տ� �ٿ��� �Ͻ���(implicit) ��ȯ�� �����ִ� Ű����
		printf("��ȯ ������ ȣ��!!\n");
		this->val = val;
	}
	void printMyClass() {
		printf("vlaue : %d\n", this->val);

	}
};


int main() {
	// Mycalss obj = 10;			// ��ȯ������ ȣ�� - ��ü�� ��ȯ�� �Ͼ
	// obj.printMyClass();

	Mycalss obj2{ 20 };
	obj2.printMyClass();

	return 0;
}