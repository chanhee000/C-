/////////////C나 Q를 두번 적어야 초기화나 종료됨(수정해야함)//////////////////////////

#include "calculator.h"
#include <iostream>

int main() {
    char choice; // choice 변수 초기화

    double x, y;
    char oper;
    Calculator calc(0); // 초기값을 0으로 설정

    do {
        std::cout << "수식을 입력하세요: ";
        std::cin >> x >> oper >> y;

        calc.calculate(x, oper, y);

        std::cout << "계속해서 연산하시겠습니까? (곱셈: '*', 덧셈: '+', 나눗셈: '/', 뺄셈: '-', 종료: 'Q', 초기화: 'C'): ";
        std::cin >> choice;

        if (choice == 'C' || choice == 'c') {
            calc.reset();
            std::cout << "값을 초기화 합니다. 다시 수식을 입력해주세요." << std::endl;
            continue; // 반복문의 처음으로 이동하여 다음 반복 수행
        }

        if (choice == 'Q' || choice == 'q') {
            std::cout << "프로그램을 종료합니다." << std::endl;
            break; // 반복문 종료
        }

    } while (true); // 무한 루프

    return 0;
}
