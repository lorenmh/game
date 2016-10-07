#include "vec2.h"

Vec2::Vec2(double _x, double _y) {
	x = _x;
	y = _y;
}

Vec2::Vec2(const Vec2& other)
	: x(other.x)
	, y(other.y)
{}

Vec2& Vec2::operator=(const Vec2& other) {
	x = other.x;
	y = other.y;
	return *this;
}
