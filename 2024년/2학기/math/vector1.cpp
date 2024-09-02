#include <iostream>
#include <vector>

using namespace std;



//행렬의 덧셈
/*
int main() 
{
    // 행렬 A
    vector<vector<int>> A = {
        {1, 2},
        {4, 5}
    };

    // 행렬 B
    vector<vector<int>> B = {
        {7, 8},
        {9, 10}
    };

    int m = A.size();        //A의 행 수
    int n = A[0].size();     //A의 열 수
    int a = B.size();        //B의 행 수
    int b = B[0].size();     //B의 열 수



    vector<vector<int>> C(m, vector<int>(b, 0));


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/



//행렬의 뺄셈
/*
int main() 
{
    // 행렬 A
    vector<vector<int>> A = {
        {1, 2},
        {3, 4}
    };

    // 행렬 B
    vector<vector<int>> B = {
        {8, 7},
        {6, 5}
    };

    int m = A.size();        //A의 행 수
    int n = A[0].size();     //A의 열 수
    int a = B.size();        //B의 행 수
    int b = B[0].size();     //B의 열 수



    vector<vector<int>> C(m, vector<int>(b, 0));


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            C[i][j] = A[i][j] - B[i][j];
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

//행렬의 곱셈
/*int main() 
{

    // 행렬 A
    vector<vector<int>> A = {

        {1, 2, 3},
        {4, 5, 6}

    };

    // 행렬 B
    vector<vector<int>> B = {

        {7, 8},
        {9, 10},
        {11, 12}

    };

    int m = A.size();        //A의 행 수
    int n = A[0].size();     //A의 열 수
    int a = B.size();        //B의 행 수
    int b = B[0].size();     //B의 열 수

    vector<vector<int>> C(m, vector<int>(b, 0)); 
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];            
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }


}*/

//행과 열 변환

int main() {
    //행렬 A
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int m = A.size();        //A의 행 수
    int n = A[0].size();     //A의 열 수

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
         {
            printf("%d ", A[j][i]); 
         }
        printf("\n");
    }
    
    return 0;
}