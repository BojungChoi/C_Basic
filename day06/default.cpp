/*
	����Ʈ �Ű�����:
*/
#include <iostream>

int func(int num = 5) {		// ����Ʈ �Ű����� ,int num = 5 �Ű������� ������ 5 �� �־� ����ϰڴ�.
	return num * num;
}

int main() {

	int res;
	res = func(10);
	std::cout << res << std::endl;

	res = func(0);
	std::cout << res << std::endl;

	res = func();			// func() == func(5) -> �Է��� �����ʾ� ����Ʈ �Ű����� ���
	std::cout << res << std::endl;

	return 0;
}