#include<stdio.h>
#include<stdlib.h> 
#include<time.h>

#define SWAP(x,y,temp) ((temp) = (x), (x) = (y), (y) = (temp))

//선택정렬: 배열에서 해당자리를 이미 선택하고 그 자리에 오는 값을 찾는다

// 선택 정렬 함수
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
    const int n = 5;    // 상수 선언
    int list[n];        // 배열 선언

    srand(time(NULL));

    for (i = 0; i < n; i++)
    {
        list[i] = rand() % 101; // 0부터 100까지의 랜덤 값
    }
    // 선택 정렬 함수 호출
    selection_sort(list, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
    printf("\n");

    return 0;
}*/


//삽입정렬:배열의 모든 요소를 앞에서부터 차례대로 이미 정렬딘 배열부분과 비교하여 자신의 위치를 찾는 것
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
        list[i] = rand() % 101; // 0부터 100까지의 랜덤 값
    }

    insertion_sort(list, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
}*/


//버블정렬:배열에서 값을 비교하여 큰 숫자를 뒤로 계속 보내 정렬하는 것
/*void bubble_sort(int list[], int n)
{
    int i, j, temp;

    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j < i; j++)
        {
            if (list[j] > list[j + 1])//오름차순  (list[j] < list[j + 1])내림차순
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
      list[i] = rand() % 101; // 0부터 100까지의 랜덤 값
    }

    bubble_sort(list, n);

    for (i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }
}*/