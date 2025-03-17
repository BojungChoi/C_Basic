#include <stdio.h>
# define _CRT_SECURE_NO_WARNING
#define STUDENT_COUNT 3 

struct profile {
    int age;
    double height;
    double weight;
};

struct student {
    struct profile pf;
    int id;
    double grade;
};

int main() {
    struct student students[STUDENT_COUNT];

    // 입력받기
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\n[%d번째 학생 입력]\n", i + 1);

        printf("학번: ");
        scanf_s("%d", &students[i].id);

        printf("나이: ");
        scanf_s("%d", &students[i].pf.age);

        printf("키(cm): ");
        scanf_s("%lf", &students[i].pf.height);

        printf("몸무게(kg): ");
        scanf_s("%lf", &students[i].pf.weight);

        printf("평점: ");
        scanf_s("%lf", &students[i].grade);
    }

    // 출력
    printf("\n==== 학생 정보 목록 ====\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\n[%d번째 학생]\n", i + 1);
        printf("학번: %d\n", students[i].id);
        printf("나이: %d세\n", students[i].pf.age);
        printf("키: %.1lf cm\n", students[i].pf.height);
        printf("몸무게: %.1lf kg\n", students[i].pf.weight);
        printf("평점: %.2lf\n", students[i].grade);
    }

    return 0;
}
