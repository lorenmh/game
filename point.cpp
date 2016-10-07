#include <cmath>

#include "point.h"

Point::Point(double _x, double _y) {
	x = _x;
	y = _y;
}

double Point::distance(const Point& other) {
	return std::hypot(other.x-x, other.y-y);
}
