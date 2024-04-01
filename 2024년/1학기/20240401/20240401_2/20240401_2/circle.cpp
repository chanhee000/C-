#include "circle.h"
using namespace std;


void Circle::init(int xval, int yval, int r) {
	x = xval;
	y = yval;
	radius = r;
}

void Circle::draw() {
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}
void Circle::move() {
	x += rand() % 50;
}