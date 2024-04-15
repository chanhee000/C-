/////////////C�� Q�� �ι� ����� �ʱ�ȭ�� �����(�����ؾ���)//////////////////////////
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    double result; // ���� ����� ������ ����

public:
    Calculator(double initial_value = 0); // ������ ���� �� �ʱⰪ�� 0���� ����
    void calculate(double x, char oper, double y); // ���� ���� �Լ�
    void reset(); // �ʱ�ȭ �Լ�
    double getResult() const; // ��� ���� ��ȯ�ϴ� �Լ�
};

#endif // CALCULATOR_H
