#include<stdio.h>
#include<stdlib.h>

/*int main(void)
{
	int arr[4] = {4,3,2,1};
	int* pArr;

	pArr = (int *)malloc(sizeof(int) * 4);

	if(pArr == NULL)
	{
		printf("malloc error");
	}

	for(int i = 0; i < 4; ++i)
	{
		pArr[i] = arr[i];
	}

	for(int i = 0; i < 4; ++i)
	{
		printf("%d \n",pArr[i]);
	}
	free(pArr);

	system("pause");
	return 0;
}*/

int main(void)
{
	int num;
	int *pArr;
	int average = 0;
	printf("몇개의 과목을 저장할 것인가: ");
	scanf("%d",&num);

	if(num == 0)
	{
		return 0;
	}

	pArr = (int*)malloc(sizeof(int) * num);

	if(pArr == NULL)
	{
		printf("malloc error");
		exit(1);
	}

	for(int i = 0; i < num; ++i)
	{
		printf("[%d %d] 점수 입력: ",i +1,num);
		scanf("%d",&pArr[i]);
	}

	for(int i = 0; i < num; ++i)
	{
		printf("%d번째 과목의 점수 : %d\n",i + 1,pArr[i]);
	}

	for(int i = 0; i < num; ++i)
	{
		average += pArr[i];
	}

	average /= num;
	printf("평균 %d\n",average);

	free(pArr);

	system("pause");
	return 0;
}