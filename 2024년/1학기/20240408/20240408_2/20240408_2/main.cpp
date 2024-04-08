#include <iostream>
#include <string>
using namespace std;

class Employee {
    string name;
    int salary;
    int age;

public:
    int getSalary() { return salary; }
    int getAge() { return age; }
    string getName() { return name; }

    void setSalary(int newSalary) { salary = newSalary; }
    void setAge(int newAge) { age = newAge; }
};

int main() {
    Employee e;
    e.setSalary(300);
    e.setAge(26);
    int sa = e.getSalary();
    string s = e.getName();
    int a = e.getAge();
}
