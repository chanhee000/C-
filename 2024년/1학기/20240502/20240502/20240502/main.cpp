#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define MAX_SIZE 5 // ������ �ִ� ũ��

int main() {
    int arr[MAX_SIZE]; //�迭 ����
    int top = -1; // ���� �ִ�ġ�� ��Ÿ���� ����

    int choice; //������ ����
    int data;   //������ ����

    while (1)
    {
        printf("������ ������ 1��(push), ������ 2��(pop), ����� 3���� �����ּ���: ");
        scanf("%d", &choice); //����ϰ���� ������ ����

        switch (choice)
        {
        case 1: // Push
            if (top == MAX_SIZE - 1)// ������ ���� ä�������� Ȯ��
            { 
                printf("������ �� á���ϴ�.\n\n"); //������ ���� ä������ ��� ���
            }
            else {
                printf("������ �����͸� �Է����ּ���: ");
                scanf("%d", &data); // �����ϰ���� �����Ͱ� �Է�
                arr[++top] = data; // top�� ������Ų �� �����͸� �� ����
                printf("���Ե� ����\n");
                for (int i = 0; i <= top; i++) // ���� ���� �� �����Ͱ� ���
                {
                    printf("[%d]\n", arr[i]);
                }
                printf("\n\n");
            }
            break;

        case 2: // Pop
            if (top == -1) // ������ ������ Ȯ��
            {
                printf("������ ����ֽ��ϴ�.\n\n"); // ������� ��� ���
            }

            else
            {
                printf("����� ������: %d\n\n", arr[top--]); // ���ÿ��� ������ ������ ���� �����ϰ� top�� ����
            }
            break;

        case 3: // ����
            printf("���α׷��� �����մϴ�.\n\n"); // ���α׷� ������
            return 0;

        default: //������ ������ �߸����� ��� ���
            printf("�߸��� �����Դϴ�. �ٽ� �������ּ���.\n\n");
        }
    }

    return 0;
}