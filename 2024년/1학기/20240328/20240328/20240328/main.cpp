#include <iostream>
#include <string>
using namespace std;

class Circle
{
public:
    double radius;

    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c;
    c.radius = 10;
    cout << c.calcArea() << endl;
    return 0;
}


/*class PrintData
{
public:
    void print(int i) { cout << i << endl; }
    void print(double f) { cout << f << endl; }
    void print(string s  = "No Data!") { cout << s << endl; }

};

int main()
{
    PrintData obj;

    obj.print(1);
    obj.print(3.14);
    obj.print("C++14 is cool.");
    obj.print();
    return 0;

}*/

/*class Rectangle
{
public:
    int width, hegiht;
    int calcArea()
    {
        return width * hegiht;
    }
};

int main()
{
    Rectangle obj;

    obj.width = 3;
    obj.hegiht = 4;

    int area = obj.calcArea();

    cout << "������� ����" << area << endl;
    return 0;
}*/

/*class Circle
{
public:
    int radius;
    string color; // string���� ����

    Circle(int r = 0, string c = "") : radius(r), color(c) {} // ������ �߰�

    double calcArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj(100, "blue"); // ��ü�� ������ �� �ʱⰪ ����
    cout << "���� ���� = " << obj.calcArea() << "\n";
    return 0;
}*/
