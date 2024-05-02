#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_SIZE 5 // 스택의 최대 크기

int main() {
    int arr[MAX_SIZE]; //배열 생성
    int top = -1; // 스택 최대치를 나타내는 변수

    int choice; //데이터 선택
    int data;   //데이터 저장

    while (1)
    {
        printf("데이터 삽입은 1번(push), 추출은 2번(pop), 종료는 3번을 눌러주세요: ");
        scanf("%d", &choice); //사용하고싶은 데이터 선택

        switch (choice)
        {
        case 1: // Push
            if (top == MAX_SIZE - 1)// 스택이 전부 채워졌는지 확인
            { 
                printf("스택이 꽉 찼습니다.\n\n"); //스택이 전부 채워졌을 경우 출력
            }
            else {
                printf("삽입할 데이터를 입력해주세요: ");
                scanf("%d", &data); // 저장하고싶은 데이터값 입력
                arr[++top] = data; // top을 증가시킨 후 데이터를 값 저장
                printf("삽입된 스택\n");
                for (int i = 0; i <= top; i++) // 현재 스택 및 데이터값 출력
                {
                    printf("[%d]\n", arr[i]);
                }
                printf("\n\n");
            }
            break;

        case 2: // Pop
            if (top == -1) // 스택이 없는지 확인
            {
                printf("스택이 비어있습니다.\n\n"); // 비어있을 경우 출력
            }

            else
            {
                printf("추출된 데이터: %d\n\n", arr[top--]); // 스택에서 마지막 데이터 값을 추출하고 top을 감소
            }
            break;

        case 3: // 종료
            printf("프로그램을 종료합니다.\n\n"); // 프로그램 종료하
            return 0;

        default: //데이터 선택을 잘못했을 경우 출력
            printf("잘못된 선택입니다. 다시 선택해주세요.\n\n");
        }
    }

    return 0;
}