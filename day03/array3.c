#include <stdio.h>

int main() {
 
	int score[5] = { 0, };		// �迭�ǹ��� 0���� �ʱ�ȭ
	int size = sizeof(score) / sizeof(score[0]);

	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &score[i]); //, sizeof(score[i]) -> ���ڿ����� �ʿ�
		sum += score[i];
	}
		printf("�� score���� : %d", sum);
	
	return 0;

}



