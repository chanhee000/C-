#include "Car.h"
#include <iostream>

void Car::speedUp() {
    speed += 10;
}

void Car::speedDown() {
    speed -= 10;
}

void Car::gearUp() {
    gear += 1;
}

void Car::gearDown() {
    gear -= 1;
}

void Car::show() {
    std::cout << "============== " << std::endl;
    std::cout << "속도: " << speed << std::endl;
    std::cout << "기어: " << gear << std::endl;
    std::cout << "색상: " << color << std::endl;
    std::cout << "============== " << std::endl;
}
