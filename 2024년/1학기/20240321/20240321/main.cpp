#include <iostream>

using namespace std;

void display(char c = '*', int n = 10)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
        cout << endl;
    }
}
int main()
{
    cout << "아무런 인수가 전달디지 않은 경우: \n";
    display();

    cout << "\n첫 번째 인수만 전달되는 경우: \n";
    display();

    cout << "\n모든 인수가 전달디는 경우: \n";
    display();
}


/*int square(int i)
{
    cout << "square(int)호출 " << endl;
    return i * i;
}

double square(double i)
{
    cout << "square(double)호출 " << endl;
    return i * i;
}

int main()
{
    cout << square(10) << endl;
    cout << square(20) << endl;
    
    return 0;
}*/

/*void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}


int main()
{
    int a = 100, b = 200;

    printf("a = %d b = %d\n",a,b);
    swap(a,b);
    printf("a = %d b = %d\n",a,b);
    return 0;
}*/

/*using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y != 0) {
        return x / y;
    }
    else {
        cout << "0으로 나눌 수 없습니다." << endl;
        return 0;
    }
}

int main() {
    int x, y;

    cout << "첫 번째 정수를 입력하세요: ";
    cin >> x;
    cout << "두 번째 정수를 입력하세요: ";
    cin >> y;

    char operation;
    cout << "연산을 선택하세요 (+, -, *, /): ";
    cin >> operation;

    int result;
    switch (operation) {
    case '+':
        result = add(x, y);
        break;
    case '-':
        result = subtract(x, y);
        break;
    case '*':
        result = multiply(x, y);
        break;
    case '/':
        result = divide(x, y);
        break;
    default:
        cout << "잘못된 연산입니다." << endl;
        return 1;
    }
    
    cout << "연산 결과 = " << result << endl;

    return 0;
}
*/