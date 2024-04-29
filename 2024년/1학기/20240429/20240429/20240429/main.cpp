#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SUBJECTS 3
#define STUDENTS 10

int main() {
    // �л��� �й��� ������ ������ �迭 ����
    char student_id[STUDENTS][10];
    int scores[STUDENTS][SUBJECTS];
    float averages[STUDENTS];

    // �л� ���� �� ���� �Է� �ޱ�
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d��° �л��� �й��� �Է��ϼ���: ", i + 1);
        scanf("%s", student_id[i]);

        // �� ���� ���� �Է� �ޱ�
        for (int j = 0; j < SUBJECTS; j++) {
            char subject[10];
            switch (j) {
            case 0:
                strcpy(subject, "����");
                break;
            case 1:
                strcpy(subject, "����");
                break;
            case 2:
                strcpy(subject, "����");
                break;
            }
            printf("%d��° �л��� %s ������ �Է��ϼ���: ", i + 1, subject);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // �� ���� ���� ���� �� �й� ���
    printf("���� ���� ������ �й�:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        int min_score = scores[0][j];
        char min_student_id[10];
        strcpy(min_student_id, student_id[0]);

        char subject[10];
        switch (j) {
        case 0:
            strcpy(subject, "����");
            break;
        case 1:
            strcpy(subject, "����");
            break;
        case 2:
            strcpy(subject, "����");
            break;
        }
        printf("%s ���� ����: %d, �й�: %s", subject, min_score, min_student_id);
    }
    printf("\n\n");

    // �� �л��� ��� ���
    for (int i = 0; i < STUDENTS; i++) {
        float total_score = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            total_score += scores[i][j];
        }
        averages[i] = total_score / SUBJECTS;
    }

    // ��հ��� ���� ������� ���
    printf("��հ��� ���� ������ ����մϴ�\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%-2s l %-2d l %-2d l %-2d l %.2f\n\n", student_id[i], scores[i][0], scores[i][1], scores[i][2], averages[i]);
    }

    return 0;
}
