#include <stdio.h>

int main(void)
{
    double temp, result;
    FILE* fp;

    // 파일 열기
    fp = fopen("/home/amap/2024_onefifth_catkin_ws/src/gps_lla_to_utm/gps/shark_full.txt", "r");

    if(fp == NULL)
    {
        printf("파일이 없습니다\n\n");
        return -1;
    }

    else
    {
        // 파일 내용 읽기
        for(int i = 0; i < 20; i++)
        {
            result = fscanf(fp, "%lf", &temp);

            if(result == EOF)
            {
                break;
            }
            else
            {
                 printf("%lf\n",temp);
            }
        }
    }
    fclose(fp);

    return 0;
}



/*
int main(void)
{
    int temp, result;
    FILE* fp;

    // 파일 열기
    fp = fopen("test.txt", "r");

    if (fp == NULL)
    {
        printf("파일이 없습니다\n\n");
        return -1;
    }
    else
    {
        int i = 0;

        do
        {
            result = fscanf(fp, "%d", &temp);
            if(result != EOF)  // 파일의 끝이 아니면 출력
            {
                printf("%d %d\n", temp, result);
            }
            i++;
        } while (result != EOF && i < 20); // EOF가 아니고 20번 반복하기 전까지 루프

    }
    
    fclose(fp);
    return 0;
}
*/

/*
int main(void)
{
    int temp, result;
    FILE* fp;

    // 파일 열기
    fp = fopen("test.txt", "r");

    if(fp == NULL)
    {
        printf("파일이 없습니다\n\n");
        return -1;
    }

    else
    {
        // 파일 내용 읽기
        for(int i = 0; i < 20; i++)
        {
            result = fscanf(fp, "%d", &temp);

            if(result == EOF)
            {
                break;
            }
            else
            {
                 printf("%d\n",temp);
            }
        }
    }
    fclose(fp);

    return 0;
}
*/
