/////////////C�� Q�� �ι� ����� �ʱ�ȭ�� �����(�����ؾ���)//////////////////////////

#include "calculator.h"
#include <iostream>

int main() {
    char choice; // choice ���� �ʱ�ȭ

    double x, y;
    char oper;
    Calculator calc(0); // �ʱⰪ�� 0���� ����

    do {
        std::cout << "������ �Է��ϼ���: ";
        std::cin >> x >> oper >> y;

        calc.calculate(x, oper, y);

        std::cout << "����ؼ� �����Ͻðڽ��ϱ�? (����: '*', ����: '+', ������: '/', ����: '-', ����: 'Q', �ʱ�ȭ: 'C'): ";
        std::cin >> choice;

        if (choice == 'C' || choice == 'c') {
            calc.reset();
            std::cout << "���� �ʱ�ȭ �մϴ�. �ٽ� ������ �Է����ּ���." << std::endl;
            continue; // �ݺ����� ó������ �̵��Ͽ� ���� �ݺ� ����
        }

        if (choice == 'Q' || choice == 'q') {
            std::cout << "���α׷��� �����մϴ�." << std::endl;
            break; // �ݺ��� ����
        }

    } while (true); // ���� ����

    return 0;
}
