#include <stdio.h>

int main() {
    int scores[4][3];
    int sum[4] = { 0 };
    float avr[4] = { 0 };

    // �Է� �ޱ�
    printf("������ �Է��ϼ���! (���� ���� ���� ����)\n");

    for (int i = 0; i < 4; i++) {
        printf("%d��° ��� ���� �Է�: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf_s("%d", &scores[i][j]);
        }
    }

    // ������ ��� ���
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i] += scores[i][j];  // ���� ���
        }
        avr[i] = sum[i] / (float)3;  // ��� ��� (�Ҽ��� �����Ϸ��� float���� ����)
    }

    
    // ���
    printf("����� ������ ���!\n");
    for (int i = 0; i < 4; i++) {
        printf("%d��° ���: ���� = %d, ��� = %.2f\n", i + 1, sum[i], avr[i]);
    }

    return 0;
}
