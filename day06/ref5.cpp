/*
*/
#include <iostream>
using namespace std;

int func(int &anum)
{
	anum++;
	return anum;
}
int main()
{
	int num = 10;
	// int& res = func(num);	// func(num)�� ���� ��ȯ�ϴ� �Լ���, int ���� ������ ��������.
					// func�� �Լ��� �� ���� ���ϰ� ������µ� res�� �Լ����� ���ϵ� anum�� ������ �϶�������� �ٺ��� �Ǵ°���.��
					// ����� ������ �ȵ����� const�� Ȱ���ϸ� '�ӽð�ü'�� �ٲ�鼭 �ӽø޸𸮰���(�ּ�)�� �Ҵ�Ǹ鼭 ������ ��������
					// ��ư ���⼭ ����Ʈ�� const�� ����ϰԵǸ� R Value�� ����� �ӽð�ü�� ����� �����Ѵٴ°���.!
					
					// �ι�° ��� const �� ��������ʰ� �Ϸ��� 6�� func �Լ��� &������ ������ ������ , ref6.cpp Ȯ��
					// (Ÿ���� ���߸� ����ϴµ� �������)
	const int& res = func(num);
	cout << res << endl;
	
	return 0;
}