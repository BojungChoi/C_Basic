/*

*/

#include <iostream>
using namespace std;

class AClass {
private:		// ���������. public 
	int n1;
	int n2;
public:

	AClass(){}		// ������
	void setData(){}
	void getData(){}

};

int main()
{
	AClass obj;
	//Aclass obj(100, 200);	// �̳��� �ȴ� ��ü�� ��������� ������ ȣ���� �ʿ� , �ΰ��� �Է��� �޴� �����ڰ� ����
	obj.setData();		// �ʱ�ȭ ��Ű��
	obj.getData();



	return 0;
}