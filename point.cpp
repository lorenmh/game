#include <cmath>

#include "point.h"
#include "vec2.h"

Point::Point(double _x, double _y)
	: Vec2(_x, _y)
{}

Point::Point(const Vec2& other)
	: Vec2(other.x, other.y)
{}

Point::Point(const Point& other)
	: Vec2(other.x, other.y)
{}

Point& Point::operator=(const Point& other) {
	x = other.x;
	y = other.y;
	return *this;
}

double Point::distance(const Point& other) {
	return std::hypot(other.x-x, other.y-y);
}

void Point::translate(double _x, double _y) {
	x += _x;
	y += _y;
}
void Point::translate(const Vec2& v) {
	x += v.x;
	y += v.y;
}
