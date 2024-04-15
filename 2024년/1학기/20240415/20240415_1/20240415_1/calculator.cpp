/////////////C나 Q를 두번 적어야 초기화나 종료됨(수정해야함)//////////////////////////

#include "calculator.h"
#include <iostream>

Calculator::Calculator(double initial_value) : result(initial_value) {}

void Calculator::calculate(double x, char oper, double y) {
    if (oper == 'C' || oper == 'c') {
        reset();
        std::cout << "기존 값이 초기화되었습니다." << std::endl;
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
            std::cout << "오류: 0으로 나눌 수 없습니다!" << std::endl;
        break;
    default:
        std::cout << "잘못된 연산자입니다!" << std::endl;
        break;
    }
    std::cout << "결과: " << x << ' ' << oper << ' ' << y << " = " << result << std::endl;

    char choice;
    std::cout << "계속해서 연산하시겠습니까? (곱셈: '*', 덧셈: '+', 나눗셈: '/', 뺄셈: '-', 종료: 'Q', 초기화: 'C'): ";
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
        std::cout << "프로그램을 종료합니다." << std::endl;
        return; // 프로그램 종료
    default:
        std::cout << "값을 초기화 합니다." << std::endl;
        return;
    }

    std::cout << "수를 입력하세요: ";
    std::cin >> y;

    // 기존 값인 result를 새로운 x로 사용하여 계산
    calculate(result, oper, y);
}

void Calculator::reset() {
    result = 0;
}

double Calculator::getResult() const {
    return result;
}
