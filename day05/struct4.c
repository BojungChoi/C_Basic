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

    // �Է¹ޱ�
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\n[%d��° �л� �Է�]\n", i + 1);

        printf("�й�: ");
        scanf_s("%d", &students[i].id);

        printf("����: ");
        scanf_s("%d", &students[i].pf.age);

        printf("Ű(cm): ");
        scanf_s("%lf", &students[i].pf.height);

        printf("������(kg): ");
        scanf_s("%lf", &students[i].pf.weight);

        printf("����: ");
        scanf_s("%lf", &students[i].grade);
    }

    // ���
    printf("\n==== �л� ���� ��� ====\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\n[%d��° �л�]\n", i + 1);
        printf("�й�: %d\n", students[i].id);
        printf("����: %d��\n", students[i].pf.age);
        printf("Ű: %.1lf cm\n", students[i].pf.height);
        printf("������: %.1lf kg\n", students[i].pf.weight);
        printf("����: %.2lf\n", students[i].grade);
    }

    return 0;
}
