#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct vision {
	double left;
	double right;

}Vision;

Vision exchange(Vision);		// �Լ� ����

int main() {
	Vision rot;
	printf("�÷� �Է� (��, ��) >> \n");
	scanf_s("%lf %lf", &(rot.left), &(rot.right));		// '.'�� '&'���� �����ڿ켱������ ������, �������� ���ؼ� ��������� ǥ������

	rot = exchange(rot);

	printf("�ٲ� �÷�: �� : %.1lf �� : %.1lf\n", rot.left, rot.right);

	return 0;
}

// �÷� ��ȯ �Լ� ����
Vision exchange(Vision rver) {
	float temp;

	temp = rver.left;
	rver.left = rver.right;
	rver.right = temp;

	return rver;
}