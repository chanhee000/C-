/////////////C�� Q�� �ι� ����� �ʱ�ȭ�� �����(�����ؾ���)//////////////////////////

#include "calculator.h"
#include <iostream>

Calculator::Calculator(double initial_value) : result(initial_value) {}

void Calculator::calculate(double x, char oper, double y) {
    if (oper == 'C' || oper == 'c') {
        reset();
        std::cout << "���� ���� �ʱ�ȭ�Ǿ����ϴ�." << std::endl;
        return;
    }

    switch (oper) {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        if (y != 0)
            result = x / y;
        else
            std::cout << "����: 0���� ���� �� �����ϴ�!" << std::endl;
        break;
    default:
        std::cout << "�߸��� �������Դϴ�!" << std::endl;
        break;
    }
    std::cout << "���: " << x << ' ' << oper << ' ' << y << " = " << result << std::endl;

    char choice;
    std::cout << "����ؼ� �����Ͻðڽ��ϱ�? (����: '*', ����: '+', ������: '/', ����: '-', ����: 'Q', �ʱ�ȭ: 'C'): ";
    std::cin >> choice;
    switch (choice) {
    case '*':
    case '+':
    case '/':
    case '-':
        oper = choice;
        break;
    case 'Q':
    case 'q':
        std::cout << "���α׷��� �����մϴ�." << std::endl;
        return; // ���α׷� ����
    default:
        std::cout << "���� �ʱ�ȭ �մϴ�." << std::endl;
        return;
    }

    std::cout << "���� �Է��ϼ���: ";
    std::cin >> y;

    // ���� ���� result�� ���ο� x�� ����Ͽ� ���
    calculate(result, oper, y);
}

void Calculator::reset() {
    result = 0;
}

double Calculator::getResult() const {
    return result;
}
