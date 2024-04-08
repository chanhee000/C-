#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
public:
    int speed;
    int gear;
    std::string color;

    void speedUp();
    void speedDown();
    void gearUp();
    void gearDown();
    void show();
};

#endif // CAR_H
