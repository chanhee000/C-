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
    cout << "�ƹ��� �μ��� ���޵��� ���� ���: \n";
    display();

    cout << "\nù ��° �μ��� ���޵Ǵ� ���: \n";
    display();

    cout << "\n��� �μ��� ���޵�� ���: \n";
    display();
}


/*int square(int i)
{
    cout << "square(int)ȣ�� " << endl;
    return i * i;
}

double square(double i)
{
    cout << "square(double)ȣ�� " << endl;
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
        cout << "0���� ���� �� �����ϴ�." << endl;
        return 0;
    }
}

int main() {
    int x, y;

    cout << "ù ��° ������ �Է��ϼ���: ";
    cin >> x;
    cout << "�� ��° ������ �Է��ϼ���: ";
    cin >> y;

    char operation;
    cout << "������ �����ϼ��� (+, -, *, /): ";
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
        cout << "�߸��� �����Դϴ�." << endl;
        return 1;
    }
    
    cout << "���� ��� = " << result << endl;

    return 0;
}
*/