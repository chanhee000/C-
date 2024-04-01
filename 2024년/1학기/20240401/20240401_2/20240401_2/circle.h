#include <iostream>
#include <windows.h>
using namespace std;

class Circle {
public:
	void init(int xval, int yval, int r);
	void draw();
	void move();
private:
	int x, y, radius;
};