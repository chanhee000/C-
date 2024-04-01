#include "car.h"

using namespace std;

int main()
{
	Car myCar;
	myCar.setSpeed(100);
	cout << "현재 속도는 " << myCar.getSpeed() << endl;
	return 0;
}