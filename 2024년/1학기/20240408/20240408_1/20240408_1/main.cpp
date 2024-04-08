#include "Car.h"

int main() {
    Car myCar, yourCar;

    myCar.speed = 100;
    myCar.gear = 3;
    myCar.color = "red";

    yourCar.speed = 10;
    yourCar.gear = 1;
    yourCar.color = "blue";

    myCar.speedUp();
    yourCar.speedUp();

    myCar.show();
    yourCar.show();

    return 0;
}
