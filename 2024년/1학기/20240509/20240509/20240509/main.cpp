#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

#define SWAP(x,y,temp) ((temp) = (x), (x) = (y), (y) = (temp))

//��������: �迭���� �ش��ڸ��� �̹� �����ϰ� �� �ڸ��� ���� ���� ã�´�

// ���� ���� �Լ�
/*void selection_sort(int list[], int n)
{
    int i, j, least, temp;

    for (i = 0; i < n - 1; i++)
    {
        least = i;

        for (j = i + 1; j < n; j++)
        {
            if (list[j] < list[least])
            {
                least = j;
            }
        }
        if (i != least)
        {
            SWAP(list[i], list[least], temp);
        }
    }
}

int main()
{
    int i;
    const int n = 5;    // ��� ����
    int list[n];        // �迭 ����

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        list[i] = rand() % 101; // 0���� 100������ ���� ��
    }
    // ���� ���� �Լ� ȣ��
    selection_sort(list, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}*/


//��������:�迭�� ��� ��Ҹ� �տ������� ���ʴ�� �̹� ���ĵ� �迭�κа� ���Ͽ� �ڽ��� ��ġ�� ã�� ��
/*void insertion_sort(int list[], int n)
{
    int i, j, key;

    for (i = 1; i < n; i++)
    {
        key = list[i];

        for (j = i - 1; j >= 0 && list[j] > key; j--)
        {
            list[j + 1] = list[j];
        }
        list[j + 1] = key;
    }
}
int main()
{
    int i;
    const int n = 5;
    int list[n];

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        list[i] = rand() % 101; // 0���� 100������ ���� ��
    }

    insertion_sort(list, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
}*/


//��������:�迭���� ���� ���Ͽ� ū ���ڸ� �ڷ� ��� ���� �����ϴ� ��
/*void bubble_sort(int list[], int n)
{
    int i, j, temp;

    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (list[j] > list[j + 1])//��������  (list[j] < list[j + 1])��������
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int i;
    int n = 5;
    int list[5];

    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
      list[i] = rand() % 101; // 0���� 100������ ���� ��
    }

    bubble_sort(list, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
}*/