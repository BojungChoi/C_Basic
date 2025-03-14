#include <stdio.h>

int main() {
    int scores[4][3];
    int sum[4] = { 0 };
    float avr[4] = { 0 };

    // 입력 받기
    printf("점수를 입력하세요! (국어 영어 수학 순서)\n");

    for (int i = 0; i < 4; i++) {
        printf("%d번째 사람 점수 입력: ", i + 1);
        for (int j = 0; j < 4; j++) {
            scanf_s("%d", &scores[i][j]);
        }
    }

    // 총점과 평균 계산
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i] += scores[i][j];  // 총점 계산
        }
        avr[i] = sum[i] / (float)3;  // 평균 계산 (소수점 포함하려고 float으로 나눔)
    }

    
    // 출력
    printf("사람별 총점과 평균!\n");
    for (int i = 0; i < 4; i++) {
        printf("%d번째 사람: 총점 = %d, 평균 = %.2f\n", i + 1, sum[i], avr[i]);
    }

    return 0;
}
