#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SUBJECTS 3
#define STUDENTS 10

int main() {
    // 학생의 학번과 성적을 저장할 배열 선언
    char student_id[STUDENTS][10];
    int scores[STUDENTS][SUBJECTS];
    float averages[STUDENTS];

    // 학생 정보 및 성적 입력 받기
    for (int i = 0; i < STUDENTS; i++) {
        printf("%d번째 학생의 학번을 입력하세요: ", i + 1);
        scanf("%s", student_id[i]);

        // 각 과목별 성적 입력 받기
        for (int j = 0; j < SUBJECTS; j++) {
            char subject[10];
            switch (j) {
            case 0:
                strcpy(subject, "국어");
                break;
            case 1:
                strcpy(subject, "영어");
                break;
            case 2:
                strcpy(subject, "수학");
                break;
            }
            printf("%d번째 학생의 %s 점수를 입력하세요: ", i + 1, subject);
            scanf("%d", &scores[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // 각 과목별 최저 점수 및 학번 출력
    printf("과목별 최저 점수와 학번:\n");
    for (int j = 0; j < SUBJECTS; j++) {
        int min_score = scores[0][j];
        char min_student_id[10];
        strcpy(min_student_id, student_id[0]);

        char subject[10];
        switch (j) {
        case 0:
            strcpy(subject, "국어");
            break;
        case 1:
            strcpy(subject, "영어");
            break;
        case 2:
            strcpy(subject, "수학");
            break;
        }
        printf("%s 최저 점수: %d, 학번: %s", subject, min_score, min_student_id);
    }
    printf("\n\n");

    // 각 학생의 평균 계산
    for (int i = 0; i < STUDENTS; i++) {
        float total_score = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            total_score += scores[i][j];
        }
        averages[i] = total_score / SUBJECTS;
    }

    // 평균값이 낮은 순서대로 출력
    printf("평균값이 낮은 순서로 출력합니다\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("%-2s l %-2d l %-2d l %-2d l %.2f\n\n", student_id[i], scores[i][0], scores[i][1], scores[i][2], averages[i]);
    }

    return 0;
}
