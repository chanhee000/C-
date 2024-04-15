/////////////C나 Q를 두번 적어야 초기화나 종료됨(수정해야함)//////////////////////////
#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    double result; // 이전 결과를 저장할 변수

public:
    Calculator(double initial_value = 0); // 생성자 선언 및 초기값을 0으로 설정
    void calculate(double x, char oper, double y); // 연산 수행 함수
    void reset(); // 초기화 함수
    double getResult() const; // 결과 값을 반환하는 함수
};

#endif // CALCULATOR_H
