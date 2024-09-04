#include <iostream>
#include <vector>

using namespace std;


double determinant_3x3(const vector<vector<int>> &A) {
    int m = A.size();        // A의 행 수
    int n = A[0].size();     // A의 열 수
    
    printf("행렬의 크기: %dx%d\n", m, n);
    
     double deter = 0.0;
    
    // 3x3 행렬이 아닐 경우
    if (m != 3 || n != 3) {
        printf("3x3 행렬이 아닙니다.\n");
        return 0; 
    }
	
	else
	{
		    // 행렬식 계산
    deter =   A[0][0] * (A[1][1] * A[2][2] - A[1][2] * A[2][1])
            - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
            + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
	}

                 
    return deter;
}

int main() {
    vector<vector<int>> A = 
    {
        {1, 2, 3},
        {9, 7, 8},
        {4, 5, 6}
    };
	
    double result = determinant_3x3(A);
    printf("계산 값: %.2f\n", result);

    return 0;
}
